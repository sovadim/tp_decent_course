# Pseudo-random distribution

The program takes 3 command-line arguments:
- file - filename
- numbilets - number of exam tickets
- parameter - permutation parameter

The file contains full names of students ([example](./tests/short.suit.txt)).
The program evenly and deterministically outputs to the console a line from the file + the number of the exam ticket.
Ticket numbers are deterministically related to the name and the parameter that changes the distribution.

## Implementation

The program reads the file line by line, calculates the hash of the line with the name and outputs the remainder of dividing the hash by the number of tickets. The std::hash function (С++20) is used for hashing.

## How to run

_Example:_
```bash
$ <build-dir>/bin/exam-var-generator --file <pwd>/tests/short.suit.txt --numbilets 20 --parameter 5
```

## How to build

From root directory:

```bash
$ mkdir build && cd build
$ cmake ..
$ make -j hw1
```
