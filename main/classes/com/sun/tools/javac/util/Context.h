#ifndef _com_sun_tools_javac_util_Context_h_
#define _com_sun_tools_javac_util_Context_h_
//$ class com.sun.tools.javac.util.Context
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {
					class Context$Factory;
					class Context$Key;
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class Map;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

class $export Context : public ::java::lang::Object {
	$class(Context, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Context();
	void init$();
	static void checkState(::java::util::Map* t);
	virtual void dump();
	virtual $Object* get(::com::sun::tools::javac::util::Context$Key* key);
	virtual $Object* get($Class* clazz);
	virtual ::com::sun::tools::javac::util::Context$Key* key($Class* clss);
	virtual void put(::com::sun::tools::javac::util::Context$Key* key, ::com::sun::tools::javac::util::Context$Factory* fac);
	virtual void put(::com::sun::tools::javac::util::Context$Key* key, Object$* data);
	virtual void put($Class* clazz, Object$* data);
	virtual void put($Class* clazz, ::com::sun::tools::javac::util::Context$Factory* fac);
	static $Object* uncheckedCast(Object$* o);
	::java::util::Map* ht = nullptr;
	::java::util::Map* ft = nullptr;
	::java::util::Map* kt = nullptr;
};

				} // util
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_util_Context_h_