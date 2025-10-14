#ifndef _com_sun_tools_javac_file_RelativePath_h_
#define _com_sun_tools_javac_file_RelativePath_h_
//$ class com.sun.tools.javac.file.RelativePath
//$ extends java.lang.Comparable

#include <java/lang/Comparable.h>

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
	namespace nio {
		namespace file {
			class FileSystem;
			class Path;
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace file {

class $import RelativePath : public ::java::lang::Comparable {
	$class(RelativePath, $NO_CLASS_INIT, ::java::lang::Comparable)
public:
	RelativePath();
	void init$($String* p);
	virtual $String* basename() {return nullptr;}
	virtual int32_t compareTo(::com::sun::tools::javac::file::RelativePath* other);
	virtual int32_t compareTo(Object$* other) override;
	virtual ::com::sun::tools::javac::file::RelativePath$RelativeDirectory* dirname() {return nullptr;}
	virtual bool equals(Object$* other) override;
	virtual $String* getPath();
	virtual int32_t hashCode() override;
	virtual ::java::nio::file::Path* resolveAgainst(::java::nio::file::Path* directory);
	virtual ::java::nio::file::Path* resolveAgainst(::java::nio::file::FileSystem* fs);
	virtual $String* toString() override;
	$String* path = nullptr;
};

				} // file
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_file_RelativePath_h_