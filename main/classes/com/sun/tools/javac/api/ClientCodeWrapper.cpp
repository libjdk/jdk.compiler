#include <com/sun/tools/javac/api/ClientCodeWrapper.h>

#include <com/sun/source/util/TaskListener.h>
#include <com/sun/tools/javac/api/ClientCodeWrapper$DiagnosticSourceUnwrapper.h>
#include <com/sun/tools/javac/api/ClientCodeWrapper$Trusted.h>
#include <com/sun/tools/javac/api/ClientCodeWrapper$WrappedDiagnosticListener.h>
#include <com/sun/tools/javac/api/ClientCodeWrapper$WrappedFileObject.h>
#include <com/sun/tools/javac/api/ClientCodeWrapper$WrappedJavaFileManager.h>
#include <com/sun/tools/javac/api/ClientCodeWrapper$WrappedJavaFileObject.h>
#include <com/sun/tools/javac/api/ClientCodeWrapper$WrappedStandardJavaFileManager.h>
#include <com/sun/tools/javac/api/ClientCodeWrapper$WrappedTaskListener.h>
#include <com/sun/tools/javac/util/Context.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <java/lang/Iterable.h>
#include <java/util/AbstractCollection.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractMap.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <javax/tools/Diagnostic.h>
#include <javax/tools/DiagnosticListener.h>
#include <javax/tools/FileObject.h>
#include <javax/tools/JavaFileManager.h>
#include <javax/tools/JavaFileObject.h>
#include <javax/tools/StandardJavaFileManager.h>
#include <jcpp.h>

using $TaskListener = ::com::sun::source::util::TaskListener;
using $ClientCodeWrapper$DiagnosticSourceUnwrapper = ::com::sun::tools::javac::api::ClientCodeWrapper$DiagnosticSourceUnwrapper;
using $ClientCodeWrapper$Trusted = ::com::sun::tools::javac::api::ClientCodeWrapper$Trusted;
using $ClientCodeWrapper$WrappedDiagnosticListener = ::com::sun::tools::javac::api::ClientCodeWrapper$WrappedDiagnosticListener;
using $ClientCodeWrapper$WrappedFileObject = ::com::sun::tools::javac::api::ClientCodeWrapper$WrappedFileObject;
using $ClientCodeWrapper$WrappedJavaFileManager = ::com::sun::tools::javac::api::ClientCodeWrapper$WrappedJavaFileManager;
using $ClientCodeWrapper$WrappedJavaFileObject = ::com::sun::tools::javac::api::ClientCodeWrapper$WrappedJavaFileObject;
using $ClientCodeWrapper$WrappedStandardJavaFileManager = ::com::sun::tools::javac::api::ClientCodeWrapper$WrappedStandardJavaFileManager;
using $ClientCodeWrapper$WrappedTaskListener = ::com::sun::tools::javac::api::ClientCodeWrapper$WrappedTaskListener;
using $Context = ::com::sun::tools::javac::util::Context;
using $JCDiagnostic = ::com::sun::tools::javac::util::JCDiagnostic;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractCollection = ::java::util::AbstractCollection;
using $AbstractList = ::java::util::AbstractList;
using $AbstractMap = ::java::util::AbstractMap;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Diagnostic = ::javax::tools::Diagnostic;
using $DiagnosticListener = ::javax::tools::DiagnosticListener;
using $FileObject = ::javax::tools::FileObject;
using $JavaFileManager = ::javax::tools::JavaFileManager;
using $JavaFileObject = ::javax::tools::JavaFileObject;
using $StandardJavaFileManager = ::javax::tools::StandardJavaFileManager;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace api {

$FieldInfo _ClientCodeWrapper_FieldInfo_[] = {
	{"trustedClasses", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Class<*>;Ljava/lang/Boolean;>;", 0, $field(ClientCodeWrapper, trustedClasses)},
	{}
};

$MethodInfo _ClientCodeWrapper_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/util/Context;)V", nullptr, $PROTECTED, $method(static_cast<void(ClientCodeWrapper::*)($Context*)>(&ClientCodeWrapper::init$))},
	{"instance", "(Lcom/sun/tools/javac/util/Context;)Lcom/sun/tools/javac/api/ClientCodeWrapper;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ClientCodeWrapper*(*)($Context*)>(&ClientCodeWrapper::instance))},
	{"isTrusted", "(Ljava/lang/Object;)Z", nullptr, $PROTECTED},
	{"unwrap", "(Ljavax/tools/FileObject;)Ljavax/tools/FileObject;", nullptr, 0},
	{"unwrap", "(Ljavax/tools/JavaFileObject;)Ljavax/tools/JavaFileObject;", nullptr, 0},
	{"unwrap", "(Lcom/sun/source/util/TaskListener;)Lcom/sun/source/util/TaskListener;", nullptr, 0},
	{"unwrap", "(Ljava/util/Collection;)Ljava/util/Collection;", "(Ljava/util/Collection<+Lcom/sun/source/util/TaskListener;>;)Ljava/util/Collection<Lcom/sun/source/util/TaskListener;>;", 0},
	{"unwrap", "(Ljavax/tools/Diagnostic;)Ljavax/tools/Diagnostic;", "<T:Ljava/lang/Object;>(Ljavax/tools/Diagnostic<TT;>;)Ljavax/tools/Diagnostic<TT;>;", $PRIVATE, $method(static_cast<$Diagnostic*(ClientCodeWrapper::*)($Diagnostic*)>(&ClientCodeWrapper::unwrap))},
	{"wrap", "(Ljavax/tools/JavaFileManager;)Ljavax/tools/JavaFileManager;", nullptr, $PUBLIC},
	{"wrap", "(Ljavax/tools/FileObject;)Ljavax/tools/FileObject;", nullptr, $PUBLIC},
	{"wrap", "(Ljavax/tools/JavaFileObject;)Ljavax/tools/JavaFileObject;", nullptr, $PUBLIC},
	{"wrap", "(Ljavax/tools/DiagnosticListener;)Ljavax/tools/DiagnosticListener;", "<T:Ljava/lang/Object;>(Ljavax/tools/DiagnosticListener<TT;>;)Ljavax/tools/DiagnosticListener<TT;>;", $PUBLIC},
	{"wrap", "(Lcom/sun/source/util/TaskListener;)Lcom/sun/source/util/TaskListener;", nullptr, 0},
	{"wrapJavaFileObjects", "(Ljava/lang/Iterable;)Ljava/lang/Iterable;", "(Ljava/lang/Iterable<+Ljavax/tools/JavaFileObject;>;)Ljava/lang/Iterable<Ljavax/tools/JavaFileObject;>;", $PUBLIC},
	{"wrappedToString", "(Ljava/lang/Class;Ljava/lang/Object;)Ljava/lang/String;", "(Ljava/lang/Class<*>;Ljava/lang/Object;)Ljava/lang/String;", $PRIVATE, $method(static_cast<$String*(ClientCodeWrapper::*)($Class*,Object$*)>(&ClientCodeWrapper::wrappedToString))},
	{}
};

$InnerClassInfo _ClientCodeWrapper_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.api.ClientCodeWrapper$WrappedTaskListener", "com.sun.tools.javac.api.ClientCodeWrapper", "WrappedTaskListener", $PROTECTED},
	{"com.sun.tools.javac.api.ClientCodeWrapper$DiagnosticSourceUnwrapper", "com.sun.tools.javac.api.ClientCodeWrapper", "DiagnosticSourceUnwrapper", $PUBLIC},
	{"com.sun.tools.javac.api.ClientCodeWrapper$WrappedDiagnosticListener", "com.sun.tools.javac.api.ClientCodeWrapper", "WrappedDiagnosticListener", $PROTECTED},
	{"com.sun.tools.javac.api.ClientCodeWrapper$WrappedJavaFileObject", "com.sun.tools.javac.api.ClientCodeWrapper", "WrappedJavaFileObject", $PROTECTED},
	{"com.sun.tools.javac.api.ClientCodeWrapper$WrappedFileObject", "com.sun.tools.javac.api.ClientCodeWrapper", "WrappedFileObject", $PROTECTED},
	{"com.sun.tools.javac.api.ClientCodeWrapper$WrappedStandardJavaFileManager", "com.sun.tools.javac.api.ClientCodeWrapper", "WrappedStandardJavaFileManager", $PROTECTED},
	{"com.sun.tools.javac.api.ClientCodeWrapper$WrappedJavaFileManager", "com.sun.tools.javac.api.ClientCodeWrapper", "WrappedJavaFileManager", $PROTECTED},
	{"com.sun.tools.javac.api.ClientCodeWrapper$Trusted", "com.sun.tools.javac.api.ClientCodeWrapper", "Trusted", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT | $ANNOTATION},
	{}
};

$ClassInfo _ClientCodeWrapper_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.api.ClientCodeWrapper",
	"java.lang.Object",
	nullptr,
	_ClientCodeWrapper_FieldInfo_,
	_ClientCodeWrapper_MethodInfo_,
	nullptr,
	nullptr,
	_ClientCodeWrapper_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.api.ClientCodeWrapper$WrappedTaskListener,com.sun.tools.javac.api.ClientCodeWrapper$DiagnosticSourceUnwrapper,com.sun.tools.javac.api.ClientCodeWrapper$WrappedDiagnosticListener,com.sun.tools.javac.api.ClientCodeWrapper$WrappedJavaFileObject,com.sun.tools.javac.api.ClientCodeWrapper$WrappedFileObject,com.sun.tools.javac.api.ClientCodeWrapper$WrappedStandardJavaFileManager,com.sun.tools.javac.api.ClientCodeWrapper$WrappedJavaFileManager,com.sun.tools.javac.api.ClientCodeWrapper$Trusted"
};

$Object* allocate$ClientCodeWrapper($Class* clazz) {
	return $of($alloc(ClientCodeWrapper));
}

ClientCodeWrapper* ClientCodeWrapper::instance($Context* context) {
	$load(ClientCodeWrapper);
	$var(ClientCodeWrapper, instance, $cast(ClientCodeWrapper, $nc(context)->get(ClientCodeWrapper::class$)));
	if (instance == nullptr) {
		$assign(instance, $new(ClientCodeWrapper, context));
	}
	return instance;
}

void ClientCodeWrapper::init$($Context* context) {
	$set(this, trustedClasses, $new($HashMap));
}

$JavaFileManager* ClientCodeWrapper::wrap($JavaFileManager* fm) {
	if (isTrusted(fm)) {
		return fm;
	}
	$var($StandardJavaFileManager, standardJavaFileManager, nullptr);
	bool var$0 = $instanceOf($StandardJavaFileManager, fm);
	if (var$0) {
		$assign(standardJavaFileManager, $cast($StandardJavaFileManager, fm));
		var$0 = true;
	}
	return (var$0) ? static_cast<$JavaFileManager*>(static_cast<$ClientCodeWrapper$WrappedJavaFileManager*>($new($ClientCodeWrapper$WrappedStandardJavaFileManager, this, standardJavaFileManager))) : static_cast<$JavaFileManager*>($new($ClientCodeWrapper$WrappedJavaFileManager, this, fm));
}

$FileObject* ClientCodeWrapper::wrap($FileObject* fo) {
	if (fo == nullptr || isTrusted(fo)) {
		return fo;
	}
	return $new($ClientCodeWrapper$WrappedFileObject, this, fo);
}

$FileObject* ClientCodeWrapper::unwrap($FileObject* fo) {
	$var($ClientCodeWrapper$WrappedFileObject, wrappedFileObject, nullptr);
	bool var$0 = $instanceOf($ClientCodeWrapper$WrappedFileObject, fo);
	if (var$0) {
		$assign(wrappedFileObject, $cast($ClientCodeWrapper$WrappedFileObject, fo));
		var$0 = true;
	}
	return (var$0) ? $nc(wrappedFileObject)->clientFileObject : fo;
}

$JavaFileObject* ClientCodeWrapper::wrap($JavaFileObject* fo) {
	if (fo == nullptr || isTrusted(fo)) {
		return fo;
	}
	return $new($ClientCodeWrapper$WrappedJavaFileObject, this, fo);
}

$Iterable* ClientCodeWrapper::wrapJavaFileObjects($Iterable* list) {
	$useLocalCurrentObjectStackCache();
	$var($List, wrapped, $new($ArrayList));
	{
		$var($Iterator, i$, $nc(list)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($JavaFileObject, fo, $cast($JavaFileObject, i$->next()));
			wrapped->add($(wrap(fo)));
		}
	}
	return $Collections::unmodifiableList(wrapped);
}

$JavaFileObject* ClientCodeWrapper::unwrap($JavaFileObject* fo) {
	$var($ClientCodeWrapper$WrappedJavaFileObject, wrappedJavaFileObject, nullptr);
	bool var$0 = $instanceOf($ClientCodeWrapper$WrappedJavaFileObject, fo);
	if (var$0) {
		$assign(wrappedJavaFileObject, $cast($ClientCodeWrapper$WrappedJavaFileObject, fo));
		var$0 = true;
	}
	return (var$0) ? ($cast($JavaFileObject, $nc(wrappedJavaFileObject)->clientFileObject)) : fo;
}

$DiagnosticListener* ClientCodeWrapper::wrap($DiagnosticListener* dl) {
	if (isTrusted(dl)) {
		return dl;
	}
	return $new($ClientCodeWrapper$WrappedDiagnosticListener, this, dl);
}

$TaskListener* ClientCodeWrapper::wrap($TaskListener* tl) {
	if (isTrusted(tl)) {
		return tl;
	}
	return $new($ClientCodeWrapper$WrappedTaskListener, this, tl);
}

$TaskListener* ClientCodeWrapper::unwrap($TaskListener* l) {
	$var($ClientCodeWrapper$WrappedTaskListener, wrappedTaskListener, nullptr);
	bool var$0 = $instanceOf($ClientCodeWrapper$WrappedTaskListener, l);
	if (var$0) {
		$assign(wrappedTaskListener, $cast($ClientCodeWrapper$WrappedTaskListener, l));
		var$0 = true;
	}
	return (var$0) ? $nc(wrappedTaskListener)->clientTaskListener : l;
}

$Collection* ClientCodeWrapper::unwrap($Collection* listeners) {
	$useLocalCurrentObjectStackCache();
	$var($Collection, c, static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractList*>($new($ArrayList, $nc(listeners)->size())))));
	{
		$var($Iterator, i$, $nc(listeners)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($TaskListener, l, $cast($TaskListener, i$->next()));
			c->add($(unwrap(l)));
		}
	}
	return c;
}

$Diagnostic* ClientCodeWrapper::unwrap($Diagnostic* diagnostic) {
	$var($JCDiagnostic, jcDiagnostic, nullptr);
	bool var$0 = $instanceOf($JCDiagnostic, diagnostic);
	if (var$0) {
		$assign(jcDiagnostic, $cast($JCDiagnostic, diagnostic));
		var$0 = true;
	}
	return (var$0) ? static_cast<$Diagnostic*>($new($ClientCodeWrapper$DiagnosticSourceUnwrapper, this, jcDiagnostic)) : diagnostic;
}

bool ClientCodeWrapper::isTrusted(Object$* o) {
	$useLocalCurrentObjectStackCache();
	$Class* c = $nc($of(o))->getClass();
	$var($Boolean, trusted, $cast($Boolean, $nc(this->trustedClasses)->get(c)));
	if (trusted == nullptr) {
		bool var$0 = $nc($($nc(c)->getName()))->startsWith("com.sun.tools.javac."_s);
		$load($ClientCodeWrapper$Trusted);
		$assign(trusted, $Boolean::valueOf(var$0 || $nc(c)->isAnnotationPresent($ClientCodeWrapper$Trusted::class$)));
		$nc(this->trustedClasses)->put(c, trusted);
	}
	return $nc(trusted)->booleanValue();
}

$String* ClientCodeWrapper::wrappedToString($Class* wrapperClass, Object$* wrapped) {
	return $str({$($nc(wrapperClass)->getSimpleName()), "["_s, wrapped, "]"_s});
}

ClientCodeWrapper::ClientCodeWrapper() {
}

$Class* ClientCodeWrapper::load$($String* name, bool initialize) {
	$loadClass(ClientCodeWrapper, name, initialize, &_ClientCodeWrapper_ClassInfo_, allocate$ClientCodeWrapper);
	return class$;
}

$Class* ClientCodeWrapper::class$ = nullptr;

				} // api
			} // javac
		} // tools
	} // sun
} // com