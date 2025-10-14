#ifndef _com_sun_tools_javac_file_JavacFileManager$ArchiveContainer$2_h_
#define _com_sun_tools_javac_file_JavacFileManager$ArchiveContainer$2_h_
//$ class com.sun.tools.javac.file.JavacFileManager$ArchiveContainer$2
//$ extends java.nio.file.SimpleFileVisitor

#include <java/nio/file/SimpleFileVisitor.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace file {
					class JavacFileManager$ArchiveContainer;
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {
					class ListBuffer;
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
namespace java {
	namespace util {
		class Set;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace file {

class JavacFileManager$ArchiveContainer$2 : public ::java::nio::file::SimpleFileVisitor {
	$class(JavacFileManager$ArchiveContainer$2, $NO_CLASS_INIT, ::java::nio::file::SimpleFileVisitor)
public:
	JavacFileManager$ArchiveContainer$2();
	void init$(::com::sun::tools::javac::file::JavacFileManager$ArchiveContainer* this$1, ::java::util::Set* val$fileKinds, ::com::sun::tools::javac::util::ListBuffer* val$resultList);
	virtual ::java::nio::file::FileVisitResult* preVisitDirectory(::java::nio::file::Path* dir, ::java::nio::file::attribute::BasicFileAttributes* attrs);
	virtual ::java::nio::file::FileVisitResult* preVisitDirectory(Object$* dir, ::java::nio::file::attribute::BasicFileAttributes* attrs) override;
	virtual ::java::nio::file::FileVisitResult* visitFile(::java::nio::file::Path* file, ::java::nio::file::attribute::BasicFileAttributes* attrs);
	virtual ::java::nio::file::FileVisitResult* visitFile(Object$* file, ::java::nio::file::attribute::BasicFileAttributes* attrs) override;
	::com::sun::tools::javac::file::JavacFileManager$ArchiveContainer* this$1 = nullptr;
	::com::sun::tools::javac::util::ListBuffer* val$resultList = nullptr;
	::java::util::Set* val$fileKinds = nullptr;
};

				} // file
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_file_JavacFileManager$ArchiveContainer$2_h_