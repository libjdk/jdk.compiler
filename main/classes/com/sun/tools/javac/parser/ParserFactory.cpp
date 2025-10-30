#include <com/sun/tools/javac/parser/ParserFactory.h>

#include <com/sun/tools/javac/code/Preview.h>
#include <com/sun/tools/javac/code/Source.h>
#include <com/sun/tools/javac/parser/JavacParser.h>
#include <com/sun/tools/javac/parser/Lexer.h>
#include <com/sun/tools/javac/parser/Scanner.h>
#include <com/sun/tools/javac/parser/ScannerFactory.h>
#include <com/sun/tools/javac/parser/Tokens.h>
#include <com/sun/tools/javac/tree/DocTreeMaker.h>
#include <com/sun/tools/javac/tree/TreeMaker.h>
#include <com/sun/tools/javac/util/Context$Key.h>
#include <com/sun/tools/javac/util/Context.h>
#include <com/sun/tools/javac/util/Log.h>
#include <com/sun/tools/javac/util/Names.h>
#include <com/sun/tools/javac/util/Options.h>
#include <java/lang/CharSequence.h>
#include <java/util/Locale.h>
#include <jcpp.h>

#undef F

using $Preview = ::com::sun::tools::javac::code::Preview;
using $Source = ::com::sun::tools::javac::code::Source;
using $JavacParser = ::com::sun::tools::javac::parser::JavacParser;
using $Lexer = ::com::sun::tools::javac::parser::Lexer;
using $Scanner = ::com::sun::tools::javac::parser::Scanner;
using $ScannerFactory = ::com::sun::tools::javac::parser::ScannerFactory;
using $Tokens = ::com::sun::tools::javac::parser::Tokens;
using $DocTreeMaker = ::com::sun::tools::javac::tree::DocTreeMaker;
using $TreeMaker = ::com::sun::tools::javac::tree::TreeMaker;
using $Context = ::com::sun::tools::javac::util::Context;
using $Context$Key = ::com::sun::tools::javac::util::Context$Key;
using $Log = ::com::sun::tools::javac::util::Log;
using $Names = ::com::sun::tools::javac::util::Names;
using $Options = ::com::sun::tools::javac::util::Options;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace parser {

$FieldInfo _ParserFactory_FieldInfo_[] = {
	{"parserFactoryKey", "Lcom/sun/tools/javac/util/Context$Key;", "Lcom/sun/tools/javac/util/Context$Key<Lcom/sun/tools/javac/parser/ParserFactory;>;", $PROTECTED | $STATIC | $FINAL, $staticField(ParserFactory, parserFactoryKey)},
	{"F", "Lcom/sun/tools/javac/tree/TreeMaker;", nullptr, $FINAL, $field(ParserFactory, F)},
	{"docTreeMaker", "Lcom/sun/tools/javac/tree/DocTreeMaker;", nullptr, $FINAL, $field(ParserFactory, docTreeMaker)},
	{"log", "Lcom/sun/tools/javac/util/Log;", nullptr, $FINAL, $field(ParserFactory, log)},
	{"tokens", "Lcom/sun/tools/javac/parser/Tokens;", nullptr, $FINAL, $field(ParserFactory, tokens)},
	{"source", "Lcom/sun/tools/javac/code/Source;", nullptr, $FINAL, $field(ParserFactory, source)},
	{"preview", "Lcom/sun/tools/javac/code/Preview;", nullptr, $FINAL, $field(ParserFactory, preview)},
	{"names", "Lcom/sun/tools/javac/util/Names;", nullptr, $FINAL, $field(ParserFactory, names)},
	{"options", "Lcom/sun/tools/javac/util/Options;", nullptr, $FINAL, $field(ParserFactory, options)},
	{"scannerFactory", "Lcom/sun/tools/javac/parser/ScannerFactory;", nullptr, $FINAL, $field(ParserFactory, scannerFactory)},
	{"locale", "Ljava/util/Locale;", nullptr, $FINAL, $field(ParserFactory, locale)},
	{}
};

$MethodInfo _ParserFactory_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/util/Context;)V", nullptr, $PROTECTED, $method(static_cast<void(ParserFactory::*)($Context*)>(&ParserFactory::init$))},
	{"instance", "(Lcom/sun/tools/javac/util/Context;)Lcom/sun/tools/javac/parser/ParserFactory;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ParserFactory*(*)($Context*)>(&ParserFactory::instance))},
	{"newParser", "(Ljava/lang/CharSequence;ZZZ)Lcom/sun/tools/javac/parser/JavacParser;", nullptr, $PUBLIC},
	{"newParser", "(Ljava/lang/CharSequence;ZZZZ)Lcom/sun/tools/javac/parser/JavacParser;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ParserFactory_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.parser.ParserFactory",
	"java.lang.Object",
	nullptr,
	_ParserFactory_FieldInfo_,
	_ParserFactory_MethodInfo_
};

$Object* allocate$ParserFactory($Class* clazz) {
	return $of($alloc(ParserFactory));
}

$Context$Key* ParserFactory::parserFactoryKey = nullptr;

ParserFactory* ParserFactory::instance($Context* context) {
	$init(ParserFactory);
	$var(ParserFactory, instance, $cast(ParserFactory, $nc(context)->get(ParserFactory::parserFactoryKey)));
	if (instance == nullptr) {
		$assign(instance, $new(ParserFactory, context));
	}
	return instance;
}

void ParserFactory::init$($Context* context) {
	$nc(context)->put(ParserFactory::parserFactoryKey, $of(this));
	$set(this, F, $TreeMaker::instance(context));
	$set(this, docTreeMaker, $DocTreeMaker::instance(context));
	$set(this, log, $Log::instance(context));
	$set(this, names, $Names::instance(context));
	$set(this, tokens, $Tokens::instance(context));
	$set(this, source, $Source::instance(context));
	$set(this, preview, $Preview::instance(context));
	$set(this, options, $Options::instance(context));
	$set(this, scannerFactory, $ScannerFactory::instance(context));
	$load($Locale);
	$set(this, locale, $cast($Locale, context->get($Locale::class$)));
}

$JavacParser* ParserFactory::newParser($CharSequence* input, bool keepDocComments, bool keepEndPos, bool keepLineMap) {
	return newParser(input, keepDocComments, keepEndPos, keepLineMap, false);
}

$JavacParser* ParserFactory::newParser($CharSequence* input, bool keepDocComments, bool keepEndPos, bool keepLineMap, bool parseModuleInfo) {
	$var($Lexer, lexer, $nc(this->scannerFactory)->newScanner(input, keepDocComments));
	return $new($JavacParser, this, lexer, keepDocComments, keepLineMap, keepEndPos, parseModuleInfo);
}

void clinit$ParserFactory($Class* class$) {
	$assignStatic(ParserFactory::parserFactoryKey, $new($Context$Key));
}

ParserFactory::ParserFactory() {
}

$Class* ParserFactory::load$($String* name, bool initialize) {
	$loadClass(ParserFactory, name, initialize, &_ParserFactory_ClassInfo_, clinit$ParserFactory, allocate$ParserFactory);
	return class$;
}

$Class* ParserFactory::class$ = nullptr;

				} // parser
			} // javac
		} // tools
	} // sun
} // com