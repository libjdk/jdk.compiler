#include <com/sun/tools/javac/jvm/ClassReader$UsesProvidesCompleter.h>

#include <com/sun/tools/javac/code/Directive$ProvidesDirective.h>
#include <com/sun/tools/javac/code/Directive$UsesDirective.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$ModuleSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/jvm/ClassReader$InterimProvidesDirective.h>
#include <com/sun/tools/javac/jvm/ClassReader$InterimUsesDirective.h>
#include <com/sun/tools/javac/jvm/ClassReader.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <com/sun/tools/javac/util/Name.h>
#include <java/util/AbstractCollection.h>
#include <java/util/Collection.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

using $Directive$ProvidesDirective = ::com::sun::tools::javac::code::Directive$ProvidesDirective;
using $Directive$UsesDirective = ::com::sun::tools::javac::code::Directive$UsesDirective;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$Completer = ::com::sun::tools::javac::code::Symbol$Completer;
using $Symbol$ModuleSymbol = ::com::sun::tools::javac::code::Symbol$ModuleSymbol;
using $Symtab = ::com::sun::tools::javac::code::Symtab;
using $ClassReader = ::com::sun::tools::javac::jvm::ClassReader;
using $ClassReader$InterimProvidesDirective = ::com::sun::tools::javac::jvm::ClassReader$InterimProvidesDirective;
using $ClassReader$InterimUsesDirective = ::com::sun::tools::javac::jvm::ClassReader$InterimUsesDirective;
using $List = ::com::sun::tools::javac::util::List;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $Name = ::com::sun::tools::javac::util::Name;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractCollection = ::java::util::AbstractCollection;
using $Collection = ::java::util::Collection;
using $Iterator = ::java::util::Iterator;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

$FieldInfo _ClassReader$UsesProvidesCompleter_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/jvm/ClassReader;", nullptr, $FINAL | $SYNTHETIC, $field(ClassReader$UsesProvidesCompleter, this$0)},
	{"currentModule", "Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;", nullptr, $PRIVATE | $FINAL, $field(ClassReader$UsesProvidesCompleter, currentModule)},
	{"interimUsesCopy", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/jvm/ClassReader$InterimUsesDirective;>;", $PRIVATE | $FINAL, $field(ClassReader$UsesProvidesCompleter, interimUsesCopy)},
	{"interimProvidesCopy", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/jvm/ClassReader$InterimProvidesDirective;>;", $PRIVATE | $FINAL, $field(ClassReader$UsesProvidesCompleter, interimProvidesCopy)},
	{}
};

$MethodInfo _ClassReader$UsesProvidesCompleter_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/jvm/ClassReader;Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/jvm/ClassReader$InterimUsesDirective;>;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/jvm/ClassReader$InterimProvidesDirective;>;)V", $PUBLIC, $method(static_cast<void(ClassReader$UsesProvidesCompleter::*)($ClassReader*,$Symbol$ModuleSymbol*,$List*,$List*)>(&ClassReader$UsesProvidesCompleter::init$))},
	{"complete", "(Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PUBLIC, nullptr, "com.sun.tools.javac.code.Symbol$CompletionFailure"},
	{}
};

$InnerClassInfo _ClassReader$UsesProvidesCompleter_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.jvm.ClassReader$UsesProvidesCompleter", "com.sun.tools.javac.jvm.ClassReader", "UsesProvidesCompleter", $PRIVATE | $FINAL},
	{"com.sun.tools.javac.code.Symbol$Completer", "com.sun.tools.javac.code.Symbol", "Completer", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ClassReader$UsesProvidesCompleter_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.tools.javac.jvm.ClassReader$UsesProvidesCompleter",
	"java.lang.Object",
	"com.sun.tools.javac.code.Symbol$Completer",
	_ClassReader$UsesProvidesCompleter_FieldInfo_,
	_ClassReader$UsesProvidesCompleter_MethodInfo_,
	nullptr,
	nullptr,
	_ClassReader$UsesProvidesCompleter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.jvm.ClassReader"
};

$Object* allocate$ClassReader$UsesProvidesCompleter($Class* clazz) {
	return $of($alloc(ClassReader$UsesProvidesCompleter));
}

void ClassReader$UsesProvidesCompleter::init$($ClassReader* this$0, $Symbol$ModuleSymbol* currentModule, $List* interimUsesCopy, $List* interimProvidesCopy) {
	$set(this, this$0, this$0);
	$set(this, currentModule, currentModule);
	$set(this, interimUsesCopy, interimUsesCopy);
	$set(this, interimProvidesCopy, interimProvidesCopy);
}

void ClassReader$UsesProvidesCompleter::complete($Symbol* sym) {
	$useLocalCurrentObjectStackCache();
	$var($ListBuffer, directives, $new($ListBuffer));
	directives->addAll(static_cast<$Collection*>(static_cast<$AbstractCollection*>($nc(this->currentModule)->directives)));
	$var($ListBuffer, uses, $new($ListBuffer));
	{
		$var($Iterator, i$, $nc(this->interimUsesCopy)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($ClassReader$InterimUsesDirective, interim, $cast($ClassReader$InterimUsesDirective, i$->next()));
			{
				$var($Directive$UsesDirective, d, $new($Directive$UsesDirective, $($nc(this->this$0->syms)->enterClass(this->currentModule, $nc(interim)->service))));
				uses->add(d);
				directives->add(d);
			}
		}
	}
	$set($nc(this->currentModule), uses, uses->toList());
	$var($ListBuffer, provides, $new($ListBuffer));
	{
		$var($Iterator, i$, $nc(this->interimProvidesCopy)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($ClassReader$InterimProvidesDirective, interim, $cast($ClassReader$InterimProvidesDirective, i$->next()));
			{
				$var($ListBuffer, impls, $new($ListBuffer));
				{
					$var($Iterator, i$, $nc($nc(interim)->impls)->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($Name, impl, $cast($Name, i$->next()));
						{
							impls->append($($nc(this->this$0->syms)->enterClass(this->currentModule, impl)));
						}
					}
				}
				$var($Symbol$ClassSymbol, var$0, $nc(this->this$0->syms)->enterClass(this->currentModule, interim->service));
				$var($Directive$ProvidesDirective, d, $new($Directive$ProvidesDirective, var$0, $(impls->toList())));
				provides->add(d);
				directives->add(d);
			}
		}
	}
	$set($nc(this->currentModule), provides, provides->toList());
	$set($nc(this->currentModule), directives, directives->toList());
}

ClassReader$UsesProvidesCompleter::ClassReader$UsesProvidesCompleter() {
}

$Class* ClassReader$UsesProvidesCompleter::load$($String* name, bool initialize) {
	$loadClass(ClassReader$UsesProvidesCompleter, name, initialize, &_ClassReader$UsesProvidesCompleter_ClassInfo_, allocate$ClassReader$UsesProvidesCompleter);
	return class$;
}

$Class* ClassReader$UsesProvidesCompleter::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com