#ifndef _com_sun_tools_javac_util_GraphUtils$TarjanNode_h_
#define _com_sun_tools_javac_util_GraphUtils$TarjanNode_h_
//$ class com.sun.tools.javac.util.GraphUtils$TarjanNode
//$ extends com.sun.tools.javac.util.GraphUtils$AbstractNode
//$ implements java.lang.Comparable

#include <com/sun/tools/javac/util/GraphUtils$AbstractNode.h>
#include <java/lang/Comparable.h>

namespace java {
	namespace lang {
		class Iterable;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

class $import GraphUtils$TarjanNode : public ::com::sun::tools::javac::util::GraphUtils$AbstractNode, public ::java::lang::Comparable {
	$class(GraphUtils$TarjanNode, $NO_CLASS_INIT, ::com::sun::tools::javac::util::GraphUtils$AbstractNode, ::java::lang::Comparable)
public:
	GraphUtils$TarjanNode();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(Object$* data);
	virtual int32_t compareTo(::com::sun::tools::javac::util::GraphUtils$TarjanNode* o);
	virtual int32_t compareTo(Object$* o) override;
	virtual ::java::lang::Iterable* getAllDependencies() {return nullptr;}
	virtual $String* toString() override;
	int32_t index = 0;
	int32_t lowlink = 0;
	bool active = false;
};

				} // util
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_util_GraphUtils$TarjanNode_h_