COMMENT =		dbd-pg wrapper for mojolicious

MODULES =		cpan databases/postgresql
PKG_ARCH =		*
DISTNAME =		Mojo-Pg-4.24
CPAN_AUTHOR =		SRI
CATEGORIES =		databases
MAINTAINER =		Abel Abraham Camarillo Ojeda <acamari@verlet.org>

# artistic 2.0
PERMIT_PACKAGE =	Yes

RUN_DEPENDS =		databases/p5-DBD-Pg>=3.7.4 \
			databases/p5-SQL-Abstract>=1.86 \
			www/p5-Mojo>=8.03

TEST_DEPENDS =		devel/p5-Test-Deep

MODPOSTGRESQL_TEST_DBNAME =	testdb
TEST_FLAGS =		TEST_ONLINE=postgresql:///${MODPOSTGRESQL_TEST_DBNAME}
MAKE_ENV =		TEST_POD=yes

.include <bsd.port.mk>
