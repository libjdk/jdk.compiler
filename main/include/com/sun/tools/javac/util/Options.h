#ifndef _com_sun_tools_javac_util_Options_h_
#define _com_sun_tools_javac_util_Options_h_
//$ class com.sun.tools.javac.util.Options
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace main {
					class Option;
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
					class Context;
					class Context$Key;
					class List;
				}
			}
		}
	}
}
namespace java {
	namespace lang {
		class Runnable;
	}
}
namespace java {
	namespace util {
		class LinkedHashMap;
		class Set;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

class $import Options : public ::java::lang::Object {
	$class(Options, 0, ::java::lang::Object)
public:
	Options();
	void init$(::com::sun::tools::javac::util::Context* context);
	virtual void addListener(::java::lang::Runnable* listener);
	virtual void clear();
	virtual $String* get($String* name);
	virtual $String* get(::com::sun::tools::javac::main::Option* option);
	virtual bool getBoolean($String* name);
	virtual bool getBoolean($String* name, bool defaultValue);
	static ::com::sun::tools::javac::util::Options* instance(::com::sun::tools::javac::util::Context* context);
	virtual bool isLintSet($String* s);
	virtual bool isSet($String* name);
	virtual bool isSet(::com::sun::tools::javac::main::Option* option);
	virtual bool isSet(::com::sun::tools::javac::main::Option* option, $String* value);
	virtual bool isUnset($String* name);
	virtual bool isUnset(::com::sun::tools::javac::main::Option* option);
	virtual bool isUnset(::com::sun::tools::javac::main::Option* option, $String* value);
	virtual ::java::util::Set* keySet();
	virtual void notifyListeners();
	virtual void put($String* name, $String* value);
	virtual void put(::com::sun::tools::javac::main::Option* option, $String* value);
	virtual void putAll(::com::sun::tools::javac::util::Options* options);
	virtual void remove($String* name);
	virtual int32_t size();
	static const int64_t serialVersionUID = 0;
	static ::com::sun::tools::javac::util::Context$Key* optionsKey;
	::java::util::LinkedHashMap* values = nullptr;
	::com::sun::tools::javac::util::List* listeners = nullptr;
};

				} // util
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_util_Options_h_