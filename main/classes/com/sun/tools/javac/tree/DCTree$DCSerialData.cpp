#include <com/sun/tools/javac/tree/DCTree$DCSerialData.h>

#include <com/sun/source/doctree/DocTree$Kind.h>
#include <com/sun/source/doctree/DocTreeVisitor.h>
#include <com/sun/source/doctree/SerialDataTree.h>
#include <com/sun/tools/javac/tree/DCTree$DCBlockTag.h>
#include <com/sun/tools/javac/tree/DCTree.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef SERIAL_DATA

using $DocTree$Kind = ::com::sun::source::doctree::DocTree$Kind;
using $DocTreeVisitor = ::com::sun::source::doctree::DocTreeVisitor;
using $SerialDataTree = ::com::sun::source::doctree::SerialDataTree;
using $DCTree = ::com::sun::tools::javac::tree::DCTree;
using $DCTree$DCBlockTag = ::com::sun::tools::javac::tree::DCTree$DCBlockTag;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

$FieldInfo _DCTree$DCSerialData_FieldInfo_[] = {
	{"description", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/tools/javac/tree/DCTree;>;", $PUBLIC | $FINAL, $field(DCTree$DCSerialData, description)},
	{}
};

$MethodInfo _DCTree$DCSerialData_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*getTagName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/util/List;)V", "(Ljava/util/List<Lcom/sun/tools/javac/tree/DCTree;>;)V", 0, $method(static_cast<void(DCTree$DCSerialData::*)($List*)>(&DCTree$DCSerialData::init$))},
	{"accept", "(Lcom/sun/source/doctree/DocTreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;D:Ljava/lang/Object;>(Lcom/sun/source/doctree/DocTreeVisitor<TR;TD;>;TD;)TR;", $PUBLIC},
	{"getDescription", "()Ljava/util/List;", "()Ljava/util/List<+Lcom/sun/source/doctree/DocTree;>;", $PUBLIC},
	{"getKind", "()Lcom/sun/source/doctree/DocTree$Kind;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DCTree$DCSerialData_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.tree.DCTree$DCSerialData", "com.sun.tools.javac.tree.DCTree", "DCSerialData", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.tree.DCTree$DCBlockTag", "com.sun.tools.javac.tree.DCTree", "DCBlockTag", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _DCTree$DCSerialData_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.tree.DCTree$DCSerialData",
	"com.sun.tools.javac.tree.DCTree$DCBlockTag",
	"com.sun.source.doctree.SerialDataTree",
	_DCTree$DCSerialData_FieldInfo_,
	_DCTree$DCSerialData_MethodInfo_,
	nullptr,
	nullptr,
	_DCTree$DCSerialData_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.tree.DCTree"
};

$Object* allocate$DCTree$DCSerialData($Class* clazz) {
	return $of($alloc(DCTree$DCSerialData));
}

$String* DCTree$DCSerialData::getTagName() {
	 return this->$DCTree$DCBlockTag::getTagName();
}

$String* DCTree$DCSerialData::toString() {
	 return this->$DCTree$DCBlockTag::toString();
}

int32_t DCTree$DCSerialData::hashCode() {
	 return this->$DCTree$DCBlockTag::hashCode();
}

bool DCTree$DCSerialData::equals(Object$* arg0) {
	 return this->$DCTree$DCBlockTag::equals(arg0);
}

$Object* DCTree$DCSerialData::clone() {
	 return this->$DCTree$DCBlockTag::clone();
}

void DCTree$DCSerialData::finalize() {
	this->$DCTree$DCBlockTag::finalize();
}

void DCTree$DCSerialData::init$($List* description) {
	$DCTree$DCBlockTag::init$();
	$set(this, description, description);
}

$DocTree$Kind* DCTree$DCSerialData::getKind() {
	$init($DocTree$Kind);
	return $DocTree$Kind::SERIAL_DATA;
}

$Object* DCTree$DCSerialData::accept($DocTreeVisitor* v, Object$* d) {
	return $of($nc(v)->visitSerialData(this, d));
}

$List* DCTree$DCSerialData::getDescription() {
	return this->description;
}

DCTree$DCSerialData::DCTree$DCSerialData() {
}

$Class* DCTree$DCSerialData::load$($String* name, bool initialize) {
	$loadClass(DCTree$DCSerialData, name, initialize, &_DCTree$DCSerialData_ClassInfo_, allocate$DCTree$DCSerialData);
	return class$;
}

$Class* DCTree$DCSerialData::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com