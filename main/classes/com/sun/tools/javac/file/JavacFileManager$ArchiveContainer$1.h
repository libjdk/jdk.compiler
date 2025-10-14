#ifndef _com_sun_tools_javac_file_JavacFileManager$ArchiveContainer$1_h_
#define _com_sun_tools_javac_file_JavacFileManager$ArchiveContainer$1_h_
//$ class com.sun.tools.javac.file.JavacFileManager$ArchiveContainer$1
//$ extends java.nio.file.SimpleFileVisitor

#include <java/nio/file/SimpleFileVisitor.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace file {
					class JavacFileManager;
					class JavacFileManager$ArchiveContainer;
				}
			}
		}
	}
}
namespace java {
	namespace nio {
		namespace file {
			class FileVisitResult;
			class Path;
		}
	}
}
namespace java {
	namespace nio {
		namespace file {
			namespace attribute {
				class BasicFileAttributes;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace file {

class JavacFileManager$ArchiveContainer$1 : public ::java::nio::file::SimpleFileVisitor {
	$class(JavacFileManager$ArchiveContainer$1, $NO_CLASS_INIT, ::java::nio::file::SimpleFileVisitor)
public:
	JavacFileManager$ArchiveContainer$1();
	void init$(::com::sun::tools::javac::file::JavacFileManager$ArchiveContainer* this$1, ::com::sun::tools::javac::file::JavacFileManager* val$this$0, ::java::nio::file::Path* val$root);
	virtual ::java::nio::file::FileVisitResult* preVisitDirectory(::java::nio::file::Path* dir, ::java::nio::file::attribute::BasicFileAttributes* attrs);
	virtual ::java::nio::file::FileVisitResult* preVisitDirectory(Object$* dir, ::java::nio::file::attribute::BasicFileAttributes* attrs) override;
	::com::sun::tools::javac::file::JavacFileManager$ArchiveContainer* this$1 = nullptr;
	::java::nio::file::Path* val$root = nullptr;
	::com::sun::tools::javac::file::JavacFileManager* val$this$0 = nullptr;
};

				} // file
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_file_JavacFileManager$ArchiveContainer$1_h_