#ifndef _com_sun_tools_javac_util_List_h_
#define _com_sun_tools_javac_util_List_h_
//$ class com.sun.tools.javac.util.List
//$ extends java.util.AbstractCollection
//$ implements java.util.List

#include <java/lang/Array.h>
#include <java/util/AbstractCollection.h>
#include <java/util/List.h>

#pragma push_macro("EMPTYITERATOR")
#undef EMPTYITERATOR
#pragma push_macro("EMPTY_LIST")
#undef EMPTY_LIST

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {
					class ListBuffer;
				}
			}
		}
	}
}
namespace java {
	namespace lang {
		class Iterable;
	}
}
namespace java {
	namespace util {
		class Collection;
		class Iterator;
		class ListIterator;
	}
}
namespace java {
	namespace util {
		namespace function {
			class Function;
		}
	}
}
namespace java {
	namespace util {
		namespace stream {
			class Collector;
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

class $import List : public ::java::util::AbstractCollection, public ::java::util::List {
	$class(List, 0, ::java::util::AbstractCollection, ::java::util::List)
public:
	List();
	virtual bool add(Object$* arg0) override;
	virtual bool addAll(::java::util::Collection* arg0) override;
	virtual void clear() override;
	virtual $Object* clone() override;
	virtual bool containsAll(::java::util::Collection* arg0) override;
	virtual void finalize() override;
	virtual void forEach(::java::util::function::Consumer* arg0) override;
	void init$(Object$* head, ::com::sun::tools::javac::util::List* tail);
	virtual void add(int32_t index, Object$* element) override;
	virtual bool addAll(int32_t index, ::java::util::Collection* c) override;
	virtual ::com::sun::tools::javac::util::List* append(Object$* x);
	virtual ::com::sun::tools::javac::util::List* appendList(::com::sun::tools::javac::util::List* x);
	virtual ::com::sun::tools::javac::util::List* appendList(::com::sun::tools::javac::util::ListBuffer* x);
	static ::java::util::stream::Collector* collector();
	virtual bool contains(Object$* x) override;
	static ::com::sun::tools::javac::util::List* convert($Class* klass, ::com::sun::tools::javac::util::List* list);
	virtual ::com::sun::tools::javac::util::List* diff(::com::sun::tools::javac::util::List* that);
	static ::java::util::Iterator* emptyIterator();
	virtual bool equals(Object$* other) override;
	static bool equals(::com::sun::tools::javac::util::List* xs, ::com::sun::tools::javac::util::List* ys);
	static ::com::sun::tools::javac::util::List* fill(int32_t len, Object$* init);
	static ::com::sun::tools::javac::util::List* filter(::com::sun::tools::javac::util::List* l, Object$* elem);
	static ::com::sun::tools::javac::util::List* from($ObjectArray* array);
	static ::com::sun::tools::javac::util::List* from(::java::lang::Iterable* coll);
	virtual $Object* get(int32_t index) override;
	virtual int32_t hashCode() override;
	virtual int32_t indexOf(Object$* o) override;
	virtual ::com::sun::tools::javac::util::List* intersect(::com::sun::tools::javac::util::List* that);
	virtual bool isEmpty() override;
	virtual ::java::util::Iterator* iterator() override;
	static ::com::sun::tools::javac::util::ListBuffer* lambda$collector$0(::com::sun::tools::javac::util::ListBuffer* buf1, ::com::sun::tools::javac::util::ListBuffer* buf2);
	virtual $Object* last();
	virtual int32_t lastIndexOf(Object$* o) override;
	virtual int32_t length();
	virtual ::java::util::ListIterator* listIterator() override;
	virtual ::java::util::ListIterator* listIterator(int32_t index) override;
	virtual ::com::sun::tools::javac::util::List* map(::java::util::function::Function* mapper);
	static ::com::sun::tools::javac::util::List* nil();
	virtual bool nonEmpty();
	static ::com::sun::tools::javac::util::List* of(Object$* x1);
	static ::com::sun::tools::javac::util::List* of(Object$* x1, Object$* x2);
	static ::com::sun::tools::javac::util::List* of(Object$* x1, Object$* x2, Object$* x3);
	static ::com::sun::tools::javac::util::List* of(Object$* x1, Object$* x2, Object$* x3, $ObjectArray* rest);
	virtual ::java::util::stream::Stream* parallelStream() override;
	virtual ::com::sun::tools::javac::util::List* prepend(Object$* x);
	virtual ::com::sun::tools::javac::util::List* prependList(::com::sun::tools::javac::util::List* xs);
	virtual bool remove(Object$* arg0) override;
	virtual $Object* remove(int32_t index) override;
	virtual bool removeAll(::java::util::Collection* arg0) override;
	virtual bool removeIf(::java::util::function::Predicate* arg0) override;
	virtual bool retainAll(::java::util::Collection* arg0) override;
	virtual ::com::sun::tools::javac::util::List* reverse();
	virtual $Object* set(int32_t index, Object$* element) override;
	virtual ::com::sun::tools::javac::util::List* setTail(::com::sun::tools::javac::util::List* tail);
	virtual int32_t size() override;
	virtual ::java::util::Spliterator* spliterator() override;
	virtual ::java::util::stream::Stream* stream() override;
	virtual ::java::util::List* subList(int32_t fromIndex, int32_t toIndex) override;
	virtual ::com::sun::tools::javac::util::List* take(int32_t n);
	virtual $ObjectArray* toArray(::java::util::function::IntFunction* arg0) override;
	virtual $ObjectArray* toArray($ObjectArray* vec) override;
	virtual $ObjectArray* toArray() override;
	virtual $String* toString($String* sep);
	virtual $String* toString() override;
	$Object* head = nullptr;
	::com::sun::tools::javac::util::List* tail = nullptr;
	static ::com::sun::tools::javac::util::List* EMPTY_LIST;
	static ::java::util::Iterator* EMPTYITERATOR;
};

				} // util
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("EMPTYITERATOR")
#pragma pop_macro("EMPTY_LIST")

#endif // _com_sun_tools_javac_util_List_h_