# Collectio-Librorum

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
[![GitHub issues open](https://img.shields.io/github/issues/Kubaaa96/IdleRomanEmpire.svg?)](https://github.com/Kubaaa96/IdleRomanEmpire/issues)

- [About Project](#about-project)
- [Building](#building)
- [Roadmap](#roadmap)
- [Contributing](#contributing)
- [Licence](#licence)
- [Contact](#contact)

## About Project
This will be tool for managing your books, by inserting informations about them, and arranging this objects into Groups which can be arranged into Libraries and then Collection. 

## Building

Building this project requires [Qt 6.0](https://www.qt.io/) to be installed. 

Clone:
```
git clone https://github.com/Kubaaa96/Collectio-Librorum
```
This project uses cmake, so you can build it simply by first configuring with the build system of choice
```
cmake . -Bbuild -DCMAKE_INSTALL_PREFIX=./install -DCMAKE_BUILD_TYPE=Release -DQT_HOME="Path.To.QT"
```
QT_HOME needs to point to compile folder inside qt for example ```D:/Qt/6.0.0/msvc2019_64``` in my case

and then compiling
```
cmake --build ./build --config Release --target install
```

You can also refer to github workflows for examples with complete build pipelines.

## Roadmap
See the [open issues](https://github.com/Kubaaa96/Collectio-Librorum/issues) for a list of proposed features (and known issues).

## Contributing

If you want to implement some features from Issue list or you have your own feel free to do this. You can just open new issue with your idea to discuss with others.

1. Fork the Project
2. Create your Feature Branch (`git checkout -b feature/AmazingFeature`)
3. Commit your Changes (`git commit -m 'Add some AmazingFeature'`)
4. Push to the Branch (`git push origin feature/AmazingFeature`)
5. Open a Pull Request

## Licence
Distributed under the MIT License. See `LICENSE` for more information.

## Contact

Jakub Dobrowolski  [![LinkedIn](https://img.shields.io/badge/linkedin-%230077B5.svg?&logo=linkedin&logoColor=white)](https://www.linkedin.com/in/jakub-dobrowolski/)  [![Gmail](https://img.shields.io/badge/gmail-D14836?&logo=gmail&logoColor=white)](jd.kuba96@gmail.com) jd.kuba96@gmail.com

Project Link: https://github.com/Kubaaa96/Collectio-Librorum