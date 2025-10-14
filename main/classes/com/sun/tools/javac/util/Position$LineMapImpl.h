#ifndef _com_sun_tools_javac_util_Position$LineMapImpl_h_
#define _com_sun_tools_javac_util_Position$LineMapImpl_h_
//$ class com.sun.tools.javac.util.Position$LineMapImpl
//$ extends com.sun.tools.javac.util.Position$LineMap

#include <com/sun/tools/javac/util/Position$LineMap.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

class $export Position$LineMapImpl : public ::com::sun::tools::javac::util::Position$LineMap {
	$class(Position$LineMapImpl, $NO_CLASS_INIT, ::com::sun::tools::javac::util::Position$LineMap)
public:
	Position$LineMapImpl();
	void init$();
	virtual void build($chars* src, int32_t max);
	virtual int32_t getColumnNumber(int32_t pos) override;
	virtual int64_t getColumnNumber(int64_t pos) override;
	virtual int32_t getLineNumber(int32_t pos) override;
	virtual int64_t getLineNumber(int64_t pos) override;
	virtual int32_t getPosition(int32_t line, int32_t column) override;
	virtual int64_t getPosition(int64_t line, int64_t column) override;
	virtual int32_t getStartPosition(int32_t line) override;
	virtual int64_t getStartPosition(int64_t line) override;
	static int32_t longToInt(int64_t longValue);
	virtual void setTabPosition(int32_t offset);
	$ints* startPosition = nullptr;
	int32_t lastPosition = 0;
	int32_t lastLine = 0;
};

				} // util
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_util_Position$LineMapImpl_h_