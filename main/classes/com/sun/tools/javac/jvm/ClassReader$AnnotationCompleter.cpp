#include <com/sun/tools/javac/jvm/ClassReader$AnnotationCompleter.h>

#include <com/sun/tools/javac/code/Attribute$Compound.h>
#include <com/sun/tools/javac/code/Attribute$Constant.h>
#include <com/sun/tools/javac/code/Attribute.h>
#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/Type$JCPrimitiveType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/jvm/ClassReader$AnnotationDeproxy.h>
#include <com/sun/tools/javac/jvm/ClassReader.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Names.h>
#include <java/util/Iterator.h>
#include <javax/tools/JavaFileObject.h>
#include <jcpp.h>

#undef MDL
#undef MTH
#undef TYP

using $Attribute = ::com::sun::tools::javac::code::Attribute;
using $Attribute$Compound = ::com::sun::tools::javac::code::Attribute$Compound;
using $Attribute$Constant = ::com::sun::tools::javac::code::Attribute$Constant;
using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Symtab = ::com::sun::tools::javac::code::Symtab;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$JCPrimitiveType = ::com::sun::tools::javac::code::Type$JCPrimitiveType;
using $ClassReader = ::com::sun::tools::javac::jvm::ClassReader;
using $ClassReader$AnnotationDeproxy = ::com::sun::tools::javac::jvm::ClassReader$AnnotationDeproxy;
using $List = ::com::sun::tools::javac::util::List;
using $Name = ::com::sun::tools::javac::util::Name;
using $Names = ::com::sun::tools::javac::util::Names;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Iterator = ::java::util::Iterator;
using $JavaFileObject = ::javax::tools::JavaFileObject;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

$FieldInfo _ClassReader$AnnotationCompleter_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/jvm/ClassReader;", nullptr, $FINAL | $SYNTHETIC, $field(ClassReader$AnnotationCompleter, this$0)},
	{"sym", "Lcom/sun/tools/javac/code/Symbol;", nullptr, $FINAL, $field(ClassReader$AnnotationCompleter, sym)},
	{"l", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/jvm/ClassReader$CompoundAnnotationProxy;>;", $FINAL, $field(ClassReader$AnnotationCompleter, l)},
	{"classFile", "Ljavax/tools/JavaFileObject;", nullptr, $FINAL, $field(ClassReader$AnnotationCompleter, classFile)},
	{}
};

$MethodInfo _ClassReader$AnnotationCompleter_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/tools/javac/jvm/ClassReader;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/jvm/ClassReader$CompoundAnnotationProxy;>;)V", 0, $method(static_cast<void(ClassReader$AnnotationCompleter::*)($ClassReader*,$Symbol*,$List*)>(&ClassReader$AnnotationCompleter::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ClassReader$AnnotationCompleter_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.jvm.ClassReader$AnnotationCompleter", "com.sun.tools.javac.jvm.ClassReader", "AnnotationCompleter", 0},
	{"com.sun.tools.javac.jvm.ClassReader$AnnotationDeproxy", "com.sun.tools.javac.jvm.ClassReader", "AnnotationDeproxy", 0},
	{}
};

$ClassInfo _ClassReader$AnnotationCompleter_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.jvm.ClassReader$AnnotationCompleter",
	"com.sun.tools.javac.jvm.ClassReader$AnnotationDeproxy",
	"java.lang.Runnable",
	_ClassReader$AnnotationCompleter_FieldInfo_,
	_ClassReader$AnnotationCompleter_MethodInfo_,
	nullptr,
	nullptr,
	_ClassReader$AnnotationCompleter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.jvm.ClassReader"
};

$Object* allocate$ClassReader$AnnotationCompleter($Class* clazz) {
	return $of($alloc(ClassReader$AnnotationCompleter));
}

int32_t ClassReader$AnnotationCompleter::hashCode() {
	 return this->$ClassReader$AnnotationDeproxy::hashCode();
}

bool ClassReader$AnnotationCompleter::equals(Object$* arg0) {
	 return this->$ClassReader$AnnotationDeproxy::equals(arg0);
}

$Object* ClassReader$AnnotationCompleter::clone() {
	 return this->$ClassReader$AnnotationDeproxy::clone();
}

void ClassReader$AnnotationCompleter::finalize() {
	this->$ClassReader$AnnotationDeproxy::finalize();
}

void ClassReader$AnnotationCompleter::init$($ClassReader* this$0, $Symbol* sym, $List* l) {
	$set(this, this$0, this$0);
	$init($Kinds$Kind);
	$ClassReader$AnnotationDeproxy::init$(this$0, $nc(this$0->currentOwner)->kind == $Kinds$Kind::MTH ? $($nc(this$0->currentOwner)->enclClass()) : $cast($Symbol$ClassSymbol, this$0->currentOwner));
	if ($nc(sym)->kind == $Kinds$Kind::TYP && $nc(sym->owner)->kind == $Kinds$Kind::MDL) {
		$set(this, sym, sym->owner);
	} else {
		$set(this, sym, sym);
	}
	$set(this, l, l);
	$set(this, classFile, this$0->currentClassFile);
}

void ClassReader$AnnotationCompleter::run() {
	$useLocalCurrentObjectStackCache();
	$var($JavaFileObject, previousClassFile, this->this$0->currentClassFile);
	{
		$var($Throwable, var$0, nullptr);
		try {
			$set(this->this$0, currentClassFile, this->classFile);
			$var($List, newList, deproxyCompoundList(this->l));
			{
				$var($Iterator, i$, $nc(newList)->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($Attribute$Compound, attr, $cast($Attribute$Compound, i$->next()));
					{
						if ($nc($nc(attr)->type)->tsym == $nc($nc(this->this$0->syms)->deprecatedType)->tsym) {
							$nc(this->sym)->flags_field |= (0x00020000 | (int64_t)0x0040000000000000);
							$var($Attribute, forRemoval, attr->member($nc(this->this$0->names)->forRemoval));
							{
								$var($Attribute$Constant, constant, nullptr);
								bool var$1 = $instanceOf($Attribute$Constant, forRemoval);
								if (var$1) {
									$assign(constant, $cast($Attribute$Constant, forRemoval));
									var$1 = true;
								}
								if (var$1) {
									if ($equals($nc(constant)->type, $nc(this->this$0->syms)->booleanType) && $nc(($cast($Integer, constant->value)))->intValue() != 0) {
										$nc(this->sym)->flags_field |= 0x0080000000000000;
									}
								}
							}
						}
					}
				}
			}
			if ($nc(this->sym)->annotationsPendingCompletion()) {
				$nc(this->sym)->setDeclarationAttributes(newList);
			} else {
				$nc(this->sym)->appendAttributes(newList);
			}
		} catch ($Throwable& var$2) {
			$assign(var$0, var$2);
		} /*finally*/ {
			$set(this->this$0, currentClassFile, previousClassFile);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

$String* ClassReader$AnnotationCompleter::toString() {
	return $str({" ClassReader annotate "_s, $nc(this->sym)->owner, "."_s, this->sym, " with "_s, this->l});
}

ClassReader$AnnotationCompleter::ClassReader$AnnotationCompleter() {
}

$Class* ClassReader$AnnotationCompleter::load$($String* name, bool initialize) {
	$loadClass(ClassReader$AnnotationCompleter, name, initialize, &_ClassReader$AnnotationCompleter_ClassInfo_, allocate$ClassReader$AnnotationCompleter);
	return class$;
}

$Class* ClassReader$AnnotationCompleter::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com