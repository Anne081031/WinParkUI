<?xml version="1.0" encoding="utf-8"?>
<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform"
    xmlns:msxsl="urn:schemas-microsoft-com:xslt" exclude-result-prefixes="msxsl"
>
    <xsl:output method="html" indent="yes"/>

    <xsl:template match="/Root/ShopInformation">
        <head>
            <title>
                一个XSLT样例
            </title>
        </head>

        <body>
            <div style="border:1px solid #ccc; padding:5px 5px 5px 5px;font-size;14px;">一个XSLT样例</div>
            <div style="padding:5px 5px 5px 5px;font-size;12px;">
                <xsl:value-of select="Shop"/>
            </div>
        </body>
        
    </xsl:template>
</xsl:stylesheet>
