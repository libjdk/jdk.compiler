#include <com/sun/tools/sjavac/server/CompilationSubResult.h>

#include <com/sun/tools/javac/main/Main$Result.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <jcpp.h>

using $Main$Result = ::com::sun::tools::javac::main::Main$Result;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace server {

$FieldInfo _CompilationSubResult_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(CompilationSubResult, serialVersionUID)},
	{"result", "Lcom/sun/tools/javac/main/Main$Result;", nullptr, $PUBLIC, $field(CompilationSubResult, result)},
	{"packageArtifacts", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/util/Set<Ljava/net/URI;>;>;", $PUBLIC, $field(CompilationSubResult, packageArtifacts)},
	{"packageDependencies", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/util/Map<Ljava/lang/String;Ljava/util/Set<Ljava/lang/String;>;>;>;", $PUBLIC, $field(CompilationSubResult, packageDependencies)},
	{"packageCpDependencies", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/util/Map<Ljava/lang/String;Ljava/util/Set<Ljava/lang/String;>;>;>;", $PUBLIC, $field(CompilationSubResult, packageCpDependencies)},
	{"packagePubapis", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Lcom/sun/tools/sjavac/pubapi/PubApi;>;", $PUBLIC, $field(CompilationSubResult, packagePubapis)},
	{"dependencyPubapis", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Lcom/sun/tools/sjavac/pubapi/PubApi;>;", $PUBLIC, $field(CompilationSubResult, dependencyPubapis)},
	{"stdout", "Ljava/lang/String;", nullptr, $PUBLIC, $field(CompilationSubResult, stdout)},
	{"stderr", "Ljava/lang/String;", nullptr, $PUBLIC, $field(CompilationSubResult, stderr)},
	{}
};

$MethodInfo _CompilationSubResult_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/main/Main$Result;)V", nullptr, $PUBLIC, $method(static_cast<void(CompilationSubResult::*)($Main$Result*)>(&CompilationSubResult::init$))},
	{"setResult", "(Lcom/sun/tools/javac/main/Main$Result;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _CompilationSubResult_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.sjavac.server.CompilationSubResult",
	"java.lang.Object",
	"java.io.Serializable",
	_CompilationSubResult_FieldInfo_,
	_CompilationSubResult_MethodInfo_
};

$Object* allocate$CompilationSubResult($Class* clazz) {
	return $of($alloc(CompilationSubResult));
}

void CompilationSubResult::init$($Main$Result* result) {
	$set(this, packageArtifacts, $new($HashMap));
	$set(this, packageDependencies, $new($HashMap));
	$set(this, packageCpDependencies, $new($HashMap));
	$set(this, packagePubapis, $new($HashMap));
	$set(this, dependencyPubapis, $new($HashMap));
	$set(this, stdout, ""_s);
	$set(this, stderr, ""_s);
	$set(this, result, result);
}

void CompilationSubResult::setResult($Main$Result* result) {
	$set(this, result, result);
}

CompilationSubResult::CompilationSubResult() {
}

$Class* CompilationSubResult::load$($String* name, bool initialize) {
	$loadClass(CompilationSubResult, name, initialize, &_CompilationSubResult_ClassInfo_, allocate$CompilationSubResult);
	return class$;
}

$Class* CompilationSubResult::class$ = nullptr;

				} // server
			} // sjavac
		} // tools
	} // sun
} // com