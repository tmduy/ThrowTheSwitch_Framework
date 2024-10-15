# ThrowTheSwitch_Framework
Comprehensive testing suite using ThrowTheSwitch framework for efficient unit testing in embedded systems.

## Table of Contents

1. [Getting Started](#getting-started)
    - [Cloning the Project](#cloning-the-project)
    - [Initializing Submodules](#initializing-submodules)
2. [Building and Running](#building-and-running)
    - [Setting up Makefile](#setting-up-makefile)
    - [Building](#building)
    - [Running Tests](#running-tests)
3. [Contributing](#contributing)
4. [License](#license)

## Getting Started
To get a local copy up and running, follow these steps.

### Cloning the Project
Clone the repository using Git:

```bash
git clone https://github.com/tmduy/ThrowTheSwitch_Framework.git
cd your-repository
```

### Initializing Submodules
This project uses ThrowTheSwitch framework as a submodule. Initialize and update the submodule:

```bash
git submodule update --init --recursive
```

## Building and Running
### Setting up Makefile

Ensure you have gcc and necessary build tools installed.

### Building
Run make to build the project:
```bash
make
```

### Running Tests
After building, execute the tests:

```bash
build/out
```

The test results will be displayed:

```bash
$ build/out 
Unity test run 1 of 1
.Application/app_tg1.c:31:TEST(APPLICATION, TC_TestInteger):INFO: PASSED
.Application/app_tg1.c:37:TEST(APPLICATION, TC_TestString):INFO: PASSED


-----------------------
2 Tests 0 Failures 0 Ignored 
OK
```

## Contributing
I welcome contributions to improve this project! To contribute:

1. Fork the repository.
2. Create a new branch (git checkout -b feature-branch).
3. Make your changes.
4. Commit your changes (git commit -am 'Add new feature').
5. Push to the branch (git push origin feature-branch).
6. Create a new Pull Request.
7. For major changes, please open an issue first to discuss the proposed changes.

## License
This project is licensed under the License of the ThrowTheSwitch framework.
