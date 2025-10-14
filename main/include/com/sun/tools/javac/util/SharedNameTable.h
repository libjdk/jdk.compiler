#ifndef _com_sun_tools_javac_util_SharedNameTable_h_
#define _com_sun_tools_javac_util_SharedNameTable_h_
//$ class com.sun.tools.javac.util.SharedNameTable
//$ extends com.sun.tools.javac.util.Name$Table

#include <com/sun/tools/javac/util/Name$Table.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {
					class List;
					class Name;
					class Names;
					class SharedNameTable$NameImpl;
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

class $import SharedNameTable : public ::com::sun::tools::javac::util::Name$Table {
	$class(SharedNameTable, 0, ::com::sun::tools::javac::util::Name$Table)
public:
	SharedNameTable();
	using ::com::sun::tools::javac::util::Name$Table::fromUtf;
	void init$(::com::sun::tools::javac::util::Names* names, int32_t hashSize, int32_t nameSize);
	void init$(::com::sun::tools::javac::util::Names* names);
	static ::com::sun::tools::javac::util::SharedNameTable* create(::com::sun::tools::javac::util::Names* names);
	static void dispose(::com::sun::tools::javac::util::SharedNameTable* t);
	virtual void dispose() override;
	virtual ::com::sun::tools::javac::util::Name* fromChars($chars* cs, int32_t start, int32_t len) override;
	virtual ::com::sun::tools::javac::util::Name* fromUtf($bytes* cs, int32_t start, int32_t len) override;
	static ::com::sun::tools::javac::util::List* freelist;
	$Array<::com::sun::tools::javac::util::SharedNameTable$NameImpl>* hashes = nullptr;
	$bytes* bytes = nullptr;
	int32_t hashMask = 0;
	int32_t nc = 0;
};

				} // util
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_util_SharedNameTable_h_