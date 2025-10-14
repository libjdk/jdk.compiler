#ifndef _com_sun_tools_javac_util_Assert_h_
#define _com_sun_tools_javac_util_Assert_h_
//$ class com.sun.tools.javac.util.Assert
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		namespace function {
			class Supplier;
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

class $export Assert : public ::java::lang::Object {
	$class(Assert, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Assert();
	void init$();
	static void check(bool cond);
	static void check(bool cond, int32_t value);
	static void check(bool cond, int64_t value);
	static void check(bool cond, Object$* value);
	static void check(bool cond, $String* msg);
	static void check(bool cond, ::java::util::function::Supplier* msg);
	static $Object* checkNonNull(Object$* t);
	static $Object* checkNonNull(Object$* t, $String* msg);
	static $Object* checkNonNull(Object$* t, ::java::util::function::Supplier* msg);
	static void checkNull(Object$* o);
	static void checkNull(Object$* o, Object$* value);
	static void checkNull(Object$* o, $String* msg);
	static void checkNull(Object$* o, ::java::util::function::Supplier* msg);
	static void error();
	static void error($String* msg);
};

				} // util
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_util_Assert_h_