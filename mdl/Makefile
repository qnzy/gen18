# gen18 model-level regression tests
#
#   make test    run both suites, fail on any problem
#   make clean   remove logs
#
# Requires only ngspice. No xschem, no Python -- runs in a bare container.
#
# Each suite prints one PASS or FAIL line per check. The harness fails on:
#   - any FAIL line
#   - ANY warning or error from ngspice. A healthy run of these suites
#     is completely silent, so anything ngspice says is worth reading.
#     Enumerating individual warning strings does not scale -- each new
#     one is only discovered after it has already gone unnoticed. Past
#     examples that a blanket check catches for free:
#       "unrecognized parameter"    model does not implement it (XL/XW)
#       "is ignored because"        overridden by another (NSUB vs K1)
#       "conductance reset to"      clamped because NRD/NRS were 0
#     If a benign warning ever appears that genuinely cannot be fixed,
#     add it to ALLOW below rather than dropping the check.
#   - a PASS count below the expected number, which catches the case
#     where the simulation did not run at all. Checking only for the
#     absence of FAIL would report success on an empty log.

NGSPICE ?= ngspice

# Warnings that are known-benign and cannot be fixed. Keep this empty if
# at all possible -- a silent run is the whole point.
ALLOW = ^$$

DEVICES_EXPECTED = 19
NOISE_EXPECTED   = 5

.PHONY: test test-devices test-noise clean

test: test-devices test-noise
	@echo "all suites passed"

test-devices:
	@$(NGSPICE) -b test_devices.sp > devices.log 2>&1 || true
	@$(MAKE) --no-print-directory check LOG=devices.log N=$(DEVICES_EXPECTED) NAME=devices

test-noise:
	@$(NGSPICE) -b test_noise.sp > noise.log 2>&1 || true
	@$(MAKE) --no-print-directory check LOG=$(LOG) N=$(NOISE_EXPECTED) NAME=noise LOG=noise.log

check:
	@fails=`grep -c '^FAIL' $(LOG) || true`; \
	 passes=`grep -c '^PASS' $(LOG) || true`; \
	 ignored=`grep -iE 'warning|error' $(LOG) | grep -vE '$(ALLOW)' | wc -l`; \
	 status=0; \
	 if [ "$$fails" -ne 0 ]; then \
	   echo "FAILED ($(NAME)): $$fails check(s) failed"; \
	   grep '^FAIL' $(LOG); status=1; \
	 fi; \
	 ran=`expr $$passes + $$fails`; \
	 if [ "$$ran" -lt "$(N)" ]; then \
	   echo "FAILED ($(NAME)): only $$ran/$(N) checks ran -- suite did not complete"; \
	   tail -5 $(LOG); status=1; \
	 fi; \
	 if [ "$$ignored" -ne 0 ]; then \
	   echo "FAILED ($(NAME)): ngspice emitted $$ignored warning(s)/error(s)"; \
	   grep -iE 'warning|error' $(LOG) | grep -vE '$(ALLOW)' | sort -u; status=1; \
	 fi; \
	 if [ "$$status" -eq 0 ]; then echo "ok ($(NAME)): $$passes/$(N) checks passed"; fi; \
	 exit $$status

clean:
	@rm -f devices.log noise.log
