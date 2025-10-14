#ifndef _com_sun_tools_javac_file_RelativePath$RelativeDirectory_h_
#define _com_sun_tools_javac_file_RelativePath$RelativeDirectory_h_
//$ class com.sun.tools.javac.file.RelativePath$RelativeDirectory
//$ extends com.sun.tools.javac.file.RelativePath

#include <com/sun/tools/javac/file/RelativePath.h>

namespace java {
	namespace lang {
		class CharSequence;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace file {

class $import RelativePath$RelativeDirectory : public ::com::sun::tools::javac::file::RelativePath {
	$class(RelativePath$RelativeDirectory, $NO_CLASS_INIT, ::com::sun::tools::javac::file::RelativePath)
public:
	RelativePath$RelativeDirectory();
	using ::com::sun::tools::javac::file::RelativePath::compareTo;
	void init$($String* p);
	void init$(::com::sun::tools::javac::file::RelativePath$RelativeDirectory* d, $String* p);
	virtual $String* basename() override;
	virtual int32_t compareTo(Object$* other) override;
	virtual bool contains(::com::sun::tools::javac::file::RelativePath* other);
	virtual ::com::sun::tools::javac::file::RelativePath$RelativeDirectory* dirname() override;
	static ::com::sun::tools::javac::file::RelativePath$RelativeDirectory* forPackage(::java::lang::CharSequence* packageName);
	virtual $String* toString() override;
};

				} // file
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_file_RelativePath$RelativeDirectory_h_