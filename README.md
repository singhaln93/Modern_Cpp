# Mordern_Cpp

### Folder structure
    .
    ├── build/                      # build files from exec.sh <untracked by git>
    ├── build.ninja/                # build files from exec_ninja.sh <untracked by git>
    ├── dep/                        # dependencies (upcoming feature)
    ├── docs/                       # docs-html generated files from doxygen linked with gh pages
    ├── scripts/                    # scripts for automation
    │   ├── clang-format/
    │   ├── cmake/
    │   ├── Doxygen/
    │   └── git/
    ├── src/                        # source files directory
    ├── test/                       # unit test directory
        └── mainTest.hpp            # main test header
    ├── uml/                        # Plant Uml (upcoming feature)
        └── Uml.plantuml
    ├── CMakeLists.txt              # Main CMakeLists.txt
    ├── LICENSE         
    └── README.md   
    
Use short lowercase names at least for the top-level files and folders except `LICENSE`, `README.md`

##### Tree view
```bash
tree -L 2
```
For more examples, please refer to the [Documentation](https://neeraj2k18.github.io/Mordern_Cpp//)
