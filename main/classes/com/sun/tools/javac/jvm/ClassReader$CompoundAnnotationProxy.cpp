#include <com/sun/tools/javac/jvm/ClassReader$CompoundAnnotationProxy.h>

#include <com/sun/tools/javac/code/Attribute$Visitor.h>
#include <com/sun/tools/javac/code/Attribute.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/jvm/ClassReader$ProxyVisitor.h>
#include <com/sun/tools/javac/jvm/ClassReader.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Pair.h>
#include <java/lang/CharSequence.h>
#include <javax/lang/model/element/Name.h>
#include <jcpp.h>

using $Attribute = ::com::sun::tools::javac::code::Attribute;
using $Attribute$Visitor = ::com::sun::tools::javac::code::Attribute$Visitor;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $ClassReader = ::com::sun::tools::javac::jvm::ClassReader;
using $ClassReader$ProxyVisitor = ::com::sun::tools::javac::jvm::ClassReader$ProxyVisitor;
using $List = ::com::sun::tools::javac::util::List;
using $Name = ::com::sun::tools::javac::util::Name;
using $Pair = ::com::sun::tools::javac::util::Pair;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $1Name = ::javax::lang::model::element::Name;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

$FieldInfo _ClassReader$CompoundAnnotationProxy_FieldInfo_[] = {
	{"values", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/util/Pair<Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Attribute;>;>;", $FINAL, $field(ClassReader$CompoundAnnotationProxy, values)},
	{}
};

$MethodInfo _ClassReader$CompoundAnnotationProxy_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/util/Pair<Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Attribute;>;>;)V", $PUBLIC, $method(static_cast<void(ClassReader$CompoundAnnotationProxy::*)($Type*,$List*)>(&ClassReader$CompoundAnnotationProxy::init$))},
	{"accept", "(Lcom/sun/tools/javac/code/Attribute$Visitor;)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ClassReader$CompoundAnnotationProxy_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.jvm.ClassReader$CompoundAnnotationProxy", "com.sun.tools.javac.jvm.ClassReader", "CompoundAnnotationProxy", $STATIC},
	{}
};

$ClassInfo _ClassReader$CompoundAnnotationProxy_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.jvm.ClassReader$CompoundAnnotationProxy",
	"com.sun.tools.javac.code.Attribute",
	nullptr,
	_ClassReader$CompoundAnnotationProxy_FieldInfo_,
	_ClassReader$CompoundAnnotationProxy_MethodInfo_,
	nullptr,
	nullptr,
	_ClassReader$CompoundAnnotationProxy_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.jvm.ClassReader"
};

$Object* allocate$ClassReader$CompoundAnnotationProxy($Class* clazz) {
	return $of($alloc(ClassReader$CompoundAnnotationProxy));
}

void ClassReader$CompoundAnnotationProxy::init$($Type* type, $List* values) {
	$Attribute::init$(type);
	$set(this, values, values);
}

void ClassReader$CompoundAnnotationProxy::accept($Attribute$Visitor* v) {
	$nc(($cast($ClassReader$ProxyVisitor, v)))->visitCompoundAnnotationProxy(this);
}

$String* ClassReader$CompoundAnnotationProxy::toString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, buf, $new($StringBuilder));
	buf->append("@"_s);
	buf->append($(static_cast<$CharSequence*>($nc($nc(this->type)->tsym)->getQualifiedName())));
	buf->append("/*proxy*/{"_s);
	bool first = true;
	{
		$var($List, v, this->values);
		for (; $nc(v)->nonEmpty(); $assign(v, $nc(v)->tail)) {
			$var($Pair, value, $cast($Pair, v->head));
			if (!first) {
				buf->append(","_s);
			}
			first = false;
			buf->append($cast($CharSequence, $nc(value)->fst));
			buf->append("="_s);
			buf->append($nc(value)->snd);
		}
	}
	buf->append("}"_s);
	return buf->toString();
}

ClassReader$CompoundAnnotationProxy::ClassReader$CompoundAnnotationProxy() {
}

$Class* ClassReader$CompoundAnnotationProxy::load$($String* name, bool initialize) {
	$loadClass(ClassReader$CompoundAnnotationProxy, name, initialize, &_ClassReader$CompoundAnnotationProxy_ClassInfo_, allocate$ClassReader$CompoundAnnotationProxy);
	return class$;
}

$Class* ClassReader$CompoundAnnotationProxy::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com