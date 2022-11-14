## How to solve the make the string great coding question

For a detailed explanation to solving the 'Make The String Great' [see my blog post](https://techventure.tech/how-to-solve-the-make-the-string-great/). 

## Building

### Preliminary 

To start, the repository has to be cloned:

```bash
$ git clone https://github.com/RobertCrupa/make_the_string_great.git
$ cd make_the_string_great
```

### Building and running the test cases

To create build folder and run tests:

```bash
$ cmake -S . -B build
$ cmake --build build
$ cd build && ctest
```
