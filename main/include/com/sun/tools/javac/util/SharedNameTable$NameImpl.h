#ifndef _com_sun_tools_javac_util_SharedNameTable$NameImpl_h_
#define _com_sun_tools_javac_util_SharedNameTable$NameImpl_h_
//$ class com.sun.tools.javac.util.SharedNameTable$NameImpl
//$ extends com.sun.tools.javac.util.Name

#include <com/sun/tools/javac/util/Name.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {
					class SharedNameTable;
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

class $import SharedNameTable$NameImpl : public ::com::sun::tools::javac::util::Name {
	$class(SharedNameTable$NameImpl, $NO_CLASS_INIT, ::com::sun::tools::javac::util::Name)
public:
	SharedNameTable$NameImpl();
	void init$(::com::sun::tools::javac::util::SharedNameTable* table);
	virtual bool equals(Object$* other) override;
	virtual $bytes* getByteArray() override;
	virtual int8_t getByteAt(int32_t i) override;
	virtual int32_t getByteLength() override;
	virtual int32_t getByteOffset() override;
	virtual int32_t getIndex() override;
	virtual int32_t hashCode() override;
	::com::sun::tools::javac::util::SharedNameTable$NameImpl* next = nullptr;
	int32_t index = 0;
	int32_t length$ = 0;
};

				} // util
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_util_SharedNameTable$NameImpl_h_