#ifndef _com_sun_tools_javac_util_ListBuffer_h_
#define _com_sun_tools_javac_util_ListBuffer_h_
//$ class com.sun.tools.javac.util.ListBuffer
//$ extends java.util.AbstractQueue

#include <java/lang/Array.h>
#include <java/util/AbstractQueue.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {
					class List;
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class Collection;
		class Iterator;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

class $export ListBuffer : public ::java::util::AbstractQueue {
	$class(ListBuffer, $NO_CLASS_INIT, ::java::util::AbstractQueue)
public:
	ListBuffer();
	void init$();
	virtual bool add(Object$* a) override;
	virtual bool addAll(::java::util::Collection* c) override;
	virtual ::com::sun::tools::javac::util::ListBuffer* append(Object$* x);
	virtual ::com::sun::tools::javac::util::ListBuffer* appendArray($ObjectArray* xs);
	virtual ::com::sun::tools::javac::util::ListBuffer* appendList(::com::sun::tools::javac::util::List* xs);
	virtual ::com::sun::tools::javac::util::ListBuffer* appendList(::com::sun::tools::javac::util::ListBuffer* xs);
	virtual void clear() override;
	virtual bool contains(Object$* x) override;
	virtual bool containsAll(::java::util::Collection* c) override;
	void copy();
	virtual $Object* first();
	virtual bool isEmpty() override;
	virtual ::java::util::Iterator* iterator() override;
	virtual $Object* last();
	virtual int32_t length();
	virtual $Object* next();
	virtual bool nonEmpty();
	static ::com::sun::tools::javac::util::ListBuffer* of(Object$* x);
	virtual bool offer(Object$* a) override;
	virtual $Object* peek() override;
	virtual $Object* poll() override;
	virtual ::com::sun::tools::javac::util::ListBuffer* prepend(Object$* x);
	using ::java::util::AbstractQueue::remove;
	virtual bool remove(Object$* o) override;
	virtual bool removeAll(::java::util::Collection* c) override;
	virtual bool retainAll(::java::util::Collection* c) override;
	virtual int32_t size() override;
	using ::java::util::AbstractQueue::toArray;
	virtual $ObjectArray* toArray($ObjectArray* vec) override;
	virtual $ObjectArray* toArray() override;
	virtual ::com::sun::tools::javac::util::List* toList();
	::com::sun::tools::javac::util::List* elems = nullptr;
	::com::sun::tools::javac::util::List* last$ = nullptr;
	int32_t count = 0;
	bool shared = false;
};

				} // util
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_util_ListBuffer_h_