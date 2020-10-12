# Cryptographic protocols and decentralized systems

This is the repository for projects from course Cryptographic protocols and decentralized systems by Technopark mail.ru in fall 2020.

## Coursework overview

1. [**Pseudo-random distribution**](./hw1)</br></br>
The program evenly and deterministically generate exam ticket numbers for the list of students.

## How to build

To build all course projects:

```bash
$ mkdir build && cd build
$ cmake ..
$ make -j
```

To build only one project:
```bash
$ make hw<N>
```

_To build with ninja:_

```bash
$ mkdir build && cd build
$ cmake -GNinja ..
$ ninja -j N
```
