# CQtDeployerServer
This is temp repository for solve the [task 415](https://github.com/QuasarApp/CQtDeployer/issues/415) of The [CQtDeployer](https://github.com/QuasarApp/CQtDeployer).

After finishing of the developing, this repository will be unite with the main repository of the CQtDeployer.

# This template supports next build targets:

|   Command or make target   |  Description    |
|------|------|
| **make test** | The run tests for a project (dependet of Qt Tests, so you need to add Qt in Cmake using CMAKE_PREFIX_PATH) |
| **make doc** | The generate a documentation for a project (dependet of doxygen) |
| **make deploy** | The generate distribution for a project (dependet of CQtDeployer) |
| **make release** | The prepare Qt Installer framework repository for a project, generate a snap package and APK file for android (dependet of CQtDeployer,  snapcraft, AndroidDeployer). |
