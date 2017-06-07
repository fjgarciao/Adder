from conans import ConanFile

class AdderConan(ConanFile):
    name = "Adder"
    version = "0.3"
    settings = "os", "compiler", "build_type", "arch"
    options = {"shared": [True, False]}
    default_options = "shared=True"
    generators = "cmake"

    def source(self):
        self.run("git clone https://github.com/fjgarciao/adder.git module")
        self.run("cd module && git checkout master")

