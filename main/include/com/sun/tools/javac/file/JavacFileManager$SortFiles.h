#ifndef _com_sun_tools_javac_file_JavacFileManager$SortFiles_h_
#define _com_sun_tools_javac_file_JavacFileManager$SortFiles_h_
//$ class com.sun.tools.javac.file.JavacFileManager$SortFiles
//$ extends java.lang.Enum
//$ implements java.util.Comparator

#include <java/lang/Array.h>
#include <java/lang/Enum.h>
#include <java/util/Comparator.h>

#pragma push_macro("FORWARD")
#undef FORWARD
#pragma push_macro("REVERSE")
#undef REVERSE

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace file {

class $import JavacFileManager$SortFiles : public ::java::lang::Enum, public ::java::util::Comparator {
	$class(JavacFileManager$SortFiles, 0, ::java::lang::Enum, ::java::util::Comparator)
public:
	JavacFileManager$SortFiles();
	static $Array<::com::sun::tools::javac::file::JavacFileManager$SortFiles>* $values();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($String* $enum$name, int32_t $enum$ordinal);
	virtual $String* toString() override;
	static ::com::sun::tools::javac::file::JavacFileManager$SortFiles* valueOf($String* name);
	static $Array<::com::sun::tools::javac::file::JavacFileManager$SortFiles>* values();
	static ::com::sun::tools::javac::file::JavacFileManager$SortFiles* FORWARD;
	static ::com::sun::tools::javac::file::JavacFileManager$SortFiles* REVERSE;
	static $Array<::com::sun::tools::javac::file::JavacFileManager$SortFiles>* $VALUES;
};

				} // file
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("FORWARD")
#pragma pop_macro("REVERSE")

#endif // _com_sun_tools_javac_file_JavacFileManager$SortFiles_h_