#ifndef _com_sun_tools_javac_util_UnsharedNameTable$NameImpl_h_
#define _com_sun_tools_javac_util_UnsharedNameTable$NameImpl_h_
//$ class com.sun.tools.javac.util.UnsharedNameTable$NameImpl
//$ extends com.sun.tools.javac.util.Name

#include <com/sun/tools/javac/util/Name.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {
					class UnsharedNameTable;
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

class $import UnsharedNameTable$NameImpl : public ::com::sun::tools::javac::util::Name {
	$class(UnsharedNameTable$NameImpl, $NO_CLASS_INIT, ::com::sun::tools::javac::util::Name)
public:
	UnsharedNameTable$NameImpl();
	void init$(::com::sun::tools::javac::util::UnsharedNameTable* table, $bytes* bytes, int32_t index);
	virtual $bytes* getByteArray() override;
	virtual int8_t getByteAt(int32_t i) override;
	virtual int32_t getByteLength() override;
	virtual int32_t getByteOffset() override;
	virtual int32_t getIndex() override;
	$bytes* bytes = nullptr;
	int32_t index = 0;
};

				} // util
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_util_UnsharedNameTable$NameImpl_h_