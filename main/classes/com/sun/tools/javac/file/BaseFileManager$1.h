#ifndef _com_sun_tools_javac_file_BaseFileManager$1_h_
#define _com_sun_tools_javac_file_BaseFileManager$1_h_
//$ class com.sun.tools.javac.file.BaseFileManager$1
//$ extends java.lang.Thread

#include <java/lang/Thread.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace file {
					class BaseFileManager;
				}
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace file {

class BaseFileManager$1 : public ::java::lang::Thread {
	$class(BaseFileManager$1, $NO_CLASS_INIT, ::java::lang::Thread)
public:
	BaseFileManager$1();
	void init$(::com::sun::tools::javac::file::BaseFileManager* this$0, $String* arg0);
	virtual void run() override;
	::com::sun::tools::javac::file::BaseFileManager* this$0 = nullptr;
};

				} // file
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_file_BaseFileManager$1_h_