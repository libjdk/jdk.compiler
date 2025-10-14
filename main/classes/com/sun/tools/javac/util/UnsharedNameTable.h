#ifndef _com_sun_tools_javac_util_UnsharedNameTable_h_
#define _com_sun_tools_javac_util_UnsharedNameTable_h_
//$ class com.sun.tools.javac.util.UnsharedNameTable
//$ extends com.sun.tools.javac.util.Name$Table

#include <com/sun/tools/javac/util/Name$Table.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {
					class Name;
					class Names;
					class UnsharedNameTable$HashEntry;
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

class $export UnsharedNameTable : public ::com::sun::tools::javac::util::Name$Table {
	$class(UnsharedNameTable, $NO_CLASS_INIT, ::com::sun::tools::javac::util::Name$Table)
public:
	UnsharedNameTable();
	using ::com::sun::tools::javac::util::Name$Table::fromUtf;
	void init$(::com::sun::tools::javac::util::Names* names, int32_t hashSize);
	void init$(::com::sun::tools::javac::util::Names* names);
	static ::com::sun::tools::javac::util::Name$Table* create(::com::sun::tools::javac::util::Names* names);
	virtual void dispose() override;
	virtual ::com::sun::tools::javac::util::Name* fromChars($chars* cs, int32_t start, int32_t len) override;
	virtual ::com::sun::tools::javac::util::Name* fromUtf($bytes* cs, int32_t start, int32_t len) override;
	$Array<::com::sun::tools::javac::util::UnsharedNameTable$HashEntry>* hashes = nullptr;
	int32_t hashMask = 0;
	int32_t index = 0;
};

				} // util
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_util_UnsharedNameTable_h_