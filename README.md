# Tesseracs — c template

Starter project for [Tesseracs](https://github.com/tesseracs) chat sessions.

Clone URL: `https://github.com/tesseracs/templates.c`

## Layout

- `src/main.c` — entry point that assembles a few checks and prints a release readiness report.
- `include/check.h` / `src/check.c` — small domain model plus scoring helpers.
- `include/report.h` / `src/report.c` — reporting layer that formats the output.
- `run.sh` — builds into `build/` and runs the executable.

## Run

```sh
./run.sh
```

## Why this shape?

This keeps the template easy to understand while demonstrating a practical C starter:

- public headers in `include/`
- implementation files in `src/`
- structs, enums, and helper functions instead of a toy math example
- a single command to build and run
