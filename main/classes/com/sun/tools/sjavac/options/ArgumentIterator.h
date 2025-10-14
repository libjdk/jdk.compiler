#ifndef _com_sun_tools_sjavac_options_ArgumentIterator_h_
#define _com_sun_tools_sjavac_options_ArgumentIterator_h_
//$ class com.sun.tools.sjavac.options.ArgumentIterator
//$ extends java.util.Iterator

#include <java/util/Iterator.h>

namespace java {
	namespace lang {
		class Iterable;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace options {

class ArgumentIterator : public ::java::util::Iterator {
	$class(ArgumentIterator, $NO_CLASS_INIT, ::java::util::Iterator)
public:
	ArgumentIterator();
	void init$(::java::lang::Iterable* iter);
	virtual $String* current();
	void fillBuffer();
	virtual bool hasNext() override;
	virtual $Object* next() override;
	virtual $String* peek();
	virtual void remove() override;
	::java::util::Iterator* iter = nullptr;
	$String* current$ = nullptr;
	$String* buffered = nullptr;
};

				} // options
			} // sjavac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_sjavac_options_ArgumentIterator_h_