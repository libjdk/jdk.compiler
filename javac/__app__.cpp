#include <jdk.compiler.javac.h>

#include <Javac.h>
#include <jcpp.h>

int main(int argc, char** argv) {
	::jdk$compiler$javac::init();
	{
		$var($StringArray, args, nullptr);
		if (argc > 1) {
			$assign(args, $new($StringArray, argc - 1));
			for (int32_t i = 1; i < argc; i++) {
				args->set(i - 1, $cstr(argv[i]));
			}
		} else {
			$assign(args, $new($StringArray, 0));
		}
		try {
			::Javac::main(args);
		} catch ($Throwable& e) {
			e->printStackTrace();
			$System::deinit();
			return 1;
		}
	}
	$System::deinit();
	return 0;
}