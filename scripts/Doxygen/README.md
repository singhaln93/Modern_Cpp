### Doxygen

#### Install Doxygen in Linux

```bash
sudo apt-get update && upgrade
sudo apt-get install doxygen

doxygen --version
```
#### Generate the config file.
Genrate the file and tweak changes for css, logo and directories.
```bash
doxygen -g doxyfile.conf
```
#### Add-on
Custom css
```bash
git submodule add https://github.com/jothepro/doxygen-awesome-css.git
cd doxygen-awesome-css
```

#### Run/Execute
```bash
doxygen doxyfile.conf
```

##### Resources
[Doxygen tutorial](https://www.tutorialspoint.com/how-to-install-doxygen-on-ubuntu)
[Custom CSS Theme for doxygen](https://reposhub.com/javascript/css/jothepro-doxygen-awesome-css.html)
