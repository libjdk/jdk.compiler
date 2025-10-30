#include <com/sun/tools/javac/jvm/ClassReader$TypeAnnotationCompleter.h>

#include <com/sun/tools/javac/code/Attribute$Compound.h>
#include <com/sun/tools/javac/code/Attribute$TypeCompound.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/TypeAnnotationPosition.h>
#include <com/sun/tools/javac/jvm/ClassReader$AnnotationCompleter.h>
#include <com/sun/tools/javac/jvm/ClassReader$AnnotationDeproxy.h>
#include <com/sun/tools/javac/jvm/ClassReader$CompoundAnnotationProxy.h>
#include <com/sun/tools/javac/jvm/ClassReader$TypeAnnotationProxy.h>
#include <com/sun/tools/javac/jvm/ClassReader.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <java/util/Iterator.h>
#include <javax/tools/JavaFileObject.h>
#include <jcpp.h>

using $Attribute$Compound = ::com::sun::tools::javac::code::Attribute$Compound;
using $Attribute$TypeCompound = ::com::sun::tools::javac::code::Attribute$TypeCompound;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $TypeAnnotationPosition = ::com::sun::tools::javac::code::TypeAnnotationPosition;
using $ClassReader = ::com::sun::tools::javac::jvm::ClassReader;
using $ClassReader$AnnotationCompleter = ::com::sun::tools::javac::jvm::ClassReader$AnnotationCompleter;
using $ClassReader$AnnotationDeproxy = ::com::sun::tools::javac::jvm::ClassReader$AnnotationDeproxy;
using $ClassReader$CompoundAnnotationProxy = ::com::sun::tools::javac::jvm::ClassReader$CompoundAnnotationProxy;
using $ClassReader$TypeAnnotationProxy = ::com::sun::tools::javac::jvm::ClassReader$TypeAnnotationProxy;
using $List = ::com::sun::tools::javac::util::List;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $JavaFileObject = ::javax::tools::JavaFileObject;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

$FieldInfo _ClassReader$TypeAnnotationCompleter_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/jvm/ClassReader;", nullptr, $FINAL | $SYNTHETIC, $field(ClassReader$TypeAnnotationCompleter, this$0)},
	{"proxies", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/jvm/ClassReader$TypeAnnotationProxy;>;", 0, $field(ClassReader$TypeAnnotationCompleter, proxies)},
	{}
};

$MethodInfo _ClassReader$TypeAnnotationCompleter_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/jvm/ClassReader;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/jvm/ClassReader$TypeAnnotationProxy;>;)V", 0, $method(static_cast<void(ClassReader$TypeAnnotationCompleter::*)($ClassReader*,$Symbol*,$List*)>(&ClassReader$TypeAnnotationCompleter::init$))},
	{"deproxyTypeCompoundList", "(Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/jvm/ClassReader$TypeAnnotationProxy;>;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Attribute$TypeCompound;>;", 0},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ClassReader$TypeAnnotationCompleter_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.jvm.ClassReader$TypeAnnotationCompleter", "com.sun.tools.javac.jvm.ClassReader", "TypeAnnotationCompleter", 0},
	{"com.sun.tools.javac.jvm.ClassReader$AnnotationCompleter", "com.sun.tools.javac.jvm.ClassReader", "AnnotationCompleter", 0},
	{}
};

$ClassInfo _ClassReader$TypeAnnotationCompleter_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.jvm.ClassReader$TypeAnnotationCompleter",
	"com.sun.tools.javac.jvm.ClassReader$AnnotationCompleter",
	nullptr,
	_ClassReader$TypeAnnotationCompleter_FieldInfo_,
	_ClassReader$TypeAnnotationCompleter_MethodInfo_,
	nullptr,
	nullptr,
	_ClassReader$TypeAnnotationCompleter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.jvm.ClassReader"
};

$Object* allocate$ClassReader$TypeAnnotationCompleter($Class* clazz) {
	return $of($alloc(ClassReader$TypeAnnotationCompleter));
}

void ClassReader$TypeAnnotationCompleter::init$($ClassReader* this$0, $Symbol* sym, $List* proxies) {
	$set(this, this$0, this$0);
	$ClassReader$AnnotationCompleter::init$(this$0, sym, $($List::nil()));
	$set(this, proxies, proxies);
}

$List* ClassReader$TypeAnnotationCompleter::deproxyTypeCompoundList($List* proxies) {
	$useLocalCurrentObjectStackCache();
	$var($ListBuffer, buf, $new($ListBuffer));
	{
		$var($Iterator, i$, $nc(proxies)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($ClassReader$TypeAnnotationProxy, proxy, $cast($ClassReader$TypeAnnotationProxy, i$->next()));
			{
				$var($Attribute$Compound, compound, deproxyCompound($nc(proxy)->compound));
				$var($Attribute$TypeCompound, typeCompound, $new($Attribute$TypeCompound, compound, $nc(proxy)->position));
				buf->add(typeCompound);
			}
		}
	}
	return buf->toList();
}

void ClassReader$TypeAnnotationCompleter::run() {
	$useLocalCurrentObjectStackCache();
	$var($JavaFileObject, previousClassFile, this->this$0->currentClassFile);
	{
		$var($Throwable, var$0, nullptr);
		try {
			$set(this->this$0, currentClassFile, this->classFile);
			$var($List, newList, deproxyTypeCompoundList(this->proxies));
			$nc(this->sym)->setTypeAttributes($($nc(newList)->prependList($($nc(this->sym)->getRawTypeAttributes()))));
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$set(this->this$0, currentClassFile, previousClassFile);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

ClassReader$TypeAnnotationCompleter::ClassReader$TypeAnnotationCompleter() {
}

$Class* ClassReader$TypeAnnotationCompleter::load$($String* name, bool initialize) {
	$loadClass(ClassReader$TypeAnnotationCompleter, name, initialize, &_ClassReader$TypeAnnotationCompleter_ClassInfo_, allocate$ClassReader$TypeAnnotationCompleter);
	return class$;
}

$Class* ClassReader$TypeAnnotationCompleter::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com