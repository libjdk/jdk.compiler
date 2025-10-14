#ifndef _com_sun_tools_javac_file_RelativePath$RelativeFile_h_
#define _com_sun_tools_javac_file_RelativePath$RelativeFile_h_
//$ class com.sun.tools.javac.file.RelativePath$RelativeFile
//$ extends com.sun.tools.javac.file.RelativePath

#include <com/sun/tools/javac/file/RelativePath.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace file {
					class RelativePath$RelativeDirectory;
				}
			}
		}
	}
}
namespace java {
	namespace lang {
		class CharSequence;
	}
}
namespace java {
	namespace util {
		namespace zip {
			class ZipEntry;
			class ZipFile;
		}
	}
}
namespace javax {
	namespace tools {
		class JavaFileObject$Kind;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace file {

class $import RelativePath$RelativeFile : public ::com::sun::tools::javac::file::RelativePath {
	$class(RelativePath$RelativeFile, $NO_CLASS_INIT, ::com::sun::tools::javac::file::RelativePath)
public:
	RelativePath$RelativeFile();
	using ::com::sun::tools::javac::file::RelativePath::compareTo;
	void init$($String* p);
	void init$(::com::sun::tools::javac::file::RelativePath$RelativeDirectory* d, $String* p);
	void init$(::com::sun::tools::javac::file::RelativePath$RelativeDirectory* d, ::com::sun::tools::javac::file::RelativePath* p);
	virtual $String* basename() override;
	virtual int32_t compareTo(Object$* other) override;
	virtual ::com::sun::tools::javac::file::RelativePath$RelativeDirectory* dirname() override;
	static ::com::sun::tools::javac::file::RelativePath$RelativeFile* forClass(::java::lang::CharSequence* className, ::javax::tools::JavaFileObject$Kind* kind);
	virtual ::java::util::zip::ZipEntry* getZipEntry(::java::util::zip::ZipFile* zip);
	virtual $String* toString() override;
};

				} // file
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_file_RelativePath$RelativeFile_h_