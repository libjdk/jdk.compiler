#ifndef _com_sun_tools_javac_util_Position$LineTabMapImpl_h_
#define _com_sun_tools_javac_util_Position$LineTabMapImpl_h_
//$ class com.sun.tools.javac.util.Position$LineTabMapImpl
//$ extends com.sun.tools.javac.util.Position$LineMapImpl

#include <com/sun/tools/javac/util/Position$LineMapImpl.h>

namespace java {
	namespace util {
		class BitSet;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

class $export Position$LineTabMapImpl : public ::com::sun::tools::javac::util::Position$LineMapImpl {
	$class(Position$LineTabMapImpl, $NO_CLASS_INIT, ::com::sun::tools::javac::util::Position$LineMapImpl)
public:
	Position$LineTabMapImpl();
	void init$(int32_t max);
	virtual int32_t getColumnNumber(int32_t pos) override;
	virtual int64_t getColumnNumber(int64_t pos) override;
	virtual int64_t getLineNumber(int64_t pos) override;
	virtual int32_t getLineNumber(int32_t pos) override;
	virtual int32_t getPosition(int32_t line, int32_t column) override;
	virtual int64_t getPosition(int64_t line, int64_t column) override;
	virtual int64_t getStartPosition(int64_t line) override;
	virtual int32_t getStartPosition(int32_t line) override;
	virtual void setTabPosition(int32_t offset) override;
	::java::util::BitSet* tabMap = nullptr;
};

				} // util
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_util_Position$LineTabMapImpl_h_