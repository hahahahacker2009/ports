COMMENT =	rfc4656 one-way active measurement protocol

DISTNAME =	owamp-3.1
REVISION =	2

CATEGORIES =	net

HOMEPAGE =	http://www.internet2.edu/performance/owamp/

# Custom, see LICENSE.
# Looks like BSD at first but note last paragraph.
PERMIT_PACKAGE =	Yes

WANTLIB += c m

SITES =		http://software.internet2.edu/sources/owamp/

CONFIGURE_STYLE =	gnu

post-install:
	${INSTALL_DATA_DIR} ${PREFIX}/share/examples/owampd
	${INSTALL_DATA} ${WRKSRC}/conf/owampd.conf \
	    ${WRKSRC}/conf/owampd.limits ${PREFIX}/share/examples/owampd

.include <bsd.port.mk>
