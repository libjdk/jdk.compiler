#ifndef _com_sun_tools_javac_util_IntHashTable_h_
#define _com_sun_tools_javac_util_IntHashTable_h_
//$ class com.sun.tools.javac.util.IntHashTable
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("DEFAULT_INITIAL_SIZE")
#undef DEFAULT_INITIAL_SIZE
#pragma push_macro("DELETED")
#undef DELETED

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

class $export IntHashTable : public ::java::lang::Object {
	$class(IntHashTable, 0, ::java::lang::Object)
public:
	IntHashTable();
	void init$();
	void init$(int32_t capacity);
	virtual void clear();
	virtual int32_t get(Object$* key);
	virtual int32_t hash(Object$* key);
	virtual int32_t lookup(Object$* key);
	virtual int32_t put(Object$* key, int32_t value);
	virtual void rehash();
	virtual int32_t remove(Object$* key);
	static const int32_t DEFAULT_INITIAL_SIZE = 64;
	$ObjectArray* objs = nullptr;
	$ints* ints = nullptr;
	int32_t mask = 0;
	int32_t num_bindings = 0;
	static $Object* DELETED;
};

				} // util
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("DEFAULT_INITIAL_SIZE")
#pragma pop_macro("DELETED")

#endif // _com_sun_tools_javac_util_IntHashTable_h_