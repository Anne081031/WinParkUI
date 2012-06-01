-- MySQL dump 10.13  Distrib 5.5.9, for Win32 (x86)
--
-- Host: localhost    Database: parkadmin
-- ------------------------------------------------------
-- Server version	5.5.21

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8 */;
/*!40103 SET @OLD_TIME_ZONE=@@TIME_ZONE */;
/*!40103 SET TIME_ZONE='+00:00' */;
/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;

--
-- Current Database: `parkadmin`
--

CREATE DATABASE /*!32312 IF NOT EXISTS*/ `parkadmin` /*!40100 DEFAULT CHARACTER SET gb2312 */;

USE `parkadmin`;

--
-- Table structure for table `blacklist`
--

DROP TABLE IF EXISTS `blacklist`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `blacklist` (
  `id` int(10) unsigned NOT NULL AUTO_INCREMENT,
  `plate` varchar(45) DEFAULT NULL,
  `kind` varchar(45) DEFAULT NULL,
  `color` varchar(45) DEFAULT NULL,
  PRIMARY KEY (`id`),
  KEY `ind_plate` (`plate`)
) ENGINE=InnoDB DEFAULT CHARSET=gb2312 COMMENT='黑名单';
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `blacklist`
--

LOCK TABLES `blacklist` WRITE;
/*!40000 ALTER TABLE `blacklist` DISABLE KEYS */;
/*!40000 ALTER TABLE `blacklist` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `cardright`
--

DROP TABLE IF EXISTS `cardright`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `cardright` (
  `cardsetind` int(10) unsigned NOT NULL AUTO_INCREMENT,
  `cardno` varchar(50) NOT NULL DEFAULT '0',
  `roadconind` int(10) unsigned NOT NULL,
  `starttime` time NOT NULL DEFAULT '00:00:00',
  `endtime` time NOT NULL DEFAULT '23:59:59',
  `shebeiname` varchar(30) NOT NULL DEFAULT '未知',
  PRIMARY KEY (`cardsetind`),
  KEY `roadconind` (`roadconind`),
  KEY `cardno_starttime_endtime` (`cardno`,`starttime`,`endtime`) USING BTREE
) ENGINE=InnoDB AUTO_INCREMENT=5543 DEFAULT CHARSET=gb2312;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `cardright`
--

LOCK TABLES `cardright` WRITE;
/*!40000 ALTER TABLE `cardright` DISABLE KEYS */;
/*!40000 ALTER TABLE `cardright` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `carinfo`
--

DROP TABLE IF EXISTS `carinfo`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `carinfo` (
  `carid` int(10) unsigned NOT NULL AUTO_INCREMENT,
  `carcp` varchar(50) NOT NULL DEFAULT '未知',
  `carmodel` varchar(50) NOT NULL DEFAULT '小型车',
  `carpic` longblob,
  `cardindex` varchar(50) NOT NULL DEFAULT '0',
  `carhaoma` varchar(50) NOT NULL DEFAULT '未知',
  PRIMARY KEY (`carid`),
  KEY `cardindex` (`cardindex`),
  KEY `carcp` (`carcp`)
) ENGINE=InnoDB AUTO_INCREMENT=221 DEFAULT CHARSET=gb2312;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `carinfo`
--

LOCK TABLES `carinfo` WRITE;
/*!40000 ALTER TABLE `carinfo` DISABLE KEYS */;
/*!40000 ALTER TABLE `carinfo` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `feerate`
--

DROP TABLE IF EXISTS `feerate`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `feerate` (
  `RParkid` int(10) DEFAULT NULL,
  `RFeeModel` int(10) DEFAULT NULL,
  `RTimeIndex` int(10) DEFAULT NULL,
  `RSmTime` int(10) DEFAULT NULL,
  `RBmTime` int(10) DEFAULT NULL,
  `RMoney` int(10) DEFAULT NULL,
  `RMoneyDw` int(10) DEFAULT NULL,
  `RIncTime` tinyint(1) NOT NULL DEFAULT '0',
  `RIndex` int(10) NOT NULL AUTO_INCREMENT,
  PRIMARY KEY (`RIndex`),
  KEY `RParkid` (`RParkid`)
) ENGINE=InnoDB AUTO_INCREMENT=1395 DEFAULT CHARSET=gb2312;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `feerate`
--

LOCK TABLES `feerate` WRITE;
/*!40000 ALTER TABLE `feerate` DISABLE KEYS */;
INSERT INTO `feerate` VALUES (23,0,0,0,0,7,0,0,1323),(23,0,1,1,2,0,0,0,1324),(23,0,2,0,0,0,0,0,1325),(23,0,3,0,0,0,0,0,1326),(23,0,4,0,0,0,0,0,1327),(23,0,5,0,0,0,0,0,1328),(23,0,6,0,0,0,0,0,1329),(23,0,7,0,0,0,0,0,1330),(23,0,8,0,0,0,0,0,1331),(23,1,0,0,0,7,0,0,1332),(23,1,1,1,2,0,0,0,1333),(23,1,2,0,0,0,0,0,1334),(23,1,3,0,0,0,0,0,1335),(23,1,4,0,0,0,0,0,1336),(23,1,5,0,0,0,0,0,1337),(23,1,6,0,0,0,0,0,1338),(23,1,7,0,0,0,0,0,1339),(23,1,8,0,0,0,0,0,1340),(23,2,0,0,0,2,0,1,1341),(23,2,1,1,2,6,0,0,1342),(23,2,2,3,5,1,2,0,1343),(23,2,3,6,1000,2,3,0,1344),(23,2,4,0,0,0,0,0,1345),(23,2,5,0,0,0,0,0,1346),(23,2,6,0,0,0,0,0,1347),(23,2,7,0,0,0,0,0,1348),(23,2,8,0,0,0,0,0,1349),(23,3,0,0,0,7,0,0,1350),(23,3,1,1,2,0,0,0,1351),(23,3,2,0,0,0,0,0,1352),(23,3,3,0,0,0,0,0,1353),(23,3,4,0,0,0,0,0,1354),(23,3,5,0,0,0,0,0,1355),(23,3,6,0,0,0,0,0,1356),(23,3,7,0,0,0,0,0,1357),(23,3,8,0,0,0,0,0,1358),(23,4,0,0,0,7,0,0,1359),(23,4,1,1,2,0,0,0,1360),(23,4,2,0,0,0,0,0,1361),(23,4,3,0,0,0,0,0,1362),(23,4,4,0,0,0,0,0,1363),(23,4,5,0,0,0,0,0,1364),(23,4,6,0,0,0,0,0,1365),(23,4,7,0,0,0,0,0,1366),(23,4,8,0,0,0,0,0,1367),(23,5,0,0,0,7,0,0,1368),(23,5,1,1,2,0,0,0,1369),(23,5,2,0,0,0,0,0,1370),(23,5,3,0,0,0,0,0,1371),(23,5,4,0,0,0,0,0,1372),(23,5,5,0,0,0,0,0,1373),(23,5,6,0,0,0,0,0,1374),(23,5,7,0,0,0,0,0,1375),(23,5,8,0,0,0,0,0,1376),(23,6,0,0,0,7,0,0,1377),(23,6,1,1,2,0,0,0,1378),(23,6,2,0,0,0,0,0,1379),(23,6,3,0,0,0,0,0,1380),(23,6,4,0,0,0,0,0,1381),(23,6,5,0,0,0,0,0,1382),(23,6,6,0,0,0,0,0,1383),(23,6,7,0,0,0,0,0,1384),(23,6,8,0,0,0,0,0,1385),(23,7,0,0,0,7,0,0,1386),(23,7,1,1,2,0,0,0,1387),(23,7,2,0,0,0,0,0,1388),(23,7,3,0,0,0,0,0,1389),(23,7,4,0,0,0,0,0,1390),(23,7,5,0,0,0,0,0,1391),(23,7,6,0,0,0,0,0,1392),(23,7,7,0,0,0,0,0,1393),(23,7,8,0,0,0,0,0,1394);
/*!40000 ALTER TABLE `feerate` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `feerate1`
--

DROP TABLE IF EXISTS `feerate1`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `feerate1` (
  `rparkid` int(11) DEFAULT '0' COMMENT 'Í£',
  `rfeemodel` int(11) DEFAULT '0',
  `gz1t` int(11) DEFAULT '0',
  `gz1f` int(11) DEFAULT '0',
  `gz2t` int(11) DEFAULT '0',
  `gz2f` int(11) DEFAULT '0',
  `gz3t` int(11) DEFAULT '0',
  `gz3f` int(11) DEFAULT '0',
  `gz4t` int(11) DEFAULT '0',
  `gz4f` int(11) DEFAULT '0',
  `gz5t` int(11) DEFAULT '0',
  `gz5f` int(11) DEFAULT '0',
  `gz6t` int(11) DEFAULT '0',
  `gz6f` int(11) DEFAULT '0',
  `gz7t` int(11) DEFAULT '0',
  `gz7f` int(11) DEFAULT '0',
  `gz8t` int(11) DEFAULT '0',
  `gz8f` int(11) DEFAULT '0',
  `gz9t` int(11) DEFAULT '0',
  `gz9f` int(11) DEFAULT '0',
  `gz10t` int(11) DEFAULT '0',
  `gz10f` int(11) DEFAULT '0',
  `gz11t` int(11) DEFAULT '0',
  `gz11f` int(11) DEFAULT '0',
  `gz12t` int(11) DEFAULT '0',
  `gz12f` int(11) DEFAULT '0',
  `xhdw` int(11) DEFAULT '0',
  `xhfh` int(11) DEFAULT '0',
  `kxiant` int(11) DEFAULT '0',
  `freet` int(11) DEFAULT '0' COMMENT '¿íÏÞÊ±¼ä',
  `fdtimestar` time DEFAULT '00:00:00',
  `fdtimeend` time DEFAULT '23:59:59',
  `dldwt` int(11) DEFAULT '0',
  `dldwf` int(11) DEFAULT '0',
  `dlxianfee` int(11) DEFAULT '0',
  `dwdwt` int(11) DEFAULT '0',
  `dwdwf` int(11) DEFAULT '0',
  `dwxianfee` int(11) DEFAULT '0',
  `firstjstime` int(11) DEFAULT '0',
  `Section` tinyint(1) DEFAULT '0'
) ENGINE=InnoDB DEFAULT CHARSET=gb2312;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `feerate1`
--

LOCK TABLES `feerate1` WRITE;
/*!40000 ALTER TABLE `feerate1` DISABLE KEYS */;
INSERT INTO `feerate1` VALUES (5,0,13,14,15,16,17,18,19,20,21,22,23,24,0,0,0,0,0,0,0,0,0,0,0,0,27,28,11,12,'00:00:00','23:59:59',25,26,0,0,0,0,29,0),(5,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0,0),(5,2,240,40,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1440,140,0,0,'00:00:00','23:59:59',120,10,0,0,0,0,0,0),(5,3,60,40,120,30,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,5,'00:00:00','23:59:59',0,0,0,0,0,0,0,0),(5,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0,0),(5,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0,0),(5,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0,0),(5,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0,0),(6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0,0),(6,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0,0),(6,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0,0),(6,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0,0),(6,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0,0),(6,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0,0),(6,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0,0),(6,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0,0),(7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0,0),(7,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0,0),(7,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0,0),(7,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0,0),(7,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0,0),(7,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0,0),(7,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0,0),(7,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0,0),(21,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0,0),(21,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0,0),(21,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0,0),(21,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0,0),(21,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0,0),(21,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0,0),(21,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0,0),(21,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0,0),(22,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0,0),(22,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0,0),(22,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0,0),(22,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0,0),(22,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0,0),(22,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0,0),(22,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0,0),(22,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0,0),(23,0,720,100,0,0,0,0,0,0,0,0,0,0,720,0,0,0,0,0,0,0,0,0,0,0,1440,200,0,15,'08:00:00','20:00:00',720,100,0,0,0,0,0,0),(23,1,720,100,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1440,200,0,15,'00:00:00','23:59:59',720,100,0,0,0,0,0,0),(23,2,720,100,0,0,0,0,0,0,0,0,0,0,720,100,0,0,0,0,0,0,0,0,0,0,1440,200,0,15,'08:00:00','20:00:00',720,100,0,720,100,0,0,0),(23,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0,0),(23,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0,0),(23,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0,0),(23,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0,0),(23,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0,0);
/*!40000 ALTER TABLE `feerate1` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `feeratebackup`
--

DROP TABLE IF EXISTS `feeratebackup`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `feeratebackup` (
  `RParkid` int(10) DEFAULT NULL,
  `RFeeModel` int(10) DEFAULT NULL,
  `RTimeIndex` int(10) DEFAULT NULL,
  `RSmTime` int(10) DEFAULT NULL,
  `RBmTime` int(10) DEFAULT NULL,
  `RMoney` int(10) DEFAULT NULL,
  `RMoneyDw` int(10) DEFAULT NULL,
  `RIncTime` tinyint(1) NOT NULL DEFAULT '0',
  KEY `RParkid` (`RParkid`)
) ENGINE=InnoDB DEFAULT CHARSET=gb2312;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `feeratebackup`
--

LOCK TABLES `feeratebackup` WRITE;
/*!40000 ALTER TABLE `feeratebackup` DISABLE KEYS */;
INSERT INTO `feeratebackup` VALUES (28,0,0,0,0,7,0,0),(28,0,1,1,2,0,0,0),(28,0,2,0,0,0,0,0),(28,0,3,0,0,0,0,0),(28,0,4,0,0,0,0,0),(28,0,5,0,0,0,0,0),(28,0,6,0,0,0,0,0),(28,0,7,0,0,0,0,0),(28,0,8,0,0,0,0,0),(28,1,0,0,0,7,0,0),(28,1,1,1,2,0,0,0),(28,1,2,0,0,0,0,0),(28,1,3,0,0,0,0,0),(28,1,4,0,0,0,0,0),(28,1,5,0,0,0,0,0),(28,1,6,0,0,0,0,0),(28,1,7,0,0,0,0,0),(28,1,8,0,0,0,0,0),(28,2,0,0,0,2,0,1),(28,2,1,1,2,6,0,0),(28,2,2,3,5,1,2,0),(28,2,3,6,1000,2,3,0),(28,2,4,0,0,0,0,0),(28,2,5,0,0,0,0,0),(28,2,6,0,0,0,0,0),(28,2,7,0,0,0,0,0),(28,2,8,0,0,0,0,0),(28,3,0,0,0,7,0,0),(28,3,1,1,2,0,0,0),(28,3,2,0,0,0,0,0),(28,3,3,0,0,0,0,0),(28,3,4,0,0,0,0,0),(28,3,5,0,0,0,0,0),(28,3,6,0,0,0,0,0),(28,3,7,0,0,0,0,0),(28,3,8,0,0,0,0,0),(28,4,0,0,0,7,0,0),(28,4,1,1,2,0,0,0),(28,4,2,0,0,0,0,0),(28,4,3,0,0,0,0,0),(28,4,4,0,0,0,0,0),(28,4,5,0,0,0,0,0),(28,4,6,0,0,0,0,0),(28,4,7,0,0,0,0,0),(28,4,8,0,0,0,0,0),(28,5,0,0,0,7,0,0),(28,5,1,1,2,0,0,0),(28,5,2,0,0,0,0,0),(28,5,3,0,0,0,0,0),(28,5,4,0,0,0,0,0),(28,5,5,0,0,0,0,0),(28,5,6,0,0,0,0,0),(28,5,7,0,0,0,0,0),(28,5,8,0,0,0,0,0),(28,6,0,0,0,7,0,0),(28,6,1,1,2,0,0,0),(28,6,2,0,0,0,0,0),(28,6,3,0,0,0,0,0),(28,6,4,0,0,0,0,0),(28,6,5,0,0,0,0,0),(28,6,6,0,0,0,0,0),(28,6,7,0,0,0,0,0),(28,6,8,0,0,0,0,0),(28,7,0,0,0,7,0,0),(28,7,1,1,2,0,0,0),(28,7,2,0,0,0,0,0),(28,7,3,0,0,0,0,0),(28,7,4,0,0,0,0,0),(28,7,5,0,0,0,0,0),(28,7,6,0,0,0,0,0),(28,7,7,0,0,0,0,0),(28,7,8,0,0,0,0,0);
/*!40000 ALTER TABLE `feeratebackup` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `feerd`
--

DROP TABLE IF EXISTS `feerd`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `feerd` (
  `feeindex` int(10) unsigned NOT NULL AUTO_INCREMENT,
  `feenumb` int(10) unsigned NOT NULL,
  `feetime` datetime NOT NULL,
  `feekind` varchar(30) NOT NULL DEFAULT '未知',
  `feeoperator` varchar(30) NOT NULL DEFAULT '未知',
  `cardno` varchar(50) NOT NULL DEFAULT '未知',
  `timelen` int(10) unsigned DEFAULT NULL,
  `Transfered` tinyint(1) DEFAULT '0',
  PRIMARY KEY (`feeindex`),
  KEY `feetime` (`feetime`),
  KEY `cardno` (`cardno`)
) ENGINE=InnoDB AUTO_INCREMENT=5324 DEFAULT CHARSET=gb2312;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `feerd`
--

LOCK TABLES `feerd` WRITE;
/*!40000 ALTER TABLE `feerd` DISABLE KEYS */;
/*!40000 ALTER TABLE `feerd` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `garageingarage`
--

DROP TABLE IF EXISTS `garageingarage`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `garageingarage` (
  `ID` int(11) NOT NULL AUTO_INCREMENT,
  `CardID` varchar(45) DEFAULT NULL,
  `PlateID` varchar(45) DEFAULT NULL,
  `DateTime` datetime DEFAULT NULL,
  `InOutFlag` tinyint(1) DEFAULT NULL,
  `ChannelName` varchar(45) DEFAULT NULL,
  `Level` int(8) DEFAULT NULL,
  PRIMARY KEY (`ID`)
) ENGINE=InnoDB DEFAULT CHARSET=gb2312;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `garageingarage`
--

LOCK TABLES `garageingarage` WRITE;
/*!40000 ALTER TABLE `garageingarage` DISABLE KEYS */;
/*!40000 ALTER TABLE `garageingarage` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `license`
--

DROP TABLE IF EXISTS `license`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `license` (
  `AdministrativeID` varchar(50) NOT NULL COMMENT '(区号) + 停车场编号\n\n510107 + 0001\n\n510107 + 9999',
  `KeyContent` blob,
  PRIMARY KEY (`AdministrativeID`)
) ENGINE=InnoDB DEFAULT CHARSET=gb2312;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `license`
--

LOCK TABLES `license` WRITE;
/*!40000 ALTER TABLE `license` DISABLE KEYS */;
INSERT INTO `license` VALUES ('5101070001','UE1TWuY2dBvFzgp4xxrpwF5ja0kLFWiDCSqganFX6WA9UsOD+fIv2RKQzcXpNcxJXK6Zhy6YkRiApYklZZD+M4u/RPI7cTYMgalk65NCbC6ENxV8zD6Bm7eU/ngdOregXPV1CN8oZzcWe0eOgKVa3H2Bj97rmRAC05mJuHZE0/3b90/pYypuYLxlhNa6TYuQPrgB6fYwHMBMpc2xKVZqRI/nb9auXXjDbtkVm7HYm1S9qsixBk9KSOuaDa8YqdXXyYLdViUx81RcrZdD11SII5aMFdnhwkdOgnlen8j4GNUP2+4kRJaOaqZUEeqaItc0KvnkXoyuMte2SURp0/z6P5atBb8r3rUNLr3sJ9oamfdyfO6ogRIFTKKq+tMiUq9lDFU7MmcP8qfr4o+ySFEKn5DgYe9j/yodslx4co89H7FaCMIeuwczjJPtzzEJwesvTalfMmSsY5wHC3I6ESPErXJ42M3PLHpMAXaTXBwnP8eDx/zsys5veUvI+Dt5j9QtMcduaEfv0zYxYv1eKYGKhTArck1o0Oess7TJW4DYbHBTOT1FPODir2J5TFhlxTQemIhxot2QRj0Fu2qdl0vHmSZTGoBaWShtgI7A+hJbz5WuHxOYejQFPhqVYJ5dpIu1rT7R1A=='),('5101810001','UE1TWuY2dBvFzgp4xxrpwF5ja0kLFWiDCSqobNmewWExJhRBAYmkKdOsr2MffMjg7FMYr4K47/D/327+crZCADNZYmx3oDjzQszFqz6w1UT6e6YO5eTWVRRMghZ4Bq1JMr8jE7kXYFUXUnXb8Z9pBZWQHK2SYEEXvmS/FPby0t27z9FkKt6pTulccvyQfGYZq5rAqSCjEL4sSG2Ixqe/1W+xB2nCt1zOEeVwF5RVY6UBiDFuZpTnCws1coApDJOuzrJNkvRGH10tQm0bS4nYqgKeHV5sYR60v3UNkZsVbzdCyWqwTIzIYOCezLHcjITkfCTFchoep03YyQLs/oG2+fxv7sC9DWhFxlUZ+2ZtPKh2iLGLVE9LaQkk9z8DmZxI4S6naonh6a+ep3fAK5xKtU/i7gDylo+QEYQKdDpNjWJGKoLe6Z92NBrb1ue22oLD808mbk5WrSN411HNppZFqAMkpYqIkIxh9hYAn3je0emBdTxhJlK/C8Pg3pAp7kNUlJstHwAGbrrSuPyX7pqj4GJSFCDlKPWapyRL2OuRiec4sjFLf+X4aBgWa6kePpuqUzLHSNEqgU+oGhUDLVMhLbZEVhbFwKvpbHThps3iv43uyoJkZCeZUMky6EXuysdzfpk9J63gQvRvIbcV894nPtjdybuoYJdm4KZOGYY90VUlGH88EwxGQaCobBSIfXhREb5rbMblzIJHXElYIA0dUadQ//4=');
/*!40000 ALTER TABLE `license` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `monthcard`
--

DROP TABLE IF EXISTS `monthcard`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `monthcard` (
  `cardno` varchar(50) NOT NULL DEFAULT '0',
  `starttime` datetime NOT NULL DEFAULT '2006-06-01 12:00:00',
  `endtime` datetime NOT NULL DEFAULT '2006-06-01 12:00:00',
  `cardstate` varchar(30) NOT NULL DEFAULT '启用',
  `cardkind` varchar(30) DEFAULT 'EMID卡',
  `cardselfno` varchar(50) DEFAULT '未知',
  `cardcomment` varchar(100) DEFAULT '未知',
  `cardcreator` varchar(30) DEFAULT '未知',
  `Inside` int(10) DEFAULT '0',
  `EnterMustCard` int(10) DEFAULT '0',
  `LeaveMustCard` int(10) DEFAULT '0',
  PRIMARY KEY (`cardno`),
  KEY `cardno_starttime_endtime` (`cardno`,`starttime`,`endtime`),
  KEY `cardselfno` (`cardselfno`)
) ENGINE=InnoDB DEFAULT CHARSET=gb2312;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `monthcard`
--

LOCK TABLES `monthcard` WRITE;
/*!40000 ALTER TABLE `monthcard` DISABLE KEYS */;
/*!40000 ALTER TABLE `monthcard` ENABLE KEYS */;
UNLOCK TABLES;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
/*!50003 CREATE*/ /*!50017 DEFINER=`root`@`localhost`*/ /*!50003 TRIGGER `parkadmin`.`monthcard_ai`
AFTER INSERT ON `parkadmin`.`monthcard`
FOR EACH ROW
BEGIN
DECLARE a,b INT;
DECLARE ai char(30);
DECLARE cur_1 CURSOR FOR SELECT shebeiid FROM roadconerinfo;
DECLARE cur_2 CURSOR FOR SELECT shebeiname FROM roadconerinfo;
DECLARE CONTINUE HANDLER FOR NOT FOUND SET b = 1;
OPEN cur_1;
OPEN cur_2;
set b = 0;
while b<>1 do
FETCH cur_1 INTO a;
FETCH cur_2 INTO ai;
if b<>1 then
insert into cardright(cardno,roadconind,shebeiname) values(NEW.cardno,a,ai);
end if;
END while;
CLOSE cur_1;
CLOSE cur_2;
insert into userinfo(cardindex) values(NEW.cardno);
insert into carinfo(cardindex) values(NEW.cardno); 
END */;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
/*!50003 CREATE*/ /*!50017 DEFINER=`root`@`localhost`*/ /*!50003 TRIGGER `parkadmin`.`monthcard_au`
AFTER UPDATE ON `parkadmin`.`monthcard`
FOR EACH ROW
BEGIN
if new.cardno<>old.cardno then
update userinfo set userinfo.cardindex=new.cardno where userinfo.cardindex=old.cardno;
update carinfo set carinfo.cardindex=new.cardno where carinfo.cardindex=old.cardno;
update cardright set cardright.cardno=new.cardno where cardright.cardno=old.cardno;
update feerd set feerd.cardno=new.cardno where feerd.cardno=old.cardno;
update stoprd set stoprd.cardno=new.cardno where stoprd.cardno=old.cardno;
end if;
END */;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
/*!50003 CREATE*/ /*!50017 DEFINER=`root`@`localhost`*/ /*!50003 TRIGGER `parkadmin`.`monthcard_ad`
AFTER DELETE ON `parkadmin`.`monthcard`
FOR EACH ROW
BEGIN
delete from userinfo where userinfo.cardindex=OLD.cardno;
delete from carinfo where carinfo.cardindex=OLD.cardno;
delete from cardright where cardright.cardno=OLD.cardno;
delete from stoprd where stoprd.cardno=OLD.cardno and stoprd.outtime is NULL; 
END */;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;

--
-- Table structure for table `operator`
--

DROP TABLE IF EXISTS `operator`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `operator` (
  `operatorid` int(10) unsigned NOT NULL AUTO_INCREMENT,
  `operatorname` varchar(50) NOT NULL DEFAULT '未知',
  `operatorphone` varchar(50) DEFAULT NULL,
  `operatorsex` varchar(50) DEFAULT '男',
  `operatoraddress` varchar(50) DEFAULT NULL,
  `operatorpassword` varchar(50) DEFAULT '123',
  `qxgl` tinyint(1) NOT NULL DEFAULT '0' COMMENT '权限管理',
  `cardgl` tinyint(1) NOT NULL DEFAULT '0' COMMENT '卡票管理',
  `exitgl` tinyint(1) NOT NULL DEFAULT '0' COMMENT '退出系统',
  `datagl` tinyint(1) NOT NULL DEFAULT '0' COMMENT '数据维护',
  `setgl` tinyint(1) NOT NULL DEFAULT '0' COMMENT '高级设置',
  `sfgl` tinyint(1) NOT NULL DEFAULT '0' COMMENT '查询报表',
  `operatorright` varchar(50) NOT NULL DEFAULT '普通用户',
  `sysinfo` tinyint(1) NOT NULL DEFAULT '0' COMMENT '系统日志',
  `feerate` tinyint(1) NOT NULL DEFAULT '0' COMMENT '费率设置',
  `surecardno` varchar(50) DEFAULT NULL,
  `StartVideo` tinyint(1) NOT NULL DEFAULT '0',
  `StartPlate` tinyint(1) NOT NULL DEFAULT '0',
  `ConnectDB` tinyint(1) NOT NULL DEFAULT '0',
  `MonthCard` tinyint(1) NOT NULL DEFAULT '0',
  `ValueCard` tinyint(1) NOT NULL DEFAULT '0',
  `TimeCard` tinyint(1) NOT NULL DEFAULT '0',
  `LedInfo` tinyint(1) NOT NULL DEFAULT '0',
  `DeviceConfig` tinyint(1) NOT NULL DEFAULT '0',
  `SystemSet` tinyint(1) NOT NULL DEFAULT '0',
  `CardRightSet` tinyint(1) NOT NULL DEFAULT '0',
  `DiscountSet` tinyint(1) NOT NULL DEFAULT '0',
  `SerialPortSet` tinyint(1) NOT NULL DEFAULT '0',
  `PlateRecogSet` tinyint(1) NOT NULL DEFAULT '0',
  `PassRecord` tinyint(1) NOT NULL DEFAULT '0',
  `FeeRecord` tinyint(1) NOT NULL DEFAULT '0',
  `DiscountReport` tinyint(1) NOT NULL DEFAULT '0',
  `DailyReport` tinyint(1) NOT NULL DEFAULT '0',
  `MonthlyReport` tinyint(1) NOT NULL DEFAULT '0',
  `YearlyReport` tinyint(1) NOT NULL DEFAULT '0',
  `SyncTime` tinyint(1) NOT NULL DEFAULT '0',
  `Blacklist` tinyint(1) NOT NULL DEFAULT '0',
  `EmployeeID` varchar(45) NOT NULL,
  PRIMARY KEY (`operatorid`),
  KEY `surecardno` (`surecardno`),
  KEY `operatorname` (`operatorname`)
) ENGINE=InnoDB AUTO_INCREMENT=41 DEFAULT CHARSET=gb2312;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `operator`
--

LOCK TABLES `operator` WRITE;
/*!40000 ALTER TABLE `operator` DISABLE KEYS */;
INSERT INTO `operator` VALUES (1,'系统管理员','','男','','951821',-1,0,-1,-1,0,0,'超级用户',-1,-1,NULL,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,'18804'),(2,'停车场管理员','','男','','aaa',-1,0,-1,-1,0,0,'普通用户',-1,-1,NULL,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,''),(3,'维护人员','','男','','951821',-1,0,-1,-1,0,0,'超级用户',-1,-1,NULL,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,'17338');
/*!40000 ALTER TABLE `operator` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `parkadminset`
--

DROP TABLE IF EXISTS `parkadminset`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `parkadminset` (
  `feejsbz` int(11) DEFAULT '1'
) ENGINE=InnoDB DEFAULT CHARSET=gb2312;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `parkadminset`
--

LOCK TABLES `parkadminset` WRITE;
/*!40000 ALTER TABLE `parkadminset` DISABLE KEYS */;
INSERT INTO `parkadminset` VALUES (1);
/*!40000 ALTER TABLE `parkadminset` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `parkdongleinfo`
--

DROP TABLE IF EXISTS `parkdongleinfo`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `parkdongleinfo` (
  `AdministrativeID` varchar(50) NOT NULL,
  `BriefName` varchar(256) NOT NULL,
  `DongleHID` varbinary(2048) DEFAULT NULL,
  PRIMARY KEY (`AdministrativeID`)
) ENGINE=InnoDB DEFAULT CHARSET=gb2312;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `parkdongleinfo`
--

LOCK TABLES `parkdongleinfo` WRITE;
/*!40000 ALTER TABLE `parkdongleinfo` DISABLE KEYS */;
INSERT INTO `parkdongleinfo` VALUES ('5101070001','成都武侯区肿瘤医院','�EF���(S�X��~�i��B\0vT��x@�xG/'),('5101810001','青城山都江堰景区','2�ʄ�]F^�WtG��v�4_\r~dt��p�]e�8p.>\0\n�[8.X�X��2����8:��c�>N�~S)���$���Ӫ�8,�$�c�}f�\Zf4Jq�ֻq�1�& #��');
/*!40000 ALTER TABLE `parkdongleinfo` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `parkinfo`
--

DROP TABLE IF EXISTS `parkinfo`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `parkinfo` (
  `parkindex` int(10) unsigned NOT NULL AUTO_INCREMENT,
  `shebeiid` int(10) unsigned NOT NULL,
  `parknum` int(10) unsigned DEFAULT '88',
  `parkname` varchar(30) NOT NULL DEFAULT '新建停车场',
  `usedSpace` int(10) NOT NULL DEFAULT '0',
  PRIMARY KEY (`parkindex`),
  KEY `shebeiid` (`shebeiid`)
) ENGINE=InnoDB AUTO_INCREMENT=24 DEFAULT CHARSET=gb2312;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `parkinfo`
--

LOCK TABLES `parkinfo` WRITE;
/*!40000 ALTER TABLE `parkinfo` DISABLE KEYS */;
INSERT INTO `parkinfo` VALUES (23,104,500,'青城山1号停车场',60);
/*!40000 ALTER TABLE `parkinfo` ENABLE KEYS */;
UNLOCK TABLES;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
/*!50003 CREATE*/ /*!50017 DEFINER=`root`@`localhost`*/ /*!50003 TRIGGER `parkadmin`.`parkinfo_ai`
AFTER INSERT ON `parkadmin`.`parkinfo`
FOR EACH ROW
BEGIN
 
    update feeratebackup set RParkid=New.parkindex;
    insert into feerate(RParkid,RFeeModel,RTimeIndex,RSmTime,RBmTime,RMoney,RMoneyDw,RIncTime) select * from feeratebackup;
    insert into feerate1(RParkid,RFeeModel) values(New.parkindex,0);
    insert into feerate1(RParkid,RFeeModel) values(New.parkindex,1);
    insert into feerate1(RParkid,RFeeModel) values(New.parkindex,2);
    insert into feerate1(RParkid,RFeeModel) values(New.parkindex,3);
    insert into feerate1(RParkid,RFeeModel) values(New.parkindex,4);
    insert into feerate1(RParkid,RFeeModel) values(New.parkindex,5);
    insert into feerate1(RParkid,RFeeModel) values(New.parkindex,6);
    insert into feerate1(RParkid,RFeeModel) values(New.parkindex,7);
END */;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
/*!50003 CREATE*/ /*!50017 DEFINER=`root`@`localhost`*/ /*!50003 TRIGGER `parkadmin`.`parkinfo_au`
AFTER UPDATE ON `parkadmin`.`parkinfo`
FOR EACH ROW
BEGIN
if new.parkname<>old.parkname then 
update treeview set treeview.shebeiname=new.parkname where treeview.shebeiid=old.shebeiid;
end if;
END */;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
/*!50003 CREATE*/ /*!50017 DEFINER=`root`@`localhost`*/ /*!50003 TRIGGER `parkadmin`.`parkinfo_ad`
AFTER DELETE ON `parkadmin`.`parkinfo`
FOR EACH ROW
BEGIN
    delete from feerate where RParkid=Old.parkindex;
    delete from feerate1 where RParkid=Old.parkindex;
END */;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;

--
-- Table structure for table `pmslog`
--

DROP TABLE IF EXISTS `pmslog`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `pmslog` (
  `MsgID` int(11) NOT NULL AUTO_INCREMENT,
  `MsgKind` varchar(45) DEFAULT NULL,
  `MsgText` varchar(10240) DEFAULT NULL,
  `MsgDateTime` datetime DEFAULT NULL,
  PRIMARY KEY (`MsgID`)
) ENGINE=InnoDB AUTO_INCREMENT=126 DEFAULT CHARSET=gb2312;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `pmslog`
--

LOCK TABLES `pmslog` WRITE;
/*!40000 ALTER TABLE `pmslog` DISABLE KEYS */;
/*!40000 ALTER TABLE `pmslog` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `roadconerinfo`
--

DROP TABLE IF EXISTS `roadconerinfo`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `roadconerinfo` (
  `roadconerind` int(10) unsigned NOT NULL AUTO_INCREMENT,
  `shebeiid` int(10) unsigned NOT NULL DEFAULT '0',
  `shebeiadr` int(10) unsigned NOT NULL DEFAULT '0',
  `video1` int(11) NOT NULL DEFAULT '0',
  `video2` int(11) NOT NULL DEFAULT '0',
  `video3` int(11) NOT NULL DEFAULT '0',
  `video4` int(11) NOT NULL DEFAULT '0',
  `shebeiname` varchar(30) NOT NULL DEFAULT '新建控制器',
  `video1ip` varchar(30) NOT NULL DEFAULT '127.0.0.1',
  `video2ip` varchar(30) NOT NULL DEFAULT '127.0.0.1',
  `video3ip` varchar(30) NOT NULL DEFAULT '127.0.0.1',
  `video4ip` varchar(30) NOT NULL DEFAULT '127.0.0.1',
  `ifdoor` tinyint(1) NOT NULL DEFAULT '0',
  PRIMARY KEY (`roadconerind`),
  KEY `shebeiid` (`shebeiid`),
  KEY `shebeiadr` (`shebeiadr`)
) ENGINE=InnoDB AUTO_INCREMENT=39 DEFAULT CHARSET=gb2312;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `roadconerinfo`
--

LOCK TABLES `roadconerinfo` WRITE;
/*!40000 ALTER TABLE `roadconerinfo` DISABLE KEYS */;
INSERT INTO `roadconerinfo` VALUES (33,109,1,0,0,0,0,'1号入口','10.1.4.208','127.0.0.1','127.0.0.1','127.0.0.1',0),(37,113,2,0,0,0,0,'1号出口','10.1.4.208','127.0.0.1','127.0.0.1','127.0.0.1',0);
/*!40000 ALTER TABLE `roadconerinfo` ENABLE KEYS */;
UNLOCK TABLES;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
/*!50003 CREATE*/ /*!50017 DEFINER=`root`@`localhost`*/ /*!50003 TRIGGER `parkadmin`.`roadconerinfo_au`
AFTER UPDATE ON `parkadmin`.`roadconerinfo`
FOR EACH ROW
BEGIN
if new.shebeiname<>old.shebeiname then 
update cardright set  cardright.shebeiname=new.shebeiname where cardright.roadconind=old.shebeiid;
update treeview set treeview.shebeiname=new.shebeiname where treeview.shebeiid=old.shebeiid;
end if;
END */;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;

--
-- Table structure for table `savecard`
--

DROP TABLE IF EXISTS `savecard`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `savecard` (
  `cardno` varchar(50) NOT NULL DEFAULT '0',
  `cardstate` varchar(30) NOT NULL DEFAULT '启用',
  `cardkind` varchar(30) DEFAULT 'EMID卡',
  `cardselfno` varchar(50) DEFAULT NULL,
  `cardcomment` varchar(100) DEFAULT NULL,
  `cardcreator` varchar(30) DEFAULT NULL,
  `cardfeebz` varchar(30) NOT NULL DEFAULT '现场选择',
  `cardfee` int(10) unsigned DEFAULT '0',
  `Inside` int(11) NOT NULL DEFAULT '0',
  `EnterMustCard` int(11) DEFAULT '0',
  `LeaveMustCard` int(11) DEFAULT '0',
  PRIMARY KEY (`cardno`),
  KEY `cardselfno` (`cardselfno`)
) ENGINE=InnoDB DEFAULT CHARSET=gb2312;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `savecard`
--

LOCK TABLES `savecard` WRITE;
/*!40000 ALTER TABLE `savecard` DISABLE KEYS */;
/*!40000 ALTER TABLE `savecard` ENABLE KEYS */;
UNLOCK TABLES;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
/*!50003 CREATE*/ /*!50017 DEFINER=`root`@`localhost`*/ /*!50003 TRIGGER `parkadmin`.`savecard_ai`
AFTER INSERT ON `parkadmin`.`savecard`
FOR EACH ROW
BEGIN
DECLARE a,b INT;
DECLARE ai char(30);
DECLARE cur_1 CURSOR FOR SELECT shebeiid FROM roadconerinfo;
DECLARE cur_2 CURSOR FOR SELECT shebeiname FROM roadconerinfo;
DECLARE CONTINUE HANDLER FOR NOT FOUND SET b = 1;
OPEN cur_1;
OPEN cur_2;
set b = 0;
while b<>1 do
FETCH cur_1 INTO a;
FETCH cur_2 INTO ai;
if b<>1 then
insert into cardright(cardno,roadconind,shebeiname) values(NEW.cardno,a,ai);
end if;
END while;
CLOSE cur_1;
CLOSE cur_2;
insert into userinfo(cardindex) values(NEW.cardno);
insert into carinfo(cardindex) values(NEW.cardno); 
END */;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
/*!50003 CREATE*/ /*!50017 DEFINER=`root`@`localhost`*/ /*!50003 TRIGGER `parkadmin`.`savecard_au`
AFTER UPDATE ON `parkadmin`.`savecard`
FOR EACH ROW
BEGIN
if new.cardno<>old.cardno then
update userinfo set userinfo.cardindex=new.cardno where userinfo.cardindex=old.cardno;
update carinfo set carinfo.cardindex=new.cardno where carinfo.cardindex=old.cardno;
update cardright set cardright.cardno=new.cardno where cardright.cardno=old.cardno;
update feerd set feerd.cardno=new.cardno where feerd.cardno=old.cardno;
update stoprd set stoprd.cardno=new.cardno where stoprd.cardno=old.cardno;
end if;
END */;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
/*!50003 CREATE*/ /*!50017 DEFINER=`root`@`localhost`*/ /*!50003 TRIGGER `parkadmin`.`savecard_ad`
AFTER DELETE ON `parkadmin`.`savecard`
FOR EACH ROW
BEGIN
delete from userinfo where userinfo.cardindex=OLD.cardno;
delete from carinfo where carinfo.cardindex=OLD.cardno;
delete from cardright where cardright.cardno=OLD.cardno;
delete from stoprd where stoprd.cardno=OLD.cardno and stoprd.outtime is NULL;  
END */;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;

--
-- Table structure for table `stoprd`
--

DROP TABLE IF EXISTS `stoprd`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `stoprd` (
  `stoprdid` bigint(20) unsigned NOT NULL AUTO_INCREMENT,
  `cardno` varchar(50) NOT NULL DEFAULT '0',
  `inshebeiname` varchar(30) DEFAULT NULL,
  `outshebeiname` varchar(30) DEFAULT NULL,
  `invideo1` longblob,
  `invideo2` longblob,
  `invideo3` longblob,
  `invideo4` longblob,
  `outvideo1` longblob,
  `outvideo2` longblob,
  `outvideo3` longblob,
  `outvideo4` longblob,
  `intime` datetime DEFAULT NULL,
  `outtime` datetime DEFAULT NULL,
  `childrdindx` int(10) unsigned DEFAULT NULL,
  `feebeizhu` varchar(30) DEFAULT NULL,
  `feenum` int(10) unsigned DEFAULT NULL,
  `feetime` datetime DEFAULT NULL,
  `feeoperator` varchar(30) DEFAULT NULL,
  `feefactnum` int(10) unsigned DEFAULT NULL,
  `carcp` varchar(30) NOT NULL DEFAULT '未知',
  `username` varchar(30) NOT NULL DEFAULT '未知',
  `cardselfno` varchar(50) DEFAULT NULL,
  `carkind` varchar(30) NOT NULL DEFAULT '未知',
  `feekind` varchar(30) DEFAULT NULL,
  `cardkind` varchar(30) DEFAULT NULL,
  `parkid` int(11) NOT NULL DEFAULT '-1',
  `feezkh` int(10) unsigned DEFAULT NULL,
  `feezkyy` varchar(30) NOT NULL DEFAULT '无优惠',
  `carcpout` varchar(30) DEFAULT '未知',
  `MayDelete` tinyint(1) NOT NULL DEFAULT '0',
  `Transfered` tinyint(1) DEFAULT '0',
  PRIMARY KEY (`stoprdid`),
  KEY `cardno_outtime_parkid` (`cardno`,`outtime`,`parkid`),
  KEY `outtime_parkid` (`outtime`,`parkid`),
  KEY `intime_cardno` (`intime`,`cardno`),
  KEY `inshebeiname` (`inshebeiname`),
  KEY `outshebeiname` (`outshebeiname`),
  KEY `cardno` (`cardno`),
  KEY `intime` (`intime`),
  KEY `outtime` (`outtime`),
  KEY `feetime` (`feetime`),
  KEY `feeoperator` (`feeoperator`),
  KEY `carcp` (`carcp`),
  KEY `username` (`username`),
  KEY `cardselfno` (`cardselfno`),
  KEY `cardkind` (`cardkind`),
  KEY `parkid` (`parkid`),
  KEY `feekind` (`feekind`),
  KEY `childrdindx` (`childrdindx`),
  KEY `cardkind_outtime_parkid` (`cardkind`,`outtime`,`parkid`)
) ENGINE=InnoDB AUTO_INCREMENT=5475 DEFAULT CHARSET=gb2312;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `stoprd`
--

LOCK TABLES `stoprd` WRITE;
/*!40000 ALTER TABLE `stoprd` DISABLE KEYS */;
/*!40000 ALTER TABLE `stoprd` ENABLE KEYS */;
UNLOCK TABLES;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
/*!50003 CREATE*/ /*!50017 DEFINER=`root`@`localhost`*/ /*!50003 TRIGGER `parkadmin`.`InsertStoprd`
AFTER INSERT ON `parkadmin`.`stoprd`
FOR EACH ROW
BEGIN
 if ( ( '计时卡' = new.cardkind ) && Exists( Select Table_name from information_schema.tables as a where a.table_name = 'tmpcardintime' and table_schema = 'parkadmin' ) )  then
    insert tmpcardintime( cardno, intime ) values( new.cardno, new.intime );
 end if;
END */;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
/*!50003 CREATE*/ /*!50017 DEFINER=`root`@`localhost`*/ /*!50003 TRIGGER `parkadmin`.`BeforeUpdateStoprd`
BEFORE UPDATE ON `parkadmin`.`stoprd`
FOR EACH ROW
BEGIN
 if ( true and new.Transfered = 0 ) then -- 青城山 true else false
    set new.MayDelete = old.Maydelete + 1;
 end if;
END */;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
/*!50003 CREATE*/ /*!50017 DEFINER=`root`@`localhost`*/ /*!50003 TRIGGER `parkadmin`.`UpdateStoprd`
AFTER UPDATE ON `parkadmin`.`stoprd`
FOR EACH ROW
BEGIN
 if ( ( '计时卡' = new.cardkind ) && Exists( Select Table_name from information_schema.tables as a where a.table_name = 'tmpcardintime' and table_schema = 'parkadmin' ) ) then
  if ( old.invideo1 is null && new.invideo1 is not null ) then
    update tmpcardintime set invideo1 = new.invideo1 where cardno = old.cardno and intime = old.intime;
    elseif ( new.MayDelete ) then
    delete from tmpcardintime where cardno = old.cardno and intime <= old.intime;
  end if;
 end if;
END */;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;

--
-- Table structure for table `sysinfo`
--

DROP TABLE IF EXISTS `sysinfo`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `sysinfo` (
  `infoindex` int(10) unsigned NOT NULL AUTO_INCREMENT,
  `infooperator` varchar(30) NOT NULL DEFAULT '未知',
  `infokind` varchar(50) NOT NULL DEFAULT '未知',
  `infotext` varchar(150) NOT NULL DEFAULT '未知',
  `infotime` datetime NOT NULL,
  `infopic1` longblob,
  `infopic2` longblob,
  `infopic3` longblob,
  `infopic4` longblob,
  PRIMARY KEY (`infoindex`),
  KEY `infotime` (`infotime`),
  KEY `infooperator` (`infooperator`)
) ENGINE=InnoDB AUTO_INCREMENT=1878 DEFAULT CHARSET=gb2312;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `sysinfo`
--

LOCK TABLES `sysinfo` WRITE;
/*!40000 ALTER TABLE `sysinfo` DISABLE KEYS */;
/*!40000 ALTER TABLE `sysinfo` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `tmpcard`
--

DROP TABLE IF EXISTS `tmpcard`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `tmpcard` (
  `cardno` varchar(50) NOT NULL DEFAULT '0',
  `cardkind` varchar(50) DEFAULT 'EMID卡',
  `cardfeebz` varchar(30) NOT NULL DEFAULT '现场选择',
  `cardselfno` varchar(50) DEFAULT NULL,
  `cardstate` varchar(30) NOT NULL DEFAULT '启用',
  `Inside` int(10) DEFAULT '0',
  `EnterMustCard` int(10) DEFAULT '0',
  `LeaveMustCard` int(10) DEFAULT '0',
  PRIMARY KEY (`cardno`),
  KEY `cardselfno` (`cardselfno`)
) ENGINE=InnoDB DEFAULT CHARSET=gb2312;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `tmpcard`
--

LOCK TABLES `tmpcard` WRITE;
/*!40000 ALTER TABLE `tmpcard` DISABLE KEYS */;
/*!40000 ALTER TABLE `tmpcard` ENABLE KEYS */;
UNLOCK TABLES;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
/*!50003 CREATE*/ /*!50017 DEFINER=`root`@`localhost`*/ /*!50003 TRIGGER `parkadmin`.`tmpcard_ai`
AFTER INSERT ON `parkadmin`.`tmpcard`
FOR EACH ROW
BEGIN
DECLARE a,b INT;
DECLARE ai char(30);
DECLARE cur_1 CURSOR FOR SELECT shebeiid FROM roadconerinfo;
DECLARE cur_2 CURSOR FOR SELECT shebeiname FROM roadconerinfo;
DECLARE CONTINUE HANDLER FOR NOT FOUND SET b = 1;
OPEN cur_1;
OPEN cur_2;
set b = 0;
while b<>1 do
FETCH cur_1 INTO a;
FETCH cur_2 INTO ai;
if b<>1 then
insert into cardright(cardno,roadconind,shebeiname) values(NEW.cardno,a,ai);
end if;
END while;
CLOSE cur_1;
CLOSE cur_2;
END */;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
/*!50003 CREATE*/ /*!50017 DEFINER=`root`@`localhost`*/ /*!50003 TRIGGER `parkadmin`.`tmpcard_au`
AFTER UPDATE ON `parkadmin`.`tmpcard`
FOR EACH ROW
BEGIN
if new.cardno<>old.cardno then
update cardright set cardright.cardno=new.cardno where cardright.cardno=old.cardno;
update stoprd set stoprd.cardno=new.cardno where stoprd.cardno=old.cardno;
end if;
END */;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
/*!50003 CREATE*/ /*!50017 DEFINER=`root`@`localhost`*/ /*!50003 TRIGGER `parkadmin`.`tmpcard_ad`
AFTER DELETE ON `parkadmin`.`tmpcard`
FOR EACH ROW
BEGIN
delete from cardright where cardright.cardno=OLD.cardno;
delete from stoprd where stoprd.cardno=OLD.cardno and stoprd.outtime is NULL;  
END */;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;

--
-- Table structure for table `treeview`
--

DROP TABLE IF EXISTS `treeview`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `treeview` (
  `shebeiid` int(10) unsigned NOT NULL AUTO_INCREMENT,
  `level` int(10) unsigned NOT NULL DEFAULT '0',
  `parentid` int(11) unsigned NOT NULL DEFAULT '0',
  `shebeikind` varchar(30) NOT NULL DEFAULT 'kzq',
  `shebeiname` varchar(30) NOT NULL DEFAULT '未知',
  PRIMARY KEY (`shebeiid`),
  KEY `parentid` (`parentid`)
) ENGINE=InnoDB AUTO_INCREMENT=115 DEFAULT CHARSET=gb2312;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `treeview`
--

LOCK TABLES `treeview` WRITE;
/*!40000 ALTER TABLE `treeview` DISABLE KEYS */;
INSERT INTO `treeview` VALUES (104,0,1,'tcc','青城山1号停车场'),(109,0,104,'kzq','1号入口'),(113,0,104,'kzq','1号出口');
/*!40000 ALTER TABLE `treeview` ENABLE KEYS */;
UNLOCK TABLES;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
/*!50003 CREATE*/ /*!50017 DEFINER=`root`@`localhost`*/ /*!50003 TRIGGER `parkadmin`.`treeview_ai`
AFTER INSERT ON `parkadmin`.`treeview`
FOR EACH ROW
BEGIN
DECLARE a,b INT;
DECLARE ai char(50);
DECLARE cur_1 CURSOR FOR SELECT cardno FROM monthcard;
DECLARE cur_2 CURSOR FOR SELECT cardno FROM savecard;
DECLARE cur_3 CURSOR FOR SELECT cardno FROM tmpcard;
DECLARE CONTINUE HANDLER FOR NOT FOUND SET b = 1;
OPEN cur_1;
OPEN cur_2;
OPEN cur_3;
set b = 0;
if NEW.shebeikind = 'kzq'   then
FETCH cur_1 INTO ai;
while b<>1 do
insert into cardright(cardno,roadconind,shebeiname) values(ai,new.shebeiid,shebeiname);
FETCH cur_1 INTO ai;
END while; 
set b = 0;
FETCH cur_2 INTO ai;
while b<>1 do
insert into cardright(cardno,roadconind,shebeiname) values(ai,new.shebeiid,shebeiname);
FETCH cur_2 INTO ai;
END while; 
set b = 0;
FETCH cur_3 INTO ai;
while b<>1 do
insert into cardright(cardno,roadconind,shebeiname) values(ai,new.shebeiid,shebeiname);
FETCH cur_3 INTO ai;
END while;
insert into roadconerinfo(shebeiid) values(NEW.shebeiid);
end if;
if NEW.shebeikind= 'tcc'  then
insert into parkinfo(shebeiid) values(NEW.shebeiid);
end if;
END */;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
/*!50003 CREATE*/ /*!50017 DEFINER=`root`@`localhost`*/ /*!50003 TRIGGER `parkadmin`.`treeview_ad`
AFTER DELETE ON `parkadmin`.`treeview`
FOR EACH ROW
BEGIN
delete from roadconerinfo where roadconerinfo.shebeiid=old.shebeiid;
delete from parkinfo where parkinfo.shebeiid=old.shebeiid;
delete from cardright where cardright.roadconind=old.shebeiid;
END */;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;

--
-- Table structure for table `userinfo`
--

DROP TABLE IF EXISTS `userinfo`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `userinfo` (
  `userid` int(10) unsigned NOT NULL AUTO_INCREMENT,
  `username` varchar(30) DEFAULT '未知',
  `usersex` varchar(30) DEFAULT '未知',
  `useradress` varchar(50) DEFAULT '未知',
  `usercorp` varchar(50) DEFAULT '未知',
  `userphone` varchar(50) DEFAULT '未知',
  `userhaoma` varchar(50) DEFAULT '未知',
  `userpic` longblob,
  `cardindex` varchar(50) NOT NULL DEFAULT '0',
  `Comments` varchar(250) DEFAULT '',
  PRIMARY KEY (`userid`),
  KEY `cardindex` (`cardindex`)
) ENGINE=InnoDB AUTO_INCREMENT=217 DEFAULT CHARSET=gb2312;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `userinfo`
--

LOCK TABLES `userinfo` WRITE;
/*!40000 ALTER TABLE `userinfo` DISABLE KEYS */;
/*!40000 ALTER TABLE `userinfo` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `zkset`
--

DROP TABLE IF EXISTS `zkset`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `zkset` (
  `zkindex` int(10) unsigned NOT NULL AUTO_INCREMENT,
  `zkname` varchar(45) NOT NULL DEFAULT '未知',
  `zkflag` varchar(45) NOT NULL DEFAULT '未知',
  `zkdetail` varchar(90) DEFAULT NULL,
  `zknumb` int(10) unsigned NOT NULL DEFAULT '0',
  PRIMARY KEY (`zkindex`)
) ENGINE=InnoDB DEFAULT CHARSET=gb2312;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `zkset`
--

LOCK TABLES `zkset` WRITE;
/*!40000 ALTER TABLE `zkset` DISABLE KEYS */;
/*!40000 ALTER TABLE `zkset` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Dumping routines for database 'parkadmin'
--
/*!50003 DROP PROCEDURE IF EXISTS `Calculate` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
/*!50003 CREATE*/ /*!50020 DEFINER=`test`@`%`*/ /*!50003 PROCEDURE `Calculate`( out nMonth int, out nSave int, out nTmp int )
BEGIN
select count( * ) into nMonth from monthcard where Inside = 1;
select count( * ) into nSave from Savecard where Inside = 1;
select count( * ) into nTmp from tmpcard where Inside = 1;
END */;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `GenerateReport` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
/*!50003 CREATE*/ /*!50020 DEFINER=`test`@`%`*/ /*!50003 PROCEDURE `GenerateReport`( in dtStart DATETIME, in dtEnd DATETIME, in nReportType int )
BEGIN
#数字转字符串 :
#newstr=concat(n,'');
#字符串转数字:
#newn= str+0;
#select year( intime ), month( intime ), day( intime ), count( cardno ) from parkadmin.stoprd group by year( intime ), month( intime ), day( intime );
#select year( feetime ), month( feetime ), day( feetime ), sum( feenumb ) from parkadmin.feerd group by year( feetime ), month( feetime ), day( feetime );
    #nReportType 
    declare sYear int;
    declare eYear int;
    declare nYear int;
    declare sMonth int;
    declare eMonth int;
    declare nMonth int;
    declare sDay int;
    declare eDay int;
    
    declare strSYear varchar( 4 );
    declare strEYear varchar( 4 );
    declare strNYear varchar( 4 );
    declare strSMonth varchar( 2 );
    declare strEMonth varchar( 2 );
    declare strNMonth varchar( 2 );
    declare strSDay varchar( 2 );
    declare strEDay varchar( 2 );
    
    declare yBegin varchar( 40 );
    declare yEnd varchar( 40 );
    declare mBegin varchar( 40 );
    declare mEnd varchar( 40 );
    
    declare strSql varchar( 5120 ) default '';
    declare strFormat varchar( 30 ) default '%Y-%m-%d %T';
    declare strPerson varchar( 15 ) default '';
    
    declare strMonthCard varchar( 6 ) default '月租卡';
    declare strTimeCard varchar( 6 ) default '计时卡';
    declare strValueCard varchar( 6 ) default '储值卡';
    
    set sYear = YEAR( dtStart );
    set eYear = YEAR( dtEnd );
    set nYear = eYear + 1;
    set sMonth = MONTH( dtStart );
    set eMonth = MONTH( dtEnd );
    set nMonth = eMonth + 1;
    set sDay = DAY( dtStart );
    set eDay = DAY( dtEnd );
    
    set strSYear = concat( sYear, '' );
    set strEYear = concat( eYear, '' );
    set strNYear = concat( nYear, '' );
    set strSMonth = concat( sMonth, '' );
    set strEMonth = concat( eMonth, '' );
    set strNMonth = concat( nMonth, '' );
    set strSDay = concat( sDay, '' );
    set strEDay = concat( eDay, '' );
    
    set yBegin = concat( strSYear, '-01-01 00:00:00' );
    set yEnd = concat( strNYear, '-01-01 00:00:00' );
    set mBegin = concat( strSYear, '-', strSMonth, '-01 00:00:00' );
    set mEnd = concat( strEYear, '-', strNMonth, '-01 00:00:00' );
    
    case nReportType
        when 1 then #Year
            set strSql = concat( "select c.f1, c.f2, c.f4, d.f4, e.f4,f.f4,g.f4,h.f4 from ( select year( intime ) f1, month( intime ) f2, count( cardno ) f4 from stoprd a where  ( '",
                                 yBegin,
                                 "' <= a.intime and a.intime < '",
                                 yEnd,
                                 "' ) and a.cardkind = '",
                                 strMonthCard,
                                 "' group by year( a.intime ), month( a.intime ) ) c left join ( select year( feetime ) f1, month( feetime ) f2, sum( feenumb ) f4 from feerd where feekind like '",
                                 strMonthCard,
                                 "%' group by year( feetime ), month( feetime ) ) d on c.f1 = d.f1 and c.f2 = d.f2 left join ( select year( intime ) f1, month( intime ) f2, count( cardno ) f4 from stoprd a where  ( '",
                                 yBegin,
                                 "' <= a.intime and a.intime < '",
                                 yEnd,
                                 "' ) and a.cardkind = '",
                                 strTimeCard,
                                 "' group by year( a.intime ), month( a.intime ) ) e on c.f1 = e.f1 and c.f2 = e.f2 left join ( select year( feetime ) f1, month( feetime ) f2, sum( feenumb ) f4 from feerd where feekind like '",
                                 strTimeCard,
                                 "%' group by year( feetime ), month( feetime ) ) f on c.f1 = f.f1 and c.f2 = f.f2 left join ( select year( intime ) f1, month( intime ) f2, count( cardno ) f4 from stoprd a where  ( '",
                                 yBegin,
                                 "' <= a.intime and a.intime < '",
                                 yEnd,
                                 "' ) and a.cardkind = '",
                                 strValueCard,
                                 "' group by year( a.intime ), month( a.intime ) ) g on c.f1 = g.f1 and c.f2 = g.f2 left join ( select year( feetime ) f1, month( feetime ) f2, sum( feenumb ) f4 from feerd where feekind like '",
                                 strValueCard,
                                 "%' group by year( feetime ), month( feetime ) ) h on c.f1 = h.f1 and c.f2 = h.f2" );
        when 2 then #Month
            set strSql =  concat( "select c.f1, c.f2, c.f3, c.f4, d.f4, e.f4,f.f4,g.f4,h.f4 from ( select year( intime ) f1, month( intime ) f2, day( intime ) f3, count( cardno ) f4 from stoprd a where  ( '",
                                  mBegin,
                                  "' <= a.intime and a.intime < '",
                                  mEnd,
                                  "' ) and a.cardkind = '",
                                  strMonthCard,
                                  "'group by year( a.intime ), month( a.intime ), day( intime ) ) c left join ( select year( feetime ) f1, month( feetime ) f2, day( feetime ) f3, sum( feenumb ) f4 from feerd where feekind like '",
                                  strMonthCard,
                                  "%' group by year( feetime ), month( feetime ), day( feetime ) ) d on c.f1 = d.f1 and c.f2 = d.f2 and c.f3 = d.f3 left join ( select year( intime ) f1, month( intime ) f2, day( intime ) f3, count( cardno ) f4 from stoprd a where  ( '",
                                  mBegin,
                                  "' <= a.intime and a.intime < '",
                                  mEnd,
                                  "' ) and a.cardkind = '",
                                  strTimeCard,
                                  "' group by year( a.intime ), month( a.intime ) ) e on c.f1 = e.f1 and c.f2 = e.f2  and c.f3 = e.f3 left join ( select year( feetime ) f1, month( feetime ) f2, day( feetime ) f3, sum( feenumb ) f4 from feerd where feekind like '",
                                  strTimeCard,
                                  "%' group by year( feetime ), month( feetime ) ) f on c.f1 = f.f1 and c.f2 = f.f2  and c.f3 = f.f3 left join ( select year( intime ) f1, month( intime ) f2, day( intime ) f3, count( cardno ) f4 from stoprd a where  ( '",
                                  mBegin,
                                  "' <= a.intime and a.intime < '",
                                  mEnd,
                                  "' ) and a.cardkind = '",
                                  strValueCard,
                                  "' group by year( a.intime ), month( a.intime ) ) g on c.f1 = g.f1 and c.f2 = g.f2  and c.f3 = g.f3 left join ( select year( feetime ) f1, month( feetime ) f2, day( feetime ) f3, sum( feenumb ) f4 from feerd where feekind like '",
                                  strValueCard,
                                  "%' group by year( feetime ), month( feetime ) ) h on c.f1 = h.f1 and c.f2 = h.f2 and c.f3 = h.f3" );
        when 3 then #Day
            set strSql =  concat( "select c.f1, c.f2, c.f3, c.f4, d.f4, e.f4,f.f4,g.f4,h.f4 from ( select year( intime ) f1, month( intime ) f2, day( intime ) f3, count( cardno ) f4 from stoprd a where  ( '",
                                  DATE_FORMAT( dtStart, strFormat ),
                                  "' <= a.intime and a.intime < '",
                                  DATE_FORMAT( dtEnd, strFormat ),
                                  "' ) and a.cardkind = '",
                                  strMonthCard,
                                  "'group by year( a.intime ), month( a.intime ), day( intime ) ) c left join ( select year( feetime ) f1, month( feetime ) f2, day( feetime ) f3, sum( feenumb ) f4 from feerd where feekind like '",
                                  strMonthCard,
                                  "%' group by year( feetime ), month( feetime ), day( feetime ) ) d on c.f1 = d.f1 and c.f2 = d.f2 and c.f3 = d.f3 left join ( select year( intime ) f1, month( intime ) f2, day( intime ) f3, count( cardno ) f4 from stoprd a where  ( '",
                                  DATE_FORMAT( dtStart, strFormat ),
                                  "' <= a.intime and a.intime < '",
                                  DATE_FORMAT( dtEnd, strFormat ),
                                  "' ) and a.cardkind = '",
                                  strTimeCard,
                                  "' group by year( a.intime ), month( a.intime ) ) e on c.f1 = e.f1 and c.f2 = e.f2  and c.f3 = e.f3 left join ( select year( feetime ) f1, month( feetime ) f2, day( feetime ) f3, sum( feenumb ) f4 from feerd where feekind like '",
                                  strTimeCard,
                                  "%' group by year( feetime ), month( feetime ) ) f on c.f1 = f.f1 and c.f2 = f.f2  and c.f3 = f.f3 left join ( select year( intime ) f1, month( intime ) f2, day( intime ) f3, count( cardno ) f4 from stoprd a where  ( '",
                                  DATE_FORMAT( dtStart, strFormat ),
                                  "' <= a.intime and a.intime < '",
                                  DATE_FORMAT( dtEnd, strFormat ),
                                  "' ) and a.cardkind = '",
                                  strValueCard,
                                  "' group by year( a.intime ), month( a.intime ) ) g on c.f1 = g.f1 and c.f2 = g.f2  and c.f3 = g.f3 left join ( select year( feetime ) f1, month( feetime ) f2, day( feetime ) f3, sum( feenumb ) f4 from feerd where feekind like '",
                                  strValueCard,
                                  "%' group by year( feetime ), month( feetime ) ) h on c.f1 = h.f1 and c.f2 = h.f2 and c.f3 = h.f3" );
        when 4 then #Person
            set strSql = concat( "select feeoperator f1, sum( feenumb ) f2 from feerd where feetime between '",
                                 DATE_FORMAT( dtStart, strFormat ),
                                 "' and '",
                                 DATE_FORMAT( dtEnd, strFormat ),
                                 "'" );
    end case;

    SET @sql = strSql;
    PREPARE dyncSql FROM @sql;
    EXECUTE dyncSql;
    DEALLOCATE PREPARE dyncSql;
END */;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `InconformityInfo` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
/*!50003 CREATE*/ /*!50020 DEFINER=`test`@`%`*/ /*!50003 PROCEDURE `InconformityInfo`( strPlate varchar(16 ), strCardID varchar( 32 ) )
BEGIN
declare strType1 varchar( 32 );
declare strType2 varchar( 32 );

-- DECLARE HANDLER syntax 声明异常处理的语法
-- DECLARE
-- { EXIT | CONTINUE }
-- HANDLER FOR
-- { error-number | { SQLSTATE error-string } | condition }
-- SQL statement

-- DECLARE cursor-name CURSOR FOR SELECT ...;
-- OPEN cursor-name;
-- FETCH cursor-name INTO variable [, variable];

begin

    if exists ( select cardno from monthcard where cardno in ( select cardindex from carinfo where carcp = strplate ) ) then
        set strType1 = '月租卡';
    elseif exists ( select cardno from savecard where cardno in ( select cardindex from carinfo where carcp = strplate ) ) then
        set strType1 = '储值卡';
    elseif exists ( select cardno from tmpcard where cardno in ( select cardindex from carinfo where carcp = strplate ) ) then
        set strType1 = '计时卡';
    end if;
end;

begin
declare a int default 2; -- Temporary variable Scope
set @x = 'sjkdfsd'; -- Session Variable
    if exists ( select cardno from monthcard where cardno in ( strCardID ) ) then
        set strType2= '月租卡';
    elseif exists ( select cardno from savecard where cardno in ( strCardID ) ) then
        set strType2 = '储值卡';
    elseif exists ( select cardno from tmpcard where cardno in ( strCardID ) ) then
        set strType2 = '计时卡';
    end if;
end;

begin
    select a.cardindex, a.carcp, b.username, b.userphone, c.strType1, d.a, d.b, d.c, d.d, d.e from carinfo a 
    join userinfo b on a.carcp = strPlate and a.cardindex = b.cardindex 
    join (select strType1 from dual) c
    join
    ( select a.cardindex a, a.carcp b, b.username c, b.userphone d, c.strType2 e from carinfo a 
    join userinfo b on a.cardindex = strCardID and a.cardindex = b.cardindex 
    join (select strType2 from dual) c ) d;
end;
end */;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `MakeLicense` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = gbk */ ;
/*!50003 SET character_set_results = gbk */ ;
/*!50003 SET collation_connection  = gbk_chinese_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
/*!50003 CREATE*/ /*!50020 DEFINER=`test`@`%`*/ /*!50003 PROCEDURE `MakeLicense`( in ID varchar( 50 ) )
BEGIN 
               if not exists ( select AdministrativeID from License where AdministrativeID = ID ) then 
                   Insert Into License ( AdministrativeID, KeyContent ) values ( ID, NULL );
               end if;
             END */;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `OperateCarInfo` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
/*!50003 CREATE*/ /*!50020 DEFINER=`root`@`127.0.0.1`*/ /*!50003 PROCEDURE `OperateCarInfo`( in CarID VARCHAR(50), in CarModel VARCHAR(50), 
                                                in CardID VARCHAR(50), in DriveID VARCHAR(50) )
BEGIN
    declare n INT(10) default 1;
    declare strSql VARCHAR( 1024 ) default '';

    set strSql = concat( 'select carid into n from carinfo where carcp =\'', CarID, '\' and cardindex =\'', CardID, '\'' );
    SET @sql = strSql;
    PREPARE dyncSql FROM @sql;
    EXECUTE dyncSql;
    -- select n;
    DEALLOCATE PREPARE dyncSql;
END */;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `StartTimer` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
/*!50003 CREATE*/ /*!50020 DEFINER=`root`@`localhost`*/ /*!50003 PROCEDURE `StartTimer`( in bStart bool )
BEGIN
    If bStart = 0 then 
        BEGIN 
            Drop table if exists tmpcardintime;
            Drop event if exists DeleteDataTimer;
            SET GLOBAL EVENT_SCHEDULER = FALSE;
        END;
     else 
        BEGIN
           CREATE TABLE if not exists tmpcardintime ( 
            idtmpcardintime int(11) NOT NULL AUTO_INCREMENT,
            cardno varchar(45) NOT NULL,
            intime datetime NOT NULL,
            invideo1 longblob,
            PRIMARY KEY ( idtmpcardintime) 
          ) ENGINE=InnoDB AUTO_INCREMENT=1 DEFAULT CHARSET=gb2312;
        
        SET GLOBAL EVENT_SCHEDULER = TRUE; 
      END;
    END IF;             
END */;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `SurplusSpace` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
/*!50003 CREATE*/ /*!50020 DEFINER=`test`@`%`*/ /*!50003 PROCEDURE `SurplusSpace`( in bSub bool, in nID int)
BEGIN
    declare nUnit int;
    if bSub then 
        set nUnit = -1;
        if exists ( select usedSpace from parkinfo where usedSpace > 0 and parkindex = nID ) then
            update parkinfo set usedSpace = usedSpace + nUnit where parkindex = nID;
        end if;
    else
        set nUnit = 1;
        if exists ( select usedSpace from parkinfo where parknum > usedSpace and parkindex = nID) 

then
            update parkinfo set usedSpace = usedSpace + nUnit where parkindex = nID;
        end if;
    end if;
END */;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `Test` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
/*!50003 CREATE*/ /*!50020 DEFINER=`test`@`%`*/ /*!50003 PROCEDURE `Test`()
BEGIN
 select * from tmpcard;
END */;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2012-06-01 15:45:43
