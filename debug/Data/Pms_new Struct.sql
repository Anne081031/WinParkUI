CREATE DATABASE  IF NOT EXISTS `parkadmin` /*!40100 DEFAULT CHARACTER SET gb2312 */;
USE `parkadmin`;
-- MySQL dump 10.13  Distrib 5.5.16, for Win32 (x86)
--
-- Host: localhost    Database: parkadmin
-- ------------------------------------------------------
-- Server version	5.5.21-log

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
INSERT INTO `parkdongleinfo` VALUES ('5101070001','成都武侯区肿瘤医院','�EF���(S�X��~�i��B\0vT��x@�xG/');
/*!40000 ALTER TABLE `parkdongleinfo` ENABLE KEYS */;
UNLOCK TABLES;

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
) ENGINE=InnoDB AUTO_INCREMENT=9 DEFAULT CHARSET=gb2312;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `pmslog`
--

LOCK TABLES `pmslog` WRITE;
/*!40000 ALTER TABLE `pmslog` DISABLE KEYS */;
INSERT INTO `pmslog` VALUES (1,'查看进出记录','select a.cardno, a.cardselfno, a.endtime, b.username, a.cardcomment,  c.carcp, c.carmodel,                           d.inshebeiname, d.intime, d.outshebeiname, d.outtime, d.cardkind                           from monthcard a                           inner join userinfo b on a.cardno = 1118066 and a.cardno = b.cardindex                           inner join carinfo c on a.cardno = c.cardindex                           inner join stoprd d on a.cardno = d.cardno and inshebeiname = C入 and intime = 2012-03-12 14:01:15','2012-03-12 14:01:18'),(2,'查看进出记录','select a.cardno, a.cardselfno, a.endtime, b.username, a.cardcomment,  c.carcp, c.carmodel,                           d.inshebeiname, d.intime, d.outshebeiname, d.outtime, d.cardkind                           from monthcard a                           inner join userinfo b on a.cardno = 1118066 and a.cardno = b.cardindex                           inner join carinfo c on a.cardno = c.cardindex                           inner join stoprd d on a.cardno = d.cardno and inshebeiname = C入 and intime = 2012-03-12 14:03:22','2012-03-12 14:03:45'),(3,'查看进出记录','select a.cardno, a.cardselfno, a.endtime, b.username, a.cardcomment,  c.carcp, c.carmodel,                           d.inshebeiname, d.intime, d.outshebeiname, d.outtime, d.cardkind                           from monthcard a                           inner join userinfo b on a.cardno = 1118066 and a.cardno = b.cardindex                           inner join carinfo c on a.cardno = c.cardindex                           inner join stoprd d on a.cardno = d.cardno and inshebeiname = C入 and intime = 2012-03-12 14:03:20','2012-03-12 14:03:54'),(4,'查看进出记录','select a.cardno, a.cardselfno, a.cardfee, b.username, a.cardcomment,d.feefactnum, c.carcp, c.carmodel,                           d.inshebeiname, d.intime, d.outshebeiname, d.outtime, d.cardkind                           from savecard a                           inner join userinfo b on a.cardno = 4042382 and a.cardno = b.cardindex                           inner join carinfo c on a.cardno = c.cardindex                           inner join stoprd d on a.cardno = d.cardno and inshebeiname = C入 and intime = 2012-03-27 11:35:42','2012-03-27 11:36:01'),(5,'查看进出记录','select a.cardno, a.cardselfno, a.endtime, b.username, a.cardcomment,  c.carcp, c.carmodel,                           d.inshebeiname, d.intime, d.outshebeiname, d.outtime, d.cardkind                           from monthcard a                           inner join userinfo b on a.cardno = 447551 and a.cardno = b.cardindex                           inner join carinfo c on a.cardno = c.cardindex                           inner join stoprd d on a.cardno = d.cardno and outshebeiname = C出 and outtime = 2012-03-27 16:04:51','2012-03-27 16:06:10'),(6,'查看进出记录','select a.cardno, a.cardselfno, a.endtime, b.username, a.cardcomment,  c.carcp, c.carmodel,                           d.inshebeiname, d.intime, d.outshebeiname, d.outtime, d.cardkind                           from monthcard a                           inner join userinfo b on a.cardno = 454781 and a.cardno = b.cardindex                           inner join carinfo c on a.cardno = c.cardindex                           inner join stoprd d on a.cardno = d.cardno and outshebeiname = C出 and outtime = 2012-03-27 16:04:00','2012-03-27 16:06:37'),(7,'查看进出记录','select a.cardno, a.cardselfno, a.endtime, b.username, a.cardcomment,  c.carcp, c.carmodel,                           d.inshebeiname, d.intime, d.outshebeiname, d.outtime, d.cardkind                           from monthcard a                           inner join userinfo b on a.cardno = 433238 and a.cardno = b.cardindex                           inner join carinfo c on a.cardno = c.cardindex                           inner join stoprd d on a.cardno = d.cardno and inshebeiname = C入 and intime = 2012-03-27 16:03:38','2012-03-27 16:06:39'),(8,'查看进出记录','select a.cardno, a.cardselfno, a.endtime, b.username, a.cardcomment,  c.carcp, c.carmodel,                           d.inshebeiname, d.intime, d.outshebeiname, d.outtime, d.cardkind                           from monthcard a                           inner join userinfo b on a.cardno = 454781 and a.cardno = b.cardindex                           inner join carinfo c on a.cardno = c.cardindex                           inner join stoprd d on a.cardno = d.cardno and outshebeiname = C出 and outtime = 2012-03-27 16:08:14','2012-03-27 16:08:17');
/*!40000 ALTER TABLE `pmslog` ENABLE KEYS */;
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
INSERT INTO `tmpcard` VALUES ('433238','EMID卡','小型车','未知','启用',0,0,0),('434605','EMID卡','小型车','','启用',0,0,0),('441528','EMID卡','小型车','','启用',0,0,0),('454781','EMID卡','小型车','未知','启用',0,0,0),('9400338','EMID卡','小型车','未知','启用',0,0,0);
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
) ENGINE=InnoDB AUTO_INCREMENT=29 DEFAULT CHARSET=gb2312;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `parkinfo`
--

LOCK TABLES `parkinfo` WRITE;
/*!40000 ALTER TABLE `parkinfo` DISABLE KEYS */;
INSERT INTO `parkinfo` VALUES (23,104,2000,'最外围',0),(24,105,1000,'停车场A',0),(25,106,500,'停车场B',0),(26,107,500,'停车场C',37),(27,114,400,'停车场A1',0),(28,115,200,'停车场A2',0);
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
) ENGINE=InnoDB AUTO_INCREMENT=771 DEFAULT CHARSET=gb2312;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `cardright`
--

LOCK TABLES `cardright` WRITE;
/*!40000 ALTER TABLE `cardright` DISABLE KEYS */;
INSERT INTO `cardright` VALUES (671,'454781',108,'00:00:00','23:59:59','B入'),(672,'454781',109,'00:00:00','23:59:59','A入'),(673,'454781',110,'00:00:00','23:59:59','B出'),(674,'454781',111,'00:00:00','23:59:59','C入'),(675,'454781',112,'00:00:00','23:59:59','C出'),(676,'454781',113,'00:00:00','23:59:59','A出'),(677,'454781',118,'00:00:00','23:59:59','A2入'),(678,'454781',119,'00:00:00','23:59:59','A2出'),(679,'454781',120,'00:00:00','23:59:59','A1入'),(680,'454781',121,'00:00:00','23:59:59','A2出'),(681,'433238',108,'00:00:00','23:59:59','B入'),(682,'433238',109,'00:00:00','23:59:59','A入'),(683,'433238',110,'00:00:00','23:59:59','B出'),(684,'433238',111,'00:00:00','23:59:59','C入'),(685,'433238',112,'00:00:00','23:59:59','C出'),(686,'433238',113,'00:00:00','23:59:59','A出'),(687,'433238',118,'00:00:00','23:59:59','A2入'),(688,'433238',119,'00:00:00','23:59:59','A2出'),(689,'433238',120,'00:00:00','23:59:59','A1入'),(690,'433238',121,'00:00:00','23:59:59','A2出'),(691,'434605',108,'00:00:00','23:59:59','B入'),(692,'434605',109,'00:00:00','23:59:59','A入'),(693,'434605',110,'00:00:00','23:59:59','B出'),(694,'434605',111,'00:00:00','23:59:59','C入'),(695,'434605',112,'00:00:00','23:59:59','C出'),(696,'434605',113,'00:00:00','23:59:59','A出'),(697,'434605',118,'00:00:00','23:59:59','A2入'),(698,'434605',119,'00:00:00','23:59:59','A2出'),(699,'434605',120,'00:00:00','23:59:59','A1入'),(700,'434605',121,'00:00:00','23:59:59','A2出'),(701,'441528',108,'00:00:00','23:59:59','B入'),(702,'441528',109,'00:00:00','23:59:59','A入'),(703,'441528',110,'00:00:00','23:59:59','B出'),(704,'441528',111,'00:00:00','23:59:59','C入'),(705,'441528',112,'00:00:00','23:59:59','C出'),(706,'441528',113,'00:00:00','23:59:59','A出'),(707,'441528',118,'00:00:00','23:59:59','A2入'),(708,'441528',119,'00:00:00','23:59:59','A2出'),(709,'441528',120,'00:00:00','23:59:59','A1入'),(710,'441528',121,'00:00:00','23:59:59','A2出'),(721,'15406074',108,'00:00:00','23:59:59','B入'),(722,'15406074',109,'00:00:00','23:59:59','A入'),(723,'15406074',110,'00:00:00','23:59:59','B出'),(724,'15406074',111,'00:00:00','23:59:59','C入'),(725,'15406074',112,'00:00:00','23:59:59','C出'),(726,'15406074',113,'00:00:00','23:59:59','A出'),(727,'15406074',118,'00:00:00','23:59:59','A2入'),(728,'15406074',119,'00:00:00','23:59:59','A2出'),(729,'15406074',120,'00:00:00','23:59:59','A1入'),(730,'15406074',121,'00:00:00','23:59:59','A2出'),(731,'9400338',108,'00:00:00','23:59:59','B入'),(732,'9400338',109,'00:00:00','23:59:59','A入'),(733,'9400338',110,'00:00:00','23:59:59','B出'),(734,'9400338',111,'00:00:00','23:59:59','C入'),(735,'9400338',112,'00:00:00','23:59:59','C出'),(736,'9400338',113,'00:00:00','23:59:59','A出'),(737,'9400338',118,'00:00:00','23:59:59','A2入'),(738,'9400338',119,'00:00:00','23:59:59','A2出'),(739,'9400338',120,'00:00:00','23:59:59','A1入'),(740,'9400338',121,'00:00:00','23:59:59','A2出'),(741,'448760',108,'00:00:00','23:59:59','B入'),(742,'448760',109,'00:00:00','23:59:59','A入'),(743,'448760',110,'00:00:00','23:59:59','B出'),(744,'448760',111,'00:00:00','23:59:59','C入'),(745,'448760',112,'00:00:00','23:59:59','C出'),(746,'448760',113,'00:00:00','23:59:59','A出'),(747,'448760',118,'00:00:00','23:59:59','A2入'),(748,'448760',119,'00:00:00','23:59:59','A2出'),(749,'448760',120,'00:00:00','23:59:59','A1入'),(750,'448760',121,'00:00:00','23:59:59','A2出'),(751,'447551',108,'00:00:00','23:59:59','B入'),(752,'447551',109,'00:00:00','23:59:59','A入'),(753,'447551',110,'00:00:00','23:59:59','B出'),(754,'447551',111,'00:00:00','23:59:59','C入'),(755,'447551',112,'00:00:00','23:59:59','C出'),(756,'447551',113,'00:00:00','23:59:59','A出'),(757,'447551',118,'00:00:00','23:59:59','A2入'),(758,'447551',119,'00:00:00','23:59:59','A2出'),(759,'447551',120,'00:00:00','23:59:59','A1入'),(760,'447551',121,'00:00:00','23:59:59','A2出'),(761,'447520',108,'00:00:00','23:59:59','B入'),(762,'447520',109,'00:00:00','23:59:59','A入'),(763,'447520',110,'00:00:00','23:59:59','B出'),(764,'447520',111,'00:00:00','23:59:59','C入'),(765,'447520',112,'00:00:00','23:59:59','C出'),(766,'447520',113,'00:00:00','23:59:59','A出'),(767,'447520',118,'00:00:00','23:59:59','A2入'),(768,'447520',119,'00:00:00','23:59:59','A2出'),(769,'447520',120,'00:00:00','23:59:59','A1入'),(770,'447520',121,'00:00:00','23:59:59','A2出');
/*!40000 ALTER TABLE `cardright` ENABLE KEYS */;
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
  PRIMARY KEY (`feeindex`),
  KEY `feetime` (`feetime`),
  KEY `cardno` (`cardno`)
) ENGINE=InnoDB AUTO_INCREMENT=3 DEFAULT CHARSET=gb2312;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `feerd`
--

LOCK TABLES `feerd` WRITE;
/*!40000 ALTER TABLE `feerd` DISABLE KEYS */;
INSERT INTO `feerd` VALUES (1,0,'2012-03-28 15:43:22','计时卡收费','停车场管理员','9400338',0),(2,0,'2012-03-28 15:43:30','计时卡收费','停车场管理员','441528',0);
/*!40000 ALTER TABLE `feerd` ENABLE KEYS */;
UNLOCK TABLES;

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
) ENGINE=InnoDB AUTO_INCREMENT=11 DEFAULT CHARSET=gb2312;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `operator`
--

LOCK TABLES `operator` WRITE;
/*!40000 ALTER TABLE `operator` DISABLE KEYS */;
INSERT INTO `operator` VALUES (1,'系统管理员','','男','','85236997123456',-1,0,-1,-1,0,0,'超级用户',-1,-1,NULL,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,'18804'),(2,'停车场管理员','','男','','aaa',-1,0,-1,-1,0,0,'普通用户',-1,-1,NULL,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,''),(3,'维护人员','','男','','aaa',-1,0,-1,-1,0,0,'超级用户',-1,-1,NULL,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,'17338'),(4,'大门一班','','男','','aaa',0,0,0,0,0,0,'普通用户',0,0,NULL,-1,-1,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1,0,''),(5,'大门二班','','男','','aaa',0,0,0,0,0,0,'普通用户',0,0,NULL,-1,-1,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1,0,''),(6,'大门三班','','男','','aaa',0,0,0,0,0,0,'普通用户',0,0,NULL,-1,-1,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1,0,''),(7,'后门一班','','男','','aaa',0,0,0,0,0,0,'普通用户',0,0,NULL,-1,-1,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1,0,''),(8,'后门二班','','男','','aaa',0,0,0,0,0,0,'普通用户',0,0,NULL,-1,-1,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1,0,''),(9,'南门一班','','男','','aaa',0,0,0,0,0,0,'普通用户',0,0,NULL,-1,-1,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1,0,''),(10,'南门二班','','男','','aaa',0,0,0,0,0,0,'普通用户',0,0,NULL,-1,-1,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1,0,'');
/*!40000 ALTER TABLE `operator` ENABLE KEYS */;
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
  `firstjstime` int(11) DEFAULT '0'
) ENGINE=InnoDB DEFAULT CHARSET=gb2312;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `feerate1`
--

LOCK TABLES `feerate1` WRITE;
/*!40000 ALTER TABLE `feerate1` DISABLE KEYS */;
INSERT INTO `feerate1` VALUES (5,0,13,14,15,16,17,18,19,20,21,22,23,24,0,0,0,0,0,0,0,0,0,0,0,0,27,28,11,12,'00:00:00','23:59:59',25,26,0,0,0,0,29),(5,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0),(5,2,240,40,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1440,140,0,0,'00:00:00','23:59:59',120,10,0,0,0,0,0),(5,3,60,40,120,30,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,5,'00:00:00','23:59:59',0,0,0,0,0,0,0),(5,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0),(5,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0),(5,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0),(5,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0),(6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0),(6,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0),(6,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0),(6,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0),(6,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0),(6,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0),(6,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0),(6,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0),(7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0),(7,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0),(7,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0),(7,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0),(7,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0),(7,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0),(7,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0),(7,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0),(21,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0),(21,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0),(21,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0),(21,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0),(21,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0),(21,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0),(21,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0),(21,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0),(22,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0),(22,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0),(22,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0),(22,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0),(22,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0),(22,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0),(22,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0),(22,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0),(23,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0),(23,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0),(23,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0),(23,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0),(23,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0),(23,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0),(23,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0),(23,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0),(24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0),(24,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0),(24,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0),(24,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0),(24,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0),(24,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0),(24,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0),(24,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0),(25,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0),(25,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0),(25,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0),(25,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0),(25,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0),(25,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0),(25,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0),(25,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0),(26,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0),(26,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0),(26,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0),(26,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0),(26,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0),(26,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0),(26,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0),(26,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0),(27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0),(27,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0),(27,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0),(27,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0),(27,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0),(27,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0),(27,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0),(27,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0),(28,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0),(28,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0),(28,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0),(28,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0),(28,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0),(28,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0),(28,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0),(28,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,'00:00:00','23:59:59',0,0,0,0,0,0,0);
/*!40000 ALTER TABLE `feerate1` ENABLE KEYS */;
UNLOCK TABLES;

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
) ENGINE=InnoDB AUTO_INCREMENT=12 DEFAULT CHARSET=gb2312;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `stoprd`
--

LOCK TABLES `stoprd` WRITE;
/*!40000 ALTER TABLE `stoprd` DISABLE KEYS */;
INSERT INTO `stoprd` VALUES (1,'447520','C入','C出','����\0hikvision��\0C\0\n\n	\n\r\r\"\Z)$+*($\'\'-2@7-0=0\'\'8L9=CEHIH+6OUNFT@GHE��\0C\r\r!!E.\'.EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE��\0@�\0\"\0��\0\0\0\0\0\0\0\0\0\0\0	\n��\0�\0\0\0}\0!1AQa\"q2���#B��R��$3br�	\n\Z%&\'()*456789:CDEFGHIJSTUVWXYZcdefghijstuvwxyz���������������������������������������������������������������������������\0\0\0\0\0\0\0\0	\n��\0�\0\0w\0!1AQaq\"2�B����	#3R�br�\n$4�%�\Z&\'()*56789:CDEFGHIJSTUVWXYZcdefghijstuvwxyz��������������������������������������������������������������������������\0\0\0\0?\0��(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\r��Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�D����\0Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9�(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��:J(��\n��hך���2�������:}\rQ�������y�-����hW��c�ɩ�\Z�}�\\������\0��?��k��������3˷f7�q��0x?Wa�h���\r�=`���]�.��\'�+�Q�*�\0|������\0�������)��A$�|�Ի`6pMcէ��dFG����.pEU��X�os{N���r6\'����P*<�(�G=I��;�1����7|M��h���F#�~��v�����+��[딷�����8���}����r[\"H�L&,��r=?�T��:k��\"4n7eX`�����\rY��۶=R�\0��z��5ix�����g��ݿ;���2k���tM��(J>r�=}([�\Z�}�\\�����Iln^�r�D�Jt�g��O�k������g�n�ol��V/���9s�\0�\0�E\0fS��F�m��znE�ϥ2�	�._�����XY�}�퐙vl����?�V~�o\r��<6�%۵s�|�ֿ������\0�U�GB��/���Q�f|nO7�\0q��g�KP�K�c��۸�q�*f�~��,��{����/�ܽ���!��K����I�_]�^���\\<�Ƙ9|����@ǃ�vV��P\Z�?�5[h$�S�\Z�l�\0ɦ�:ܫ�\\���h�6��\0��1���^�e1��0 ����\0�E�a��x��fI*�}~���@F��X��K�d�w�#`��\Z�	\\[�A��0��]ƨ>���b��	�냅������.������\"�>f�����v����݅�@�yo� ��A[����>��S�oÂ���gX\0 \"�\\��#Et�\0l������\0\n>����\0����QRܴ-u3[�.�?�s��QPލ���mv����݄�s�����S_��j	�._����KT0�\0k^fL=�<�?���M�\0��O��h�\0�B�	���5�����\0��ј��D?�@��lM�Ԕ�#5��B-��6�������5��?o�L�p��;��+\\ާ�\0!K����\0��\n�QE\0stQE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0t�QE\0i����T�3-����	H�W`:��A/��J�-<4a��J�Gn��l��]7���2���T��N&�\0�j�\0�K���j�j�fy-��9U|��=�?\n\0�|D�u˒����\0dVf���~U�������bEKgڲp�A�����\rO�r�����d����Fr���Gc�\0u�*B�:�>��O�N&�\0�j�\0�K�[U�\n��Z����`�H+����M\0e�^��y�J���?�mށ�����k_��O��ɖP~�	�pퟻ��Y�ًw�F }�GP1�u���rz$��ı����r@Hc]�g�Z%��A6ev펃�?ʹ�\n\'��qC �$l��Ѕ4���s�\0��\0쵡4��7H�Sh��vP�Eg���\\�\0��-\\բ{\n�edH�F��\0S�w���?�j����.�?��O����\0f���r���\0��\0φ\'�h�ny*�RNv��s�ؼ7q�n�9�\0J��G�E�6��C)�pGJذ���dwC7|�1���\Z\0����y�}���ͻy8���ZǇ��Nk�{r�>ݭ���V�5wr�k��o�f�i\\���Y�歨�kAmt1�jl�A?ր\'�4)�u����x��|0$�\0\ZԟQ��9��l��(baP g���^��jloe2��|�q�.�O���u�8n|M	ܹ�~���������fc�J.I���>�\ry\"��m�*�G�+?��~�e����ٿ�*GϿOֶ<E�\0 ;����(����zqi�D<~� G_S�?:�� H������S�m�����pg�l\nJ\0r}@?�\0M�/���\0��!\\��ak�]4W�?g�!`����~�������\0�\n�t}55K���B���y�\0k�\0�1��\0�_�\0#�\0���\0�cE�\0���G�\0�S�\0����i�\0~���A�\0A4�\0�f��\0Ƌ�\0A���\0֪�������=���L�ڞns���j��\"�M?�٪���ⰰ��/�R��c9 Z\0���譼;�Ok��$tVe󱴑�:Ph\Zݞ�b�ܤ��!`S�\0��i��H�炙3�QrMF</�1\n��f<rO�J{�GM�n��h���>�\0kxs����\0|-���\0�s�\0�L�\0�cE�\0���G�\0�Q�\0Ƌ�\0A���\0֠Px�F�B�Z�\Z��(�V�e����0BI#2����F4_��\0�����h���\0��\0�j\0�(�Z��w�Am7�\nck��r<�MU�n�(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(���(��($�p\0\0@PY���=�wq�/���L�y����qY�ݞ;��Q�29n�q����>�%s���ȸiOV������Ҁ$�w���?�j����.�?��O����\0f���r���\0��\0̢���\\]�>�,���2qZZ��.���te��<fE+�G�� �,-u+��\\N��\0�T���Ǐ�]�m,�m��t�r��\0,�y�$��U�]�)8 ����3��;�fb�I9$�4�j����-��,�N2F6��Țȟ\\ӟ^���&h�V�%L!*@����<c�\0.�?����@\'\0PG�][������&Py��/��\0����\rZ�!i����6�s�F?Z��m�^�a�&�P��_Č��^����|��a�b&:�����\n\0��5]\n���$���;K�Y���Wڜ�����)����.�\0��\0�F��7Ik\rɁ��l�dpps��\0W��C�M/F77!�|�8�W~��5�V�ƹw`֗2��H� R@��l�@�����Q����21�A���r�ğ��0Slq�s��r�γ|����9�\0��O]��M�1��.�R#\\goO��Ǌ\0��Q���E#˷����]����]�\0��e�\0\\O�z����o�^��+#!����9�ҷ짃W�\r���`���$�1��?��\n/�\ZkXA��Y���?��o����\0�\n�J�s�ȑD��t�9�rO�	��W�i��\\�[\\����\0p��\0!@� $�Ͻ-�x��@w?��Wme&�p�аY8,H����_���\0��\0�B���\0�r���\0��\0�|�0�������j�ޏ�z��F{=J8�xT�h|g��b�\0m��\0�BO��@\Z�:�/���w�ĳ�I!m�#1���Ri��̺��m}#+L�Tɜ�+��o����\0���\0Aj\0㨢�\0��B\'�mP�ߟx>�Al~��x���Q��8�>�m�m���O�\\���>�u���G�Ty��3�{�\0�k�\0�e{�\0>����\0U�\0�WW�\0�C�\0}\n?���\0���\0�B��e{�\0>�����^�\0Ͻ���@���\0���\0�B�.����x&\0H�08>���w����]HY�d �$J�n&772�Wi����q��PtQE\0stQE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0t�QE\0X����cw� 3����O�xZU�u�L!�8��\0׮@��U��;��L�|�`�t��@.��U�v���9e ����cߚ�@��Pᵼ�	�cY�#�\0W<~ �ʵ/�?a���vnܙ1�R|�\08�������߃@����l��Y䑣9\n��N\'�;;i�]�<�d�ǟ¹O)}_��?�O���;�\0!�o���k2�X^��y�J���?�\0o��l��f;�S�it_���5;�����1���[Y�X	�<����3��H�\"��-�ХNL�0�9����\r_�[B��A�A��=�3��s^(��Bu#���G�\\�� �����+��`�88��Q�>�<��<���g\'����\r�䰀�\"��I�������\0?��\0�f�����Oq,����\0&�\"�3,�\Z��Q���t�o�ؕ{�w�p�T9�����\\�[MWP��n�b@���Z\0����\Zkf�$��H�S��=��,��J����~Y�z`��5���߸i�{HCg�y�:�{���姆�R��O�1��H�,Ջ�����>�iv�����Ǩ��fb���Y��b�$�@��b��x�����?Ş{r:���e.�����\0Ƨ\"A�̾��֍��wai-�L����2c\'9*{u��8e*è=E��(������?��cÿ���\0��&���5֡g%������D����*��~�m��#�$p�.�3����@f�}��\\�j�4�.O�5K�[ß���kT���nVy��a2O��T�[j��1$�����xl�i�-�\0�\\_���-\\�H�H�F�]e8��S�jwױ�����6��4Z�(��(�6:|ڔ�w�$\nXy��@�~�\0��(�%��PK=��Xn @�YV�2Y�Eq��`�=����|a}$N��R�}�~�.����Q{@�<�rs\\\rX��//T���)���~&��EP7EPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPG�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6������\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0��',NULL,NULL,NULL,'����\0hikvision��\0C\0\n\n	\n\r\r\"\Z)$+*($\'\'-2@7-0=0\'\'8L9=CEHIH+6OUNFT@GHE��\0C\r\r!!E.\'.EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE��\0@�\0\"\0��\0\0\0\0\0\0\0\0\0\0\0	\n��\0�\0\0\0}\0!1AQa\"q2���#B��R��$3br�	\n\Z%&\'()*456789:CDEFGHIJSTUVWXYZcdefghijstuvwxyz���������������������������������������������������������������������������\0\0\0\0\0\0\0\0	\n��\0�\0\0w\0!1AQaq\"2�B����	#3R�br�\n$4�%�\Z&\'()*56789:CDEFGHIJSTUVWXYZcdefghijstuvwxyz��������������������������������������������������������������������������\0\0\0\0?\0��(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\r��Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�D����\0Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9�(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��:J(��\n��hך���2�������:}\rQ�������y�-����hW��c�ɩ�\Z�}�\\������\0��?��k��������3˷f7�q��0x?Wa�h���\r�=`���]�.��\'�+�Q�*�\0|������\0�������)��A$�|�Ի`6pMcէ��dFG����.pEU��X�os{N���r6\'����P*<�(�G=I��;�1����7|M��h���F#�~��v�����+��[딷�����8���}����r[\"H�L&,��r=?�T��:k��\"4n7eX`�����\rY��۶=R�\0��z��5ix�����g��ݿ;���2k���tM��(J>r�=}([�\Z�}�\\�����Iln^�r�D�Jt�g��O�k������g�n�ol��V/���9s�\0�\0�E\0fS��F�m��znE�ϥ2�	�._�����XY�}�퐙vl����?�V~�o\r��<6�%۵s�|�ֿ������\0�U�GB��/���Q�f|nO7�\0q��g�KP�K�c��۸�q�*f�~��,��{����/�ܽ���!��K����I�_]�^���\\<�Ƙ9|����@ǃ�vV��P\Z�?�5[h$�S�\Z�l�\0ɦ�:ܫ�\\���h�6��\0��1���^�e1��0 ����\0�E�a��x��fI*�}~���@F��X��K�d�w�#`��\Z�	\\[�A��0��]ƨ>���b��	�냅������.������\"�>f�����v����݅�@�yo� ��A[����>��S�oÂ���gX\0 \"�\\��#Et�\0l������\0\n>����\0����QRܴ-u3[�.�?�s��QPލ���mv����݄�s�����S_��j	�._����KT0�\0k^fL=�<�?���M�\0��O��h�\0�B�	���5�����\0��ј��D?�@��lM�Ԕ�#5��B-��6�������5��?o�L�p��;��+\\ާ�\0!K����\0��\n�QE\0stQE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0t�QE\0i����T�3-����	H�W`:��A/��J�-<4a��J�Gn��l��]7���2���T��N&�\0�j�\0�K���j�j�fy-��9U|��=�?\n\0�|D�u˒����\0dVf���~U�������bEKgڲp�A�����\rO�r�����d����Fr���Gc�\0u�*B�:�>��O�N&�\0�j�\0�K�[U�\n��Z����`�H+����M\0e�^��y�J���?�mށ�����k_��O��ɖP~�	�pퟻ��Y�ًw�F }�GP1�u���rz$��ı����r@Hc]�g�Z%��A6ev펃�?ʹ�\n\'��qC �$l��Ѕ4���s�\0��\0쵡4��7H�Sh��vP�Eg���\\�\0��-\\բ{\n�edH�F��\0S�w���?�j����.�?��O����\0f���r���\0��\0φ\'�h�ny*�RNv��s�ؼ7q�n�9�\0J��G�E�6��C)�pGJذ���dwC7|�1���\Z\0����y�}���ͻy8���ZǇ��Nk�{r�>ݭ���V�5wr�k��o�f�i\\���Y�歨�kAmt1�jl�A?ր\'�4)�u����x��|0$�\0\ZԟQ��9��l��(baP g���^��jloe2��|�q�.�O���u�8n|M	ܹ�~���������fc�J.I���>�\ry\"��m�*�G�+?��~�e����ٿ�*GϿOֶ<E�\0 ;����(����zqi�D<~� G_S�?:�� H������S�m�����pg�l\nJ\0r}@?�\0M�/���\0��!\\��ak�]4W�?g�!`����~�������\0�\n�t}55K���B���y�\0k�\0�1��\0�_�\0#�\0���\0�cE�\0���G�\0�S�\0����i�\0~���A�\0A4�\0�f��\0Ƌ�\0A���\0֪�������=���L�ڞns���j��\"�M?�٪���ⰰ��/�R��c9 Z\0���譼;�Ok��$tVe󱴑�:Ph\Zݞ�b�ܤ��!`S�\0��i��H�炙3�QrMF</�1\n��f<rO�J{�GM�n��h���>�\0kxs����\0|-���\0�s�\0�L�\0�cE�\0���G�\0�Q�\0Ƌ�\0A���\0֠Px�F�B�Z�\Z��(�V�e����0BI#2����F4_��\0�����h���\0��\0�j\0�(�Z��w�Am7�\nck��r<�MU�n�(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(���(��($�p\0\0@PY���=�wq�/���L�y����qY�ݞ;��Q�29n�q����>�%s���ȸiOV������Ҁ$�w���?�j����.�?��O����\0f���r���\0��\0̢���\\]�>�,���2qZZ��.���te��<fE+�G�� �,-u+��\\N��\0�T���Ǐ�]�m,�m��t�r��\0,�y�$��U�]�)8 ����3��;�fb�I9$�4�j����-��,�N2F6��Țȟ\\ӟ^���&h�V�%L!*@����<c�\0.�?����@\'\0PG�][������&Py��/��\0����\rZ�!i����6�s�F?Z��m�^�a�&�P��_Č��^����|��a�b&:�����\n\0��5]\n���$���;K�Y���Wڜ�����)����.�\0��\0�F��7Ik\rɁ��l�dpps��\0W��C�M/F77!�|�8�W~��5�V�ƹw`֗2��H� R@��l�@�����Q����21�A���r�ğ��0Slq�s��r�γ|����9�\0��O]��M�1��.�R#\\goO��Ǌ\0��Q���E#˷����]����]�\0��e�\0\\O�z����o�^��+#!����9�ҷ짃W�\r���`���$�1��?��\n/�\ZkXA��Y���?��o����\0�\n�J�s�ȑD��t�9�rO�	��W�i��\\�[\\����\0p��\0!@� $�Ͻ-�x��@w?��Wme&�p�аY8,H����_���\0��\0�B���\0�r���\0��\0�|�0�������j�ޏ�z��F{=J8�xT�h|g��b�\0m��\0�BO��@\Z�:�/���w�ĳ�I!m�#1���Ri��̺��m}#+L�Tɜ�+��o����\0���\0Aj\0㨢�\0��B\'�mP�ߟx>�Al~��x���Q��8�>�m�m���O�\\���>�u���G�Ty��3�{�\0�k�\0�e{�\0>����\0U�\0�WW�\0�C�\0}\n?���\0���\0�B��e{�\0>�����^�\0Ͻ���@���\0���\0�B�.����x&\0H�08>���w����]HY�d �$J�n&772�Wi����q��PtQE\0stQE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0t�QE\0X����cw� 3����O�xZU�u�L!�8��\0׮@��U��;��L�|�`�t��@.��U�v���9e ����cߚ�@��Pᵼ�	�cY�#�\0W<~ �ʵ/�?a���vnܙ1�R|�\08�������߃@����l��Y䑣9\n��N\'�;;i�]�<�d�ǟ¹O)}_��?�O���;�\0!�o���k2�X^��y�J���?�\0o��l��f;�S�it_���5;�����1���[Y�X	�<����3��H�\"��-�ХNL�0�9����\r_�[B��A�A��=�3��s^(��Bu#���G�\\�� �����+��`�88��Q�>�<��<���g\'����\r�䰀�\"��I�������\0?��\0�f�����Oq,����\0&�\"�3,�\Z��Q���t�o�ؕ{�w�p�T9�����\\�[MWP��n�b@���Z\0����\Zkf�$��H�S��=��,��J����~Y�z`��5���߸i�{HCg�y�:�{���姆�R��O�1��H�,Ջ�����>�iv�����Ǩ��fb���Y��b�$�@��b��x�����?Ş{r:���e.�����\0Ƨ\"A�̾��֍��wai-�L����2c\'9*{u��8e*è=E��(������?��cÿ���\0��&���5֡g%������D����*��~�m��#�$p�.�3����@f�}��\\�j�4�.O�5K�[ß���kT���nVy��a2O��T�[j��1$�����xl�i�-�\0�\\_���-\\�H�H�F�]e8��S�jwױ�����6��4Z�(��(�6:|ڔ�w�$\nXy��@�~�\0��(�%��PK=��Xn @�YV�2Y�Eq��`�=����|a}$N��R�}�~�.����Q{@�<�rs\\\rX��//T���)���~&��EP7EPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPG�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6������\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0��',NULL,NULL,NULL,'2012-04-01 16:56:05','2012-04-01 17:01:23',NULL,NULL,0,'2012-04-01 17:01:23','停车场管理员',0,'未知','未知',NULL,'未知','','月租卡',-1,NULL,'无优惠','未知',0),(2,'448760','C入','C出','����\0hikvision��\0C\0\n\n	\n\r\r\"\Z)$+*($\'\'-2@7-0=0\'\'8L9=CEHIH+6OUNFT@GHE��\0C\r\r!!E.\'.EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE��\0@�\0\"\0��\0\0\0\0\0\0\0\0\0\0\0	\n��\0�\0\0\0}\0!1AQa\"q2���#B��R��$3br�	\n\Z%&\'()*456789:CDEFGHIJSTUVWXYZcdefghijstuvwxyz���������������������������������������������������������������������������\0\0\0\0\0\0\0\0	\n��\0�\0\0w\0!1AQaq\"2�B����	#3R�br�\n$4�%�\Z&\'()*56789:CDEFGHIJSTUVWXYZcdefghijstuvwxyz��������������������������������������������������������������������������\0\0\0\0?\0��(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\r��Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�D����\0Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9�(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��:J(��\n��hך���2�������:}\rQ�������y�-����hW��c�ɩ�\Z�}�\\������\0��?��k��������3˷f7�q��0x?Wa�h���\r�=`���]�.��\'�+�Q�*�\0|������\0�������)��A$�|�Ի`6pMcէ��dFG����.pEU��X�os{N���r6\'����P*<�(�G=I��;�1����7|M��h���F#�~��v�����+��[딷�����8���}����r[\"H�L&,��r=?�T��:k��\"4n7eX`�����\rY��۶=R�\0��z��5ix�����g��ݿ;���2k���tM��(J>r�=}([�\Z�}�\\�����Iln^�r�D�Jt�g��O�k������g�n�ol��V/���9s�\0�\0�E\0fS��F�m��znE�ϥ2�	�._�����XY�}�퐙vl����?�V~�o\r��<6�%۵s�|�ֿ������\0�U�GB��/���Q�f|nO7�\0q��g�KP�K�c��۸�q�*f�~��,��{����/�ܽ���!��K����I�_]�^���\\<�Ƙ9|����@ǃ�vV��P\Z�?�5[h$�S�\Z�l�\0ɦ�:ܫ�\\���h�6��\0��1���^�e1��0 ����\0�E�a��x��fI*�}~���@F��X��K�d�w�#`��\Z�	\\[�A��0��]ƨ>���b��	�냅������.������\"�>f�����v����݅�@�yo� ��A[����>��S�oÂ���gX\0 \"�\\��#Et�\0l������\0\n>����\0����QRܴ-u3[�.�?�s��QPލ���mv����݄�s�����S_��j	�._����KT0�\0k^fL=�<�?���M�\0��O��h�\0�B�	���5�����\0��ј��D?�@��lM�Ԕ�#5��B-��6�������5��?o�L�p��;��+\\ާ�\0!K����\0��\n�QE\0stQE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0t�QE\0i����T�3-����	H�W`:��A/��J�-<4a��J�Gn��l��]7���2���T��N&�\0�j�\0�K���j�j�fy-��9U|��=�?\n\0�|D�u˒����\0dVf���~U�������bEKgڲp�A�����\rO�r�����d����Fr���Gc�\0u�*B�:�>��O�N&�\0�j�\0�K�[U�\n��Z����`�H+����M\0e�^��y�J���?�mށ�����k_��O��ɖP~�	�pퟻ��Y�ًw�F }�GP1�u���rz$��ı����r@Hc]�g�Z%��A6ev펃�?ʹ�\n\'��qC �$l��Ѕ4���s�\0��\0쵡4��7H�Sh��vP�Eg���\\�\0��-\\բ{\n�edH�F��\0S�w���?�j����.�?��O����\0f���r���\0��\0φ\'�h�ny*�RNv��s�ؼ7q�n�9�\0J��G�E�6��C)�pGJذ���dwC7|�1���\Z\0����y�}���ͻy8���ZǇ��Nk�{r�>ݭ���V�5wr�k��o�f�i\\���Y�歨�kAmt1�jl�A?ր\'�4)�u����x��|0$�\0\ZԟQ��9��l��(baP g���^��jloe2��|�q�.�O���u�8n|M	ܹ�~���������fc�J.I���>�\ry\"��m�*�G�+?��~�e����ٿ�*GϿOֶ<E�\0 ;����(����zqi�D<~� G_S�?:�� H������S�m�����pg�l\nJ\0r}@?�\0M�/���\0��!\\��ak�]4W�?g�!`����~�������\0�\n�t}55K���B���y�\0k�\0�1��\0�_�\0#�\0���\0�cE�\0���G�\0�S�\0����i�\0~���A�\0A4�\0�f��\0Ƌ�\0A���\0֪�������=���L�ڞns���j��\"�M?�٪���ⰰ��/�R��c9 Z\0���譼;�Ok��$tVe󱴑�:Ph\Zݞ�b�ܤ��!`S�\0��i��H�炙3�QrMF</�1\n��f<rO�J{�GM�n��h���>�\0kxs����\0|-���\0�s�\0�L�\0�cE�\0���G�\0�Q�\0Ƌ�\0A���\0֠Px�F�B�Z�\Z��(�V�e����0BI#2����F4_��\0�����h���\0��\0�j\0�(�Z��w�Am7�\nck��r<�MU�n�(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(���(��($�p\0\0@PY���=�wq�/���L�y����qY�ݞ;��Q�29n�q����>�%s���ȸiOV������Ҁ$�w���?�j����.�?��O����\0f���r���\0��\0̢���\\]�>�,���2qZZ��.���te��<fE+�G�� �,-u+��\\N��\0�T���Ǐ�]�m,�m��t�r��\0,�y�$��U�]�)8 ����3��;�fb�I9$�4�j����-��,�N2F6��Țȟ\\ӟ^���&h�V�%L!*@����<c�\0.�?����@\'\0PG�][������&Py��/��\0����\rZ�!i����6�s�F?Z��m�^�a�&�P��_Č��^����|��a�b&:�����\n\0��5]\n���$���;K�Y���Wڜ�����)����.�\0��\0�F��7Ik\rɁ��l�dpps��\0W��C�M/F77!�|�8�W~��5�V�ƹw`֗2��H� R@��l�@�����Q����21�A���r�ğ��0Slq�s��r�γ|����9�\0��O]��M�1��.�R#\\goO��Ǌ\0��Q���E#˷����]����]�\0��e�\0\\O�z����o�^��+#!����9�ҷ짃W�\r���`���$�1��?��\n/�\ZkXA��Y���?��o����\0�\n�J�s�ȑD��t�9�rO�	��W�i��\\�[\\����\0p��\0!@� $�Ͻ-�x��@w?��Wme&�p�аY8,H����_���\0��\0�B���\0�r���\0��\0�|�0�������j�ޏ�z��F{=J8�xT�h|g��b�\0m��\0�BO��@\Z�:�/���w�ĳ�I!m�#1���Ri��̺��m}#+L�Tɜ�+��o����\0���\0Aj\0㨢�\0��B\'�mP�ߟx>�Al~��x���Q��8�>�m�m���O�\\���>�u���G�Ty��3�{�\0�k�\0�e{�\0>����\0U�\0�WW�\0�C�\0}\n?���\0���\0�B��e{�\0>�����^�\0Ͻ���@���\0���\0�B�.����x&\0H�08>���w����]HY�d �$J�n&772�Wi����q��PtQE\0stQE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0t�QE\0X����cw� 3����O�xZU�u�L!�8��\0׮@��U��;��L�|�`�t��@.��U�v���9e ����cߚ�@��Pᵼ�	�cY�#�\0W<~ �ʵ/�?a���vnܙ1�R|�\08�������߃@����l��Y䑣9\n��N\'�;;i�]�<�d�ǟ¹O)}_��?�O���;�\0!�o���k2�X^��y�J���?�\0o��l��f;�S�it_���5;�����1���[Y�X	�<����3��H�\"��-�ХNL�0�9����\r_�[B��A�A��=�3��s^(��Bu#���G�\\�� �����+��`�88��Q�>�<��<���g\'����\r�䰀�\"��I�������\0?��\0�f�����Oq,����\0&�\"�3,�\Z��Q���t�o�ؕ{�w�p�T9�����\\�[MWP��n�b@���Z\0����\Zkf�$��H�S��=��,��J����~Y�z`��5���߸i�{HCg�y�:�{���姆�R��O�1��H�,Ջ�����>�iv�����Ǩ��fb���Y��b�$�@��b��x�����?Ş{r:���e.�����\0Ƨ\"A�̾��֍��wai-�L����2c\'9*{u��8e*è=E��(������?��cÿ���\0��&���5֡g%������D����*��~�m��#�$p�.�3����@f�}��\\�j�4�.O�5K�[ß���kT���nVy��a2O��T�[j��1$�����xl�i�-�\0�\\_���-\\�H�H�F�]e8��S�jwױ�����6��4Z�(��(�6:|ڔ�w�$\nXy��@�~�\0��(�%��PK=��Xn @�YV�2Y�Eq��`�=����|a}$N��R�}�~�.����Q{@�<�rs\\\rX��//T���)���~&��EP7EPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPG�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6������\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0��',NULL,NULL,NULL,'����\0hikvision��\0C\0\n\n	\n\r\r\"\Z)$+*($\'\'-2@7-0=0\'\'8L9=CEHIH+6OUNFT@GHE��\0C\r\r!!E.\'.EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE��\0@�\0\"\0��\0\0\0\0\0\0\0\0\0\0\0	\n��\0�\0\0\0}\0!1AQa\"q2���#B��R��$3br�	\n\Z%&\'()*456789:CDEFGHIJSTUVWXYZcdefghijstuvwxyz���������������������������������������������������������������������������\0\0\0\0\0\0\0\0	\n��\0�\0\0w\0!1AQaq\"2�B����	#3R�br�\n$4�%�\Z&\'()*56789:CDEFGHIJSTUVWXYZcdefghijstuvwxyz��������������������������������������������������������������������������\0\0\0\0?\0��(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\r��Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�D����\0Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9�(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��:J(��\n��hך���2�������:}\rQ�������y�-����hW��c�ɩ�\Z�}�\\������\0��?��k��������3˷f7�q��0x?Wa�h���\r�=`���]�.��\'�+�Q�*�\0|������\0�������)��A$�|�Ի`6pMcէ��dFG����.pEU��X�os{N���r6\'����P*<�(�G=I��;�1����7|M��h���F#�~��v�����+��[딷�����8���}����r[\"H�L&,��r=?�T��:k��\"4n7eX`�����\rY��۶=R�\0��z��5ix�����g��ݿ;���2k���tM��(J>r�=}([�\Z�}�\\�����Iln^�r�D�Jt�g��O�k������g�n�ol��V/���9s�\0�\0�E\0fS��F�m��znE�ϥ2�	�._�����XY�}�퐙vl����?�V~�o\r��<6�%۵s�|�ֿ������\0�U�GB��/���Q�f|nO7�\0q��g�KP�K�c��۸�q�*f�~��,��{����/�ܽ���!��K����I�_]�^���\\<�Ƙ9|����@ǃ�vV��P\Z�?�5[h$�S�\Z�l�\0ɦ�:ܫ�\\���h�6��\0��1���^�e1��0 ����\0�E�a��x��fI*�}~���@F��X��K�d�w�#`��\Z�	\\[�A��0��]ƨ>���b��	�냅������.������\"�>f�����v����݅�@�yo� ��A[����>��S�oÂ���gX\0 \"�\\��#Et�\0l������\0\n>����\0����QRܴ-u3[�.�?�s��QPލ���mv����݄�s�����S_��j	�._����KT0�\0k^fL=�<�?���M�\0��O��h�\0�B�	���5�����\0��ј��D?�@��lM�Ԕ�#5��B-��6�������5��?o�L�p��;��+\\ާ�\0!K����\0��\n�QE\0stQE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0t�QE\0i����T�3-����	H�W`:��A/��J�-<4a��J�Gn��l��]7���2���T��N&�\0�j�\0�K���j�j�fy-��9U|��=�?\n\0�|D�u˒����\0dVf���~U�������bEKgڲp�A�����\rO�r�����d����Fr���Gc�\0u�*B�:�>��O�N&�\0�j�\0�K�[U�\n��Z����`�H+����M\0e�^��y�J���?�mށ�����k_��O��ɖP~�	�pퟻ��Y�ًw�F }�GP1�u���rz$��ı����r@Hc]�g�Z%��A6ev펃�?ʹ�\n\'��qC �$l��Ѕ4���s�\0��\0쵡4��7H�Sh��vP�Eg���\\�\0��-\\բ{\n�edH�F��\0S�w���?�j����.�?��O����\0f���r���\0��\0φ\'�h�ny*�RNv��s�ؼ7q�n�9�\0J��G�E�6��C)�pGJذ���dwC7|�1���\Z\0����y�}���ͻy8���ZǇ��Nk�{r�>ݭ���V�5wr�k��o�f�i\\���Y�歨�kAmt1�jl�A?ր\'�4)�u����x��|0$�\0\ZԟQ��9��l��(baP g���^��jloe2��|�q�.�O���u�8n|M	ܹ�~���������fc�J.I���>�\ry\"��m�*�G�+?��~�e����ٿ�*GϿOֶ<E�\0 ;����(����zqi�D<~� G_S�?:�� H������S�m�����pg�l\nJ\0r}@?�\0M�/���\0��!\\��ak�]4W�?g�!`����~�������\0�\n�t}55K���B���y�\0k�\0�1��\0�_�\0#�\0���\0�cE�\0���G�\0�S�\0����i�\0~���A�\0A4�\0�f��\0Ƌ�\0A���\0֪�������=���L�ڞns���j��\"�M?�٪���ⰰ��/�R��c9 Z\0���譼;�Ok��$tVe󱴑�:Ph\Zݞ�b�ܤ��!`S�\0��i��H�炙3�QrMF</�1\n��f<rO�J{�GM�n��h���>�\0kxs����\0|-���\0�s�\0�L�\0�cE�\0���G�\0�Q�\0Ƌ�\0A���\0֠Px�F�B�Z�\Z��(�V�e����0BI#2����F4_��\0�����h���\0��\0�j\0�(�Z��w�Am7�\nck��r<�MU�n�(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(���(��($�p\0\0@PY���=�wq�/���L�y����qY�ݞ;��Q�29n�q����>�%s���ȸiOV������Ҁ$�w���?�j����.�?��O����\0f���r���\0��\0̢���\\]�>�,���2qZZ��.���te��<fE+�G�� �,-u+��\\N��\0�T���Ǐ�]�m,�m��t�r��\0,�y�$��U�]�)8 ����3��;�fb�I9$�4�j����-��,�N2F6��Țȟ\\ӟ^���&h�V�%L!*@����<c�\0.�?����@\'\0PG�][������&Py��/��\0����\rZ�!i����6�s�F?Z��m�^�a�&�P��_Č��^����|��a�b&:�����\n\0��5]\n���$���;K�Y���Wڜ�����)����.�\0��\0�F��7Ik\rɁ��l�dpps��\0W��C�M/F77!�|�8�W~��5�V�ƹw`֗2��H� R@��l�@�����Q����21�A���r�ğ��0Slq�s��r�γ|����9�\0��O]��M�1��.�R#\\goO��Ǌ\0��Q���E#˷����]����]�\0��e�\0\\O�z����o�^��+#!����9�ҷ짃W�\r���`���$�1��?��\n/�\ZkXA��Y���?��o����\0�\n�J�s�ȑD��t�9�rO�	��W�i��\\�[\\����\0p��\0!@� $�Ͻ-�x��@w?��Wme&�p�аY8,H����_���\0��\0�B���\0�r���\0��\0�|�0�������j�ޏ�z��F{=J8�xT�h|g��b�\0m��\0�BO��@\Z�:�/���w�ĳ�I!m�#1���Ri��̺��m}#+L�Tɜ�+��o����\0���\0Aj\0㨢�\0��B\'�mP�ߟx>�Al~��x���Q��8�>�m�m���O�\\���>�u���G�Ty��3�{�\0�k�\0�e{�\0>����\0U�\0�WW�\0�C�\0}\n?���\0���\0�B��e{�\0>�����^�\0Ͻ���@���\0���\0�B�.����x&\0H�08>���w����]HY�d �$J�n&772�Wi����q��PtQE\0stQE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0t�QE\0X����cw� 3����O�xZU�u�L!�8��\0׮@��U��;��L�|�`�t��@.��U�v���9e ����cߚ�@��Pᵼ�	�cY�#�\0W<~ �ʵ/�?a���vnܙ1�R|�\08�������߃@����l��Y䑣9\n��N\'�;;i�]�<�d�ǟ¹O)}_��?�O���;�\0!�o���k2�X^��y�J���?�\0o��l��f;�S�it_���5;�����1���[Y�X	�<����3��H�\"��-�ХNL�0�9����\r_�[B��A�A��=�3��s^(��Bu#���G�\\�� �����+��`�88��Q�>�<��<���g\'����\r�䰀�\"��I�������\0?��\0�f�����Oq,����\0&�\"�3,�\Z��Q���t�o�ؕ{�w�p�T9�����\\�[MWP��n�b@���Z\0����\Zkf�$��H�S��=��,��J����~Y�z`��5���߸i�{HCg�y�:�{���姆�R��O�1��H�,Ջ�����>�iv�����Ǩ��fb���Y��b�$�@��b��x�����?Ş{r:���e.�����\0Ƨ\"A�̾��֍��wai-�L����2c\'9*{u��8e*è=E��(������?��cÿ���\0��&���5֡g%������D����*��~�m��#�$p�.�3����@f�}��\\�j�4�.O�5K�[ß���kT���nVy��a2O��T�[j��1$�����xl�i�-�\0�\\_���-\\�H�H�F�]e8��S�jwױ�����6��4Z�(��(�6:|ڔ�w�$\nXy��@�~�\0��(�%��PK=��Xn @�YV�2Y�Eq��`�=����|a}$N��R�}�~�.����Q{@�<�rs\\\rX��//T���)���~&��EP7EPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPG�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6������\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0��',NULL,NULL,NULL,'2012-04-01 16:56:14','2012-04-01 17:01:20',NULL,NULL,0,'2012-04-01 17:01:20','停车场管理员',0,'未知','未知',NULL,'未知','','月租卡',-1,NULL,'无优惠','未知',0),(3,'447551','C入','C出','����\0hikvision��\0C\0\n\n	\n\r\r\"\Z)$+*($\'\'-2@7-0=0\'\'8L9=CEHIH+6OUNFT@GHE��\0C\r\r!!E.\'.EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE��\0@�\0\"\0��\0\0\0\0\0\0\0\0\0\0\0	\n��\0�\0\0\0}\0!1AQa\"q2���#B��R��$3br�	\n\Z%&\'()*456789:CDEFGHIJSTUVWXYZcdefghijstuvwxyz���������������������������������������������������������������������������\0\0\0\0\0\0\0\0	\n��\0�\0\0w\0!1AQaq\"2�B����	#3R�br�\n$4�%�\Z&\'()*56789:CDEFGHIJSTUVWXYZcdefghijstuvwxyz��������������������������������������������������������������������������\0\0\0\0?\0��(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\r��Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�D����\0Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9�(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��:J(��\n��hך���2�������:}\rQ�������y�-����hW��c�ɩ�\Z�}�\\������\0��?��k��������3˷f7�q��0x?Wa�h���\r�=`���]�.��\'�+�Q�*�\0|������\0�������)��A$�|�Ի`6pMcէ��dFG����.pEU��X�os{N���r6\'����P*<�(�G=I��;�1����7|M��h���F#�~��v�����+��[딷�����8���}����r[\"H�L&,��r=?�T��:k��\"4n7eX`�����\rY��۶=R�\0��z��5ix�����g��ݿ;���2k���tM��(J>r�=}([�\Z�}�\\�����Iln^�r�D�Jt�g��O�k������g�n�ol��V/���9s�\0�\0�E\0fS��F�m��znE�ϥ2�	�._�����XY�}�퐙vl����?�V~�o\r��<6�%۵s�|�ֿ������\0�U�GB��/���Q�f|nO7�\0q��g�KP�K�c��۸�q�*f�~��,��{����/�ܽ���!��K����I�_]�^���\\<�Ƙ9|����@ǃ�vV��P\Z�?�5[h$�S�\Z�l�\0ɦ�:ܫ�\\���h�6��\0��1���^�e1��0 ����\0�E�a��x��fI*�}~���@F��X��K�d�w�#`��\Z�	\\[�A��0��]ƨ>���b��	�냅������.������\"�>f�����v����݅�@�yo� ��A[����>��S�oÂ���gX\0 \"�\\��#Et�\0l������\0\n>����\0����QRܴ-u3[�.�?�s��QPލ���mv����݄�s�����S_��j	�._����KT0�\0k^fL=�<�?���M�\0��O��h�\0�B�	���5�����\0��ј��D?�@��lM�Ԕ�#5��B-��6�������5��?o�L�p��;��+\\ާ�\0!K����\0��\n�QE\0stQE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0t�QE\0i����T�3-����	H�W`:��A/��J�-<4a��J�Gn��l��]7���2���T��N&�\0�j�\0�K���j�j�fy-��9U|��=�?\n\0�|D�u˒����\0dVf���~U�������bEKgڲp�A�����\rO�r�����d����Fr���Gc�\0u�*B�:�>��O�N&�\0�j�\0�K�[U�\n��Z����`�H+����M\0e�^��y�J���?�mށ�����k_��O��ɖP~�	�pퟻ��Y�ًw�F }�GP1�u���rz$��ı����r@Hc]�g�Z%��A6ev펃�?ʹ�\n\'��qC �$l��Ѕ4���s�\0��\0쵡4��7H�Sh��vP�Eg���\\�\0��-\\բ{\n�edH�F��\0S�w���?�j����.�?��O����\0f���r���\0��\0φ\'�h�ny*�RNv��s�ؼ7q�n�9�\0J��G�E�6��C)�pGJذ���dwC7|�1���\Z\0����y�}���ͻy8���ZǇ��Nk�{r�>ݭ���V�5wr�k��o�f�i\\���Y�歨�kAmt1�jl�A?ր\'�4)�u����x��|0$�\0\ZԟQ��9��l��(baP g���^��jloe2��|�q�.�O���u�8n|M	ܹ�~���������fc�J.I���>�\ry\"��m�*�G�+?��~�e����ٿ�*GϿOֶ<E�\0 ;����(����zqi�D<~� G_S�?:�� H������S�m�����pg�l\nJ\0r}@?�\0M�/���\0��!\\��ak�]4W�?g�!`����~�������\0�\n�t}55K���B���y�\0k�\0�1��\0�_�\0#�\0���\0�cE�\0���G�\0�S�\0����i�\0~���A�\0A4�\0�f��\0Ƌ�\0A���\0֪�������=���L�ڞns���j��\"�M?�٪���ⰰ��/�R��c9 Z\0���譼;�Ok��$tVe󱴑�:Ph\Zݞ�b�ܤ��!`S�\0��i��H�炙3�QrMF</�1\n��f<rO�J{�GM�n��h���>�\0kxs����\0|-���\0�s�\0�L�\0�cE�\0���G�\0�Q�\0Ƌ�\0A���\0֠Px�F�B�Z�\Z��(�V�e����0BI#2����F4_��\0�����h���\0��\0�j\0�(�Z��w�Am7�\nck��r<�MU�n�(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(���(��($�p\0\0@PY���=�wq�/���L�y����qY�ݞ;��Q�29n�q����>�%s���ȸiOV������Ҁ$�w���?�j����.�?��O����\0f���r���\0��\0̢���\\]�>�,���2qZZ��.���te��<fE+�G�� �,-u+��\\N��\0�T���Ǐ�]�m,�m��t�r��\0,�y�$��U�]�)8 ����3��;�fb�I9$�4�j����-��,�N2F6��Țȟ\\ӟ^���&h�V�%L!*@����<c�\0.�?����@\'\0PG�][������&Py��/��\0����\rZ�!i����6�s�F?Z��m�^�a�&�P��_Č��^����|��a�b&:�����\n\0��5]\n���$���;K�Y���Wڜ�����)����.�\0��\0�F��7Ik\rɁ��l�dpps��\0W��C�M/F77!�|�8�W~��5�V�ƹw`֗2��H� R@��l�@�����Q����21�A���r�ğ��0Slq�s��r�γ|����9�\0��O]��M�1��.�R#\\goO��Ǌ\0��Q���E#˷����]����]�\0��e�\0\\O�z����o�^��+#!����9�ҷ짃W�\r���`���$�1��?��\n/�\ZkXA��Y���?��o����\0�\n�J�s�ȑD��t�9�rO�	��W�i��\\�[\\����\0p��\0!@� $�Ͻ-�x��@w?��Wme&�p�аY8,H����_���\0��\0�B���\0�r���\0��\0�|�0�������j�ޏ�z��F{=J8�xT�h|g��b�\0m��\0�BO��@\Z�:�/���w�ĳ�I!m�#1���Ri��̺��m}#+L�Tɜ�+��o����\0���\0Aj\0㨢�\0��B\'�mP�ߟx>�Al~��x���Q��8�>�m�m���O�\\���>�u���G�Ty��3�{�\0�k�\0�e{�\0>����\0U�\0�WW�\0�C�\0}\n?���\0���\0�B��e{�\0>�����^�\0Ͻ���@���\0���\0�B�.����x&\0H�08>���w����]HY�d �$J�n&772�Wi����q��PtQE\0stQE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0t�QE\0X����cw� 3����O�xZU�u�L!�8��\0׮@��U��;��L�|�`�t��@.��U�v���9e ����cߚ�@��Pᵼ�	�cY�#�\0W<~ �ʵ/�?a���vnܙ1�R|�\08�������߃@����l��Y䑣9\n��N\'�;;i�]�<�d�ǟ¹O)}_��?�O���;�\0!�o���k2�X^��y�J���?�\0o��l��f;�S�it_���5;�����1���[Y�X	�<����3��H�\"��-�ХNL�0�9����\r_�[B��A�A��=�3��s^(��Bu#���G�\\�� �����+��`�88��Q�>�<��<���g\'����\r�䰀�\"��I�������\0?��\0�f�����Oq,����\0&�\"�3,�\Z��Q���t�o�ؕ{�w�p�T9�����\\�[MWP��n�b@���Z\0����\Zkf�$��H�S��=��,��J����~Y�z`��5���߸i�{HCg�y�:�{���姆�R��O�1��H�,Ջ�����>�iv�����Ǩ��fb���Y��b�$�@��b��x�����?Ş{r:���e.�����\0Ƨ\"A�̾��֍��wai-�L����2c\'9*{u��8e*è=E��(������?��cÿ���\0��&���5֡g%������D����*��~�m��#�$p�.�3����@f�}��\\�j�4�.O�5K�[ß���kT���nVy��a2O��T�[j��1$�����xl�i�-�\0�\\_���-\\�H�H�F�]e8��S�jwױ�����6��4Z�(��(�6:|ڔ�w�$\nXy��@�~�\0��(�%��PK=��Xn @�YV�2Y�Eq��`�=����|a}$N��R�}�~�.����Q{@�<�rs\\\rX��//T���)���~&��EP7EPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPG�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6������\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0��',NULL,NULL,NULL,'����\0hikvision��\0C\0\n\n	\n\r\r\"\Z)$+*($\'\'-2@7-0=0\'\'8L9=CEHIH+6OUNFT@GHE��\0C\r\r!!E.\'.EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE��\0@�\0\"\0��\0\0\0\0\0\0\0\0\0\0\0	\n��\0�\0\0\0}\0!1AQa\"q2���#B��R��$3br�	\n\Z%&\'()*456789:CDEFGHIJSTUVWXYZcdefghijstuvwxyz���������������������������������������������������������������������������\0\0\0\0\0\0\0\0	\n��\0�\0\0w\0!1AQaq\"2�B����	#3R�br�\n$4�%�\Z&\'()*56789:CDEFGHIJSTUVWXYZcdefghijstuvwxyz��������������������������������������������������������������������������\0\0\0\0?\0��(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\r��Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�D����\0Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9�(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��:J(��\n��hך���2�������:}\rQ�������y�-����hW��c�ɩ�\Z�}�\\������\0��?��k��������3˷f7�q��0x?Wa�h���\r�=`���]�.��\'�+�Q�*�\0|������\0�������)��A$�|�Ի`6pMcէ��dFG����.pEU��X�os{N���r6\'����P*<�(�G=I��;�1����7|M��h���F#�~��v�����+��[딷�����8���}����r[\"H�L&,��r=?�T��:k��\"4n7eX`�����\rY��۶=R�\0��z��5ix�����g��ݿ;���2k���tM��(J>r�=}([�\Z�}�\\�����Iln^�r�D�Jt�g��O�k������g�n�ol��V/���9s�\0�\0�E\0fS��F�m��znE�ϥ2�	�._�����XY�}�퐙vl����?�V~�o\r��<6�%۵s�|�ֿ������\0�U�GB��/���Q�f|nO7�\0q��g�KP�K�c��۸�q�*f�~��,��{����/�ܽ���!��K����I�_]�^���\\<�Ƙ9|����@ǃ�vV��P\Z�?�5[h$�S�\Z�l�\0ɦ�:ܫ�\\���h�6��\0��1���^�e1��0 ����\0�E�a��x��fI*�}~���@F��X��K�d�w�#`��\Z�	\\[�A��0��]ƨ>���b��	�냅������.������\"�>f�����v����݅�@�yo� ��A[����>��S�oÂ���gX\0 \"�\\��#Et�\0l������\0\n>����\0����QRܴ-u3[�.�?�s��QPލ���mv����݄�s�����S_��j	�._����KT0�\0k^fL=�<�?���M�\0��O��h�\0�B�	���5�����\0��ј��D?�@��lM�Ԕ�#5��B-��6�������5��?o�L�p��;��+\\ާ�\0!K����\0��\n�QE\0stQE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0t�QE\0i����T�3-����	H�W`:��A/��J�-<4a��J�Gn��l��]7���2���T��N&�\0�j�\0�K���j�j�fy-��9U|��=�?\n\0�|D�u˒����\0dVf���~U�������bEKgڲp�A�����\rO�r�����d����Fr���Gc�\0u�*B�:�>��O�N&�\0�j�\0�K�[U�\n��Z����`�H+����M\0e�^��y�J���?�mށ�����k_��O��ɖP~�	�pퟻ��Y�ًw�F }�GP1�u���rz$��ı����r@Hc]�g�Z%��A6ev펃�?ʹ�\n\'��qC �$l��Ѕ4���s�\0��\0쵡4��7H�Sh��vP�Eg���\\�\0��-\\բ{\n�edH�F��\0S�w���?�j����.�?��O����\0f���r���\0��\0φ\'�h�ny*�RNv��s�ؼ7q�n�9�\0J��G�E�6��C)�pGJذ���dwC7|�1���\Z\0����y�}���ͻy8���ZǇ��Nk�{r�>ݭ���V�5wr�k��o�f�i\\���Y�歨�kAmt1�jl�A?ր\'�4)�u����x��|0$�\0\ZԟQ��9��l��(baP g���^��jloe2��|�q�.�O���u�8n|M	ܹ�~���������fc�J.I���>�\ry\"��m�*�G�+?��~�e����ٿ�*GϿOֶ<E�\0 ;����(����zqi�D<~� G_S�?:�� H������S�m�����pg�l\nJ\0r}@?�\0M�/���\0��!\\��ak�]4W�?g�!`����~�������\0�\n�t}55K���B���y�\0k�\0�1��\0�_�\0#�\0���\0�cE�\0���G�\0�S�\0����i�\0~���A�\0A4�\0�f��\0Ƌ�\0A���\0֪�������=���L�ڞns���j��\"�M?�٪���ⰰ��/�R��c9 Z\0���譼;�Ok��$tVe󱴑�:Ph\Zݞ�b�ܤ��!`S�\0��i��H�炙3�QrMF</�1\n��f<rO�J{�GM�n��h���>�\0kxs����\0|-���\0�s�\0�L�\0�cE�\0���G�\0�Q�\0Ƌ�\0A���\0֠Px�F�B�Z�\Z��(�V�e����0BI#2����F4_��\0�����h���\0��\0�j\0�(�Z��w�Am7�\nck��r<�MU�n�(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(���(��($�p\0\0@PY���=�wq�/���L�y����qY�ݞ;��Q�29n�q����>�%s���ȸiOV������Ҁ$�w���?�j����.�?��O����\0f���r���\0��\0̢���\\]�>�,���2qZZ��.���te��<fE+�G�� �,-u+��\\N��\0�T���Ǐ�]�m,�m��t�r��\0,�y�$��U�]�)8 ����3��;�fb�I9$�4�j����-��,�N2F6��Țȟ\\ӟ^���&h�V�%L!*@����<c�\0.�?����@\'\0PG�][������&Py��/��\0����\rZ�!i����6�s�F?Z��m�^�a�&�P��_Č��^����|��a�b&:�����\n\0��5]\n���$���;K�Y���Wڜ�����)����.�\0��\0�F��7Ik\rɁ��l�dpps��\0W��C�M/F77!�|�8�W~��5�V�ƹw`֗2��H� R@��l�@�����Q����21�A���r�ğ��0Slq�s��r�γ|����9�\0��O]��M�1��.�R#\\goO��Ǌ\0��Q���E#˷����]����]�\0��e�\0\\O�z����o�^��+#!����9�ҷ짃W�\r���`���$�1��?��\n/�\ZkXA��Y���?��o����\0�\n�J�s�ȑD��t�9�rO�	��W�i��\\�[\\����\0p��\0!@� $�Ͻ-�x��@w?��Wme&�p�аY8,H����_���\0��\0�B���\0�r���\0��\0�|�0�������j�ޏ�z��F{=J8�xT�h|g��b�\0m��\0�BO��@\Z�:�/���w�ĳ�I!m�#1���Ri��̺��m}#+L�Tɜ�+��o����\0���\0Aj\0㨢�\0��B\'�mP�ߟx>�Al~��x���Q��8�>�m�m���O�\\���>�u���G�Ty��3�{�\0�k�\0�e{�\0>����\0U�\0�WW�\0�C�\0}\n?���\0���\0�B��e{�\0>�����^�\0Ͻ���@���\0���\0�B�.����x&\0H�08>���w����]HY�d �$J�n&772�Wi����q��PtQE\0stQE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0t�QE\0X����cw� 3����O�xZU�u�L!�8��\0׮@��U��;��L�|�`�t��@.��U�v���9e ����cߚ�@��Pᵼ�	�cY�#�\0W<~ �ʵ/�?a���vnܙ1�R|�\08�������߃@����l��Y䑣9\n��N\'�;;i�]�<�d�ǟ¹O)}_��?�O���;�\0!�o���k2�X^��y�J���?�\0o��l��f;�S�it_���5;�����1���[Y�X	�<����3��H�\"��-�ХNL�0�9����\r_�[B��A�A��=�3��s^(��Bu#���G�\\�� �����+��`�88��Q�>�<��<���g\'����\r�䰀�\"��I�������\0?��\0�f�����Oq,����\0&�\"�3,�\Z��Q���t�o�ؕ{�w�p�T9�����\\�[MWP��n�b@���Z\0����\Zkf�$��H�S��=��,��J����~Y�z`��5���߸i�{HCg�y�:�{���姆�R��O�1��H�,Ջ�����>�iv�����Ǩ��fb���Y��b�$�@��b��x�����?Ş{r:���e.�����\0Ƨ\"A�̾��֍��wai-�L����2c\'9*{u��8e*è=E��(������?��cÿ���\0��&���5֡g%������D����*��~�m��#�$p�.�3����@f�}��\\�j�4�.O�5K�[ß���kT���nVy��a2O��T�[j��1$�����xl�i�-�\0�\\_���-\\�H�H�F�]e8��S�jwױ�����6��4Z�(��(�6:|ڔ�w�$\nXy��@�~�\0��(�%��PK=��Xn @�YV�2Y�Eq��`�=����|a}$N��R�}�~�.����Q{@�<�rs\\\rX��//T���)���~&��EP7EPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPG�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6������\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0��',NULL,NULL,NULL,'2012-04-01 17:01:22','2012-04-01 16:57:43',NULL,NULL,0,'2012-04-01 16:57:43','停车场管理员',0,'未知','未知',NULL,'未知','','月租卡',-1,NULL,'无优惠','未知',0),(4,'447520','C入','C出','����\0hikvision��\0C\0\n\n	\n\r\r\"\Z)$+*($\'\'-2@7-0=0\'\'8L9=CEHIH+6OUNFT@GHE��\0C\r\r!!E.\'.EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE��\0@�\0\"\0��\0\0\0\0\0\0\0\0\0\0\0	\n��\0�\0\0\0}\0!1AQa\"q2���#B��R��$3br�	\n\Z%&\'()*456789:CDEFGHIJSTUVWXYZcdefghijstuvwxyz���������������������������������������������������������������������������\0\0\0\0\0\0\0\0	\n��\0�\0\0w\0!1AQaq\"2�B����	#3R�br�\n$4�%�\Z&\'()*56789:CDEFGHIJSTUVWXYZcdefghijstuvwxyz��������������������������������������������������������������������������\0\0\0\0?\0��(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\r��Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�D����\0Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9�(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��:J(��\n��hך���2�������:}\rQ�������y�-����hW��c�ɩ�\Z�}�\\������\0��?��k��������3˷f7�q��0x?Wa�h���\r�=`���]�.��\'�+�Q�*�\0|������\0�������)��A$�|�Ի`6pMcէ��dFG����.pEU��X�os{N���r6\'����P*<�(�G=I��;�1����7|M��h���F#�~��v�����+��[딷�����8���}����r[\"H�L&,��r=?�T��:k��\"4n7eX`�����\rY��۶=R�\0��z��5ix�����g��ݿ;���2k���tM��(J>r�=}([�\Z�}�\\�����Iln^�r�D�Jt�g��O�k������g�n�ol��V/���9s�\0�\0�E\0fS��F�m��znE�ϥ2�	�._�����XY�}�퐙vl����?�V~�o\r��<6�%۵s�|�ֿ������\0�U�GB��/���Q�f|nO7�\0q��g�KP�K�c��۸�q�*f�~��,��{����/�ܽ���!��K����I�_]�^���\\<�Ƙ9|����@ǃ�vV��P\Z�?�5[h$�S�\Z�l�\0ɦ�:ܫ�\\���h�6��\0��1���^�e1��0 ����\0�E�a��x��fI*�}~���@F��X��K�d�w�#`��\Z�	\\[�A��0��]ƨ>���b��	�냅������.������\"�>f�����v����݅�@�yo� ��A[����>��S�oÂ���gX\0 \"�\\��#Et�\0l������\0\n>����\0����QRܴ-u3[�.�?�s��QPލ���mv����݄�s�����S_��j	�._����KT0�\0k^fL=�<�?���M�\0��O��h�\0�B�	���5�����\0��ј��D?�@��lM�Ԕ�#5��B-��6�������5��?o�L�p��;��+\\ާ�\0!K����\0��\n�QE\0stQE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0t�QE\0i����T�3-����	H�W`:��A/��J�-<4a��J�Gn��l��]7���2���T��N&�\0�j�\0�K���j�j�fy-��9U|��=�?\n\0�|D�u˒����\0dVf���~U�������bEKgڲp�A�����\rO�r�����d����Fr���Gc�\0u�*B�:�>��O�N&�\0�j�\0�K�[U�\n��Z����`�H+����M\0e�^��y�J���?�mށ�����k_��O��ɖP~�	�pퟻ��Y�ًw�F }�GP1�u���rz$��ı����r@Hc]�g�Z%��A6ev펃�?ʹ�\n\'��qC �$l��Ѕ4���s�\0��\0쵡4��7H�Sh��vP�Eg���\\�\0��-\\բ{\n�edH�F��\0S�w���?�j����.�?��O����\0f���r���\0��\0φ\'�h�ny*�RNv��s�ؼ7q�n�9�\0J��G�E�6��C)�pGJذ���dwC7|�1���\Z\0����y�}���ͻy8���ZǇ��Nk�{r�>ݭ���V�5wr�k��o�f�i\\���Y�歨�kAmt1�jl�A?ր\'�4)�u����x��|0$�\0\ZԟQ��9��l��(baP g���^��jloe2��|�q�.�O���u�8n|M	ܹ�~���������fc�J.I���>�\ry\"��m�*�G�+?��~�e����ٿ�*GϿOֶ<E�\0 ;����(����zqi�D<~� G_S�?:�� H������S�m�����pg�l\nJ\0r}@?�\0M�/���\0��!\\��ak�]4W�?g�!`����~�������\0�\n�t}55K���B���y�\0k�\0�1��\0�_�\0#�\0���\0�cE�\0���G�\0�S�\0����i�\0~���A�\0A4�\0�f��\0Ƌ�\0A���\0֪�������=���L�ڞns���j��\"�M?�٪���ⰰ��/�R��c9 Z\0���譼;�Ok��$tVe󱴑�:Ph\Zݞ�b�ܤ��!`S�\0��i��H�炙3�QrMF</�1\n��f<rO�J{�GM�n��h���>�\0kxs����\0|-���\0�s�\0�L�\0�cE�\0���G�\0�Q�\0Ƌ�\0A���\0֠Px�F�B�Z�\Z��(�V�e����0BI#2����F4_��\0�����h���\0��\0�j\0�(�Z��w�Am7�\nck��r<�MU�n�(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(���(��($�p\0\0@PY���=�wq�/���L�y����qY�ݞ;��Q�29n�q����>�%s���ȸiOV������Ҁ$�w���?�j����.�?��O����\0f���r���\0��\0̢���\\]�>�,���2qZZ��.���te��<fE+�G�� �,-u+��\\N��\0�T���Ǐ�]�m,�m��t�r��\0,�y�$��U�]�)8 ����3��;�fb�I9$�4�j����-��,�N2F6��Țȟ\\ӟ^���&h�V�%L!*@����<c�\0.�?����@\'\0PG�][������&Py��/��\0����\rZ�!i����6�s�F?Z��m�^�a�&�P��_Č��^����|��a�b&:�����\n\0��5]\n���$���;K�Y���Wڜ�����)����.�\0��\0�F��7Ik\rɁ��l�dpps��\0W��C�M/F77!�|�8�W~��5�V�ƹw`֗2��H� R@��l�@�����Q����21�A���r�ğ��0Slq�s��r�γ|����9�\0��O]��M�1��.�R#\\goO��Ǌ\0��Q���E#˷����]����]�\0��e�\0\\O�z����o�^��+#!����9�ҷ짃W�\r���`���$�1��?��\n/�\ZkXA��Y���?��o����\0�\n�J�s�ȑD��t�9�rO�	��W�i��\\�[\\����\0p��\0!@� $�Ͻ-�x��@w?��Wme&�p�аY8,H����_���\0��\0�B���\0�r���\0��\0�|�0�������j�ޏ�z��F{=J8�xT�h|g��b�\0m��\0�BO��@\Z�:�/���w�ĳ�I!m�#1���Ri��̺��m}#+L�Tɜ�+��o����\0���\0Aj\0㨢�\0��B\'�mP�ߟx>�Al~��x���Q��8�>�m�m���O�\\���>�u���G�Ty��3�{�\0�k�\0�e{�\0>����\0U�\0�WW�\0�C�\0}\n?���\0���\0�B��e{�\0>�����^�\0Ͻ���@���\0���\0�B�.����x&\0H�08>���w����]HY�d �$J�n&772�Wi����q��PtQE\0stQE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0t�QE\0X����cw� 3����O�xZU�u�L!�8��\0׮@��U��;��L�|�`�t��@.��U�v���9e ����cߚ�@��Pᵼ�	�cY�#�\0W<~ �ʵ/�?a���vnܙ1�R|�\08�������߃@����l��Y䑣9\n��N\'�;;i�]�<�d�ǟ¹O)}_��?�O���;�\0!�o���k2�X^��y�J���?�\0o��l��f;�S�it_���5;�����1���[Y�X	�<����3��H�\"��-�ХNL�0�9����\r_�[B��A�A��=�3��s^(��Bu#���G�\\�� �����+��`�88��Q�>�<��<���g\'����\r�䰀�\"��I�������\0?��\0�f�����Oq,����\0&�\"�3,�\Z��Q���t�o�ؕ{�w�p�T9�����\\�[MWP��n�b@���Z\0����\Zkf�$��H�S��=��,��J����~Y�z`��5���߸i�{HCg�y�:�{���姆�R��O�1��H�,Ջ�����>�iv�����Ǩ��fb���Y��b�$�@��b��x�����?Ş{r:���e.�����\0Ƨ\"A�̾��֍��wai-�L����2c\'9*{u��8e*è=E��(������?��cÿ���\0��&���5֡g%������D����*��~�m��#�$p�.�3����@f�}��\\�j�4�.O�5K�[ß���kT���nVy��a2O��T�[j��1$�����xl�i�-�\0�\\_���-\\�H�H�F�]e8��S�jwױ�����6��4Z�(��(�6:|ڔ�w�$\nXy��@�~�\0��(�%��PK=��Xn @�YV�2Y�Eq��`�=����|a}$N��R�}�~�.����Q{@�<�rs\\\rX��//T���)���~&��EP7EPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPG�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6������\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0��',NULL,NULL,NULL,'����\0hikvision��\0C\0\n\n	\n\r\r\"\Z)$+*($\'\'-2@7-0=0\'\'8L9=CEHIH+6OUNFT@GHE��\0C\r\r!!E.\'.EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE��\0@�\0\"\0��\0\0\0\0\0\0\0\0\0\0\0	\n��\0�\0\0\0}\0!1AQa\"q2���#B��R��$3br�	\n\Z%&\'()*456789:CDEFGHIJSTUVWXYZcdefghijstuvwxyz���������������������������������������������������������������������������\0\0\0\0\0\0\0\0	\n��\0�\0\0w\0!1AQaq\"2�B����	#3R�br�\n$4�%�\Z&\'()*56789:CDEFGHIJSTUVWXYZcdefghijstuvwxyz��������������������������������������������������������������������������\0\0\0\0?\0��(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\r��Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�D����\0Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9�(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��:J(��\n��hך���2�������:}\rQ�������y�-����hW��c�ɩ�\Z�}�\\������\0��?��k��������3˷f7�q��0x?Wa�h���\r�=`���]�.��\'�+�Q�*�\0|������\0�������)��A$�|�Ի`6pMcէ��dFG����.pEU��X�os{N���r6\'����P*<�(�G=I��;�1����7|M��h���F#�~��v�����+��[딷�����8���}����r[\"H�L&,��r=?�T��:k��\"4n7eX`�����\rY��۶=R�\0��z��5ix�����g��ݿ;���2k���tM��(J>r�=}([�\Z�}�\\�����Iln^�r�D�Jt�g��O�k������g�n�ol��V/���9s�\0�\0�E\0fS��F�m��znE�ϥ2�	�._�����XY�}�퐙vl����?�V~�o\r��<6�%۵s�|�ֿ������\0�U�GB��/���Q�f|nO7�\0q��g�KP�K�c��۸�q�*f�~��,��{����/�ܽ���!��K����I�_]�^���\\<�Ƙ9|����@ǃ�vV��P\Z�?�5[h$�S�\Z�l�\0ɦ�:ܫ�\\���h�6��\0��1���^�e1��0 ����\0�E�a��x��fI*�}~���@F��X��K�d�w�#`��\Z�	\\[�A��0��]ƨ>���b��	�냅������.������\"�>f�����v����݅�@�yo� ��A[����>��S�oÂ���gX\0 \"�\\��#Et�\0l������\0\n>����\0����QRܴ-u3[�.�?�s��QPލ���mv����݄�s�����S_��j	�._����KT0�\0k^fL=�<�?���M�\0��O��h�\0�B�	���5�����\0��ј��D?�@��lM�Ԕ�#5��B-��6�������5��?o�L�p��;��+\\ާ�\0!K����\0��\n�QE\0stQE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0t�QE\0i����T�3-����	H�W`:��A/��J�-<4a��J�Gn��l��]7���2���T��N&�\0�j�\0�K���j�j�fy-��9U|��=�?\n\0�|D�u˒����\0dVf���~U�������bEKgڲp�A�����\rO�r�����d����Fr���Gc�\0u�*B�:�>��O�N&�\0�j�\0�K�[U�\n��Z����`�H+����M\0e�^��y�J���?�mށ�����k_��O��ɖP~�	�pퟻ��Y�ًw�F }�GP1�u���rz$��ı����r@Hc]�g�Z%��A6ev펃�?ʹ�\n\'��qC �$l��Ѕ4���s�\0��\0쵡4��7H�Sh��vP�Eg���\\�\0��-\\բ{\n�edH�F��\0S�w���?�j����.�?��O����\0f���r���\0��\0φ\'�h�ny*�RNv��s�ؼ7q�n�9�\0J��G�E�6��C)�pGJذ���dwC7|�1���\Z\0����y�}���ͻy8���ZǇ��Nk�{r�>ݭ���V�5wr�k��o�f�i\\���Y�歨�kAmt1�jl�A?ր\'�4)�u����x��|0$�\0\ZԟQ��9��l��(baP g���^��jloe2��|�q�.�O���u�8n|M	ܹ�~���������fc�J.I���>�\ry\"��m�*�G�+?��~�e����ٿ�*GϿOֶ<E�\0 ;����(����zqi�D<~� G_S�?:�� H������S�m�����pg�l\nJ\0r}@?�\0M�/���\0��!\\��ak�]4W�?g�!`����~�������\0�\n�t}55K���B���y�\0k�\0�1��\0�_�\0#�\0���\0�cE�\0���G�\0�S�\0����i�\0~���A�\0A4�\0�f��\0Ƌ�\0A���\0֪�������=���L�ڞns���j��\"�M?�٪���ⰰ��/�R��c9 Z\0���譼;�Ok��$tVe󱴑�:Ph\Zݞ�b�ܤ��!`S�\0��i��H�炙3�QrMF</�1\n��f<rO�J{�GM�n��h���>�\0kxs����\0|-���\0�s�\0�L�\0�cE�\0���G�\0�Q�\0Ƌ�\0A���\0֠Px�F�B�Z�\Z��(�V�e����0BI#2����F4_��\0�����h���\0��\0�j\0�(�Z��w�Am7�\nck��r<�MU�n�(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(���(��($�p\0\0@PY���=�wq�/���L�y����qY�ݞ;��Q�29n�q����>�%s���ȸiOV������Ҁ$�w���?�j����.�?��O����\0f���r���\0��\0̢���\\]�>�,���2qZZ��.���te��<fE+�G�� �,-u+��\\N��\0�T���Ǐ�]�m,�m��t�r��\0,�y�$��U�]�)8 ����3��;�fb�I9$�4�j����-��,�N2F6��Țȟ\\ӟ^���&h�V�%L!*@����<c�\0.�?����@\'\0PG�][������&Py��/��\0����\rZ�!i����6�s�F?Z��m�^�a�&�P��_Č��^����|��a�b&:�����\n\0��5]\n���$���;K�Y���Wڜ�����)����.�\0��\0�F��7Ik\rɁ��l�dpps��\0W��C�M/F77!�|�8�W~��5�V�ƹw`֗2��H� R@��l�@�����Q����21�A���r�ğ��0Slq�s��r�γ|����9�\0��O]��M�1��.�R#\\goO��Ǌ\0��Q���E#˷����]����]�\0��e�\0\\O�z����o�^��+#!����9�ҷ짃W�\r���`���$�1��?��\n/�\ZkXA��Y���?��o����\0�\n�J�s�ȑD��t�9�rO�	��W�i��\\�[\\����\0p��\0!@� $�Ͻ-�x��@w?��Wme&�p�аY8,H����_���\0��\0�B���\0�r���\0��\0�|�0�������j�ޏ�z��F{=J8�xT�h|g��b�\0m��\0�BO��@\Z�:�/���w�ĳ�I!m�#1���Ri��̺��m}#+L�Tɜ�+��o����\0���\0Aj\0㨢�\0��B\'�mP�ߟx>�Al~��x���Q��8�>�m�m���O�\\���>�u���G�Ty��3�{�\0�k�\0�e{�\0>����\0U�\0�WW�\0�C�\0}\n?���\0���\0�B��e{�\0>�����^�\0Ͻ���@���\0���\0�B�.����x&\0H�08>���w����]HY�d �$J�n&772�Wi����q��PtQE\0stQE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0t�QE\0X����cw� 3����O�xZU�u�L!�8��\0׮@��U��;��L�|�`�t��@.��U�v���9e ����cߚ�@��Pᵼ�	�cY�#�\0W<~ �ʵ/�?a���vnܙ1�R|�\08�������߃@����l��Y䑣9\n��N\'�;;i�]�<�d�ǟ¹O)}_��?�O���;�\0!�o���k2�X^��y�J���?�\0o��l��f;�S�it_���5;�����1���[Y�X	�<����3��H�\"��-�ХNL�0�9����\r_�[B��A�A��=�3��s^(��Bu#���G�\\�� �����+��`�88��Q�>�<��<���g\'����\r�䰀�\"��I�������\0?��\0�f�����Oq,����\0&�\"�3,�\Z��Q���t�o�ؕ{�w�p�T9�����\\�[MWP��n�b@���Z\0����\Zkf�$��H�S��=��,��J����~Y�z`��5���߸i�{HCg�y�:�{���姆�R��O�1��H�,Ջ�����>�iv�����Ǩ��fb���Y��b�$�@��b��x�����?Ş{r:���e.�����\0Ƨ\"A�̾��֍��wai-�L����2c\'9*{u��8e*è=E��(������?��cÿ���\0��&���5֡g%������D����*��~�m��#�$p�.�3����@f�}��\\�j�4�.O�5K�[ß���kT���nVy��a2O��T�[j��1$�����xl�i�-�\0�\\_���-\\�H�H�F�]e8��S�jwױ�����6��4Z�(��(�6:|ڔ�w�$\nXy��@�~�\0��(�%��PK=��Xn @�YV�2Y�Eq��`�=����|a}$N��R�}�~�.����Q{@�<�rs\\\rX��//T���)���~&��EP7EPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPG�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6������\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0��',NULL,NULL,NULL,'2012-04-01 17:03:35','2012-04-01 16:57:47',NULL,NULL,0,'2012-04-01 16:57:47','停车场管理员',0,'未知','未知',NULL,'未知','','月租卡',-1,NULL,'无优惠','未知',0),(5,'448760','C入','C出','����\0hikvision��\0C\0\n\n	\n\r\r\"\Z)$+*($\'\'-2@7-0=0\'\'8L9=CEHIH+6OUNFT@GHE��\0C\r\r!!E.\'.EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE��\0@�\0\"\0��\0\0\0\0\0\0\0\0\0\0\0	\n��\0�\0\0\0}\0!1AQa\"q2���#B��R��$3br�	\n\Z%&\'()*456789:CDEFGHIJSTUVWXYZcdefghijstuvwxyz���������������������������������������������������������������������������\0\0\0\0\0\0\0\0	\n��\0�\0\0w\0!1AQaq\"2�B����	#3R�br�\n$4�%�\Z&\'()*56789:CDEFGHIJSTUVWXYZcdefghijstuvwxyz��������������������������������������������������������������������������\0\0\0\0?\0��(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\r��Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�D����\0Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9�(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��:J(��\n��hך���2�������:}\rQ�������y�-����hW��c�ɩ�\Z�}�\\������\0��?��k��������3˷f7�q��0x?Wa�h���\r�=`���]�.��\'�+�Q�*�\0|������\0�������)��A$�|�Ի`6pMcէ��dFG����.pEU��X�os{N���r6\'����P*<�(�G=I��;�1����7|M��h���F#�~��v�����+��[딷�����8���}����r[\"H�L&,��r=?�T��:k��\"4n7eX`�����\rY��۶=R�\0��z��5ix�����g��ݿ;���2k���tM��(J>r�=}([�\Z�}�\\�����Iln^�r�D�Jt�g��O�k������g�n�ol��V/���9s�\0�\0�E\0fS��F�m��znE�ϥ2�	�._�����XY�}�퐙vl����?�V~�o\r��<6�%۵s�|�ֿ������\0�U�GB��/���Q�f|nO7�\0q��g�KP�K�c��۸�q�*f�~��,��{����/�ܽ���!��K����I�_]�^���\\<�Ƙ9|����@ǃ�vV��P\Z�?�5[h$�S�\Z�l�\0ɦ�:ܫ�\\���h�6��\0��1���^�e1��0 ����\0�E�a��x��fI*�}~���@F��X��K�d�w�#`��\Z�	\\[�A��0��]ƨ>���b��	�냅������.������\"�>f�����v����݅�@�yo� ��A[����>��S�oÂ���gX\0 \"�\\��#Et�\0l������\0\n>����\0����QRܴ-u3[�.�?�s��QPލ���mv����݄�s�����S_��j	�._����KT0�\0k^fL=�<�?���M�\0��O��h�\0�B�	���5�����\0��ј��D?�@��lM�Ԕ�#5��B-��6�������5��?o�L�p��;��+\\ާ�\0!K����\0��\n�QE\0stQE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0t�QE\0i����T�3-����	H�W`:��A/��J�-<4a��J�Gn��l��]7���2���T��N&�\0�j�\0�K���j�j�fy-��9U|��=�?\n\0�|D�u˒����\0dVf���~U�������bEKgڲp�A�����\rO�r�����d����Fr���Gc�\0u�*B�:�>��O�N&�\0�j�\0�K�[U�\n��Z����`�H+����M\0e�^��y�J���?�mށ�����k_��O��ɖP~�	�pퟻ��Y�ًw�F }�GP1�u���rz$��ı����r@Hc]�g�Z%��A6ev펃�?ʹ�\n\'��qC �$l��Ѕ4���s�\0��\0쵡4��7H�Sh��vP�Eg���\\�\0��-\\բ{\n�edH�F��\0S�w���?�j����.�?��O����\0f���r���\0��\0φ\'�h�ny*�RNv��s�ؼ7q�n�9�\0J��G�E�6��C)�pGJذ���dwC7|�1���\Z\0����y�}���ͻy8���ZǇ��Nk�{r�>ݭ���V�5wr�k��o�f�i\\���Y�歨�kAmt1�jl�A?ր\'�4)�u����x��|0$�\0\ZԟQ��9��l��(baP g���^��jloe2��|�q�.�O���u�8n|M	ܹ�~���������fc�J.I���>�\ry\"��m�*�G�+?��~�e����ٿ�*GϿOֶ<E�\0 ;����(����zqi�D<~� G_S�?:�� H������S�m�����pg�l\nJ\0r}@?�\0M�/���\0��!\\��ak�]4W�?g�!`����~�������\0�\n�t}55K���B���y�\0k�\0�1��\0�_�\0#�\0���\0�cE�\0���G�\0�S�\0����i�\0~���A�\0A4�\0�f��\0Ƌ�\0A���\0֪�������=���L�ڞns���j��\"�M?�٪���ⰰ��/�R��c9 Z\0���譼;�Ok��$tVe󱴑�:Ph\Zݞ�b�ܤ��!`S�\0��i��H�炙3�QrMF</�1\n��f<rO�J{�GM�n��h���>�\0kxs����\0|-���\0�s�\0�L�\0�cE�\0���G�\0�Q�\0Ƌ�\0A���\0֠Px�F�B�Z�\Z��(�V�e����0BI#2����F4_��\0�����h���\0��\0�j\0�(�Z��w�Am7�\nck��r<�MU�n�(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(���(��($�p\0\0@PY���=�wq�/���L�y����qY�ݞ;��Q�29n�q����>�%s���ȸiOV������Ҁ$�w���?�j����.�?��O����\0f���r���\0��\0̢���\\]�>�,���2qZZ��.���te��<fE+�G�� �,-u+��\\N��\0�T���Ǐ�]�m,�m��t�r��\0,�y�$��U�]�)8 ����3��;�fb�I9$�4�j����-��,�N2F6��Țȟ\\ӟ^���&h�V�%L!*@����<c�\0.�?����@\'\0PG�][������&Py��/��\0����\rZ�!i����6�s�F?Z��m�^�a�&�P��_Č��^����|��a�b&:�����\n\0��5]\n���$���;K�Y���Wڜ�����)����.�\0��\0�F��7Ik\rɁ��l�dpps��\0W��C�M/F77!�|�8�W~��5�V�ƹw`֗2��H� R@��l�@�����Q����21�A���r�ğ��0Slq�s��r�γ|����9�\0��O]��M�1��.�R#\\goO��Ǌ\0��Q���E#˷����]����]�\0��e�\0\\O�z����o�^��+#!����9�ҷ짃W�\r���`���$�1��?��\n/�\ZkXA��Y���?��o����\0�\n�J�s�ȑD��t�9�rO�	��W�i��\\�[\\����\0p��\0!@� $�Ͻ-�x��@w?��Wme&�p�аY8,H����_���\0��\0�B���\0�r���\0��\0�|�0�������j�ޏ�z��F{=J8�xT�h|g��b�\0m��\0�BO��@\Z�:�/���w�ĳ�I!m�#1���Ri��̺��m}#+L�Tɜ�+��o����\0���\0Aj\0㨢�\0��B\'�mP�ߟx>�Al~��x���Q��8�>�m�m���O�\\���>�u���G�Ty��3�{�\0�k�\0�e{�\0>����\0U�\0�WW�\0�C�\0}\n?���\0���\0�B��e{�\0>�����^�\0Ͻ���@���\0���\0�B�.����x&\0H�08>���w����]HY�d �$J�n&772�Wi����q��PtQE\0stQE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0t�QE\0X����cw� 3����O�xZU�u�L!�8��\0׮@��U��;��L�|�`�t��@.��U�v���9e ����cߚ�@��Pᵼ�	�cY�#�\0W<~ �ʵ/�?a���vnܙ1�R|�\08�������߃@����l��Y䑣9\n��N\'�;;i�]�<�d�ǟ¹O)}_��?�O���;�\0!�o���k2�X^��y�J���?�\0o��l��f;�S�it_���5;�����1���[Y�X	�<����3��H�\"��-�ХNL�0�9����\r_�[B��A�A��=�3��s^(��Bu#���G�\\�� �����+��`�88��Q�>�<��<���g\'����\r�䰀�\"��I�������\0?��\0�f�����Oq,����\0&�\"�3,�\Z��Q���t�o�ؕ{�w�p�T9�����\\�[MWP��n�b@���Z\0����\Zkf�$��H�S��=��,��J����~Y�z`��5���߸i�{HCg�y�:�{���姆�R��O�1��H�,Ջ�����>�iv�����Ǩ��fb���Y��b�$�@��b��x�����?Ş{r:���e.�����\0Ƨ\"A�̾��֍��wai-�L����2c\'9*{u��8e*è=E��(������?��cÿ���\0��&���5֡g%������D����*��~�m��#�$p�.�3����@f�}��\\�j�4�.O�5K�[ß���kT���nVy��a2O��T�[j��1$�����xl�i�-�\0�\\_���-\\�H�H�F�]e8��S�jwױ�����6��4Z�(��(�6:|ڔ�w�$\nXy��@�~�\0��(�%��PK=��Xn @�YV�2Y�Eq��`�=����|a}$N��R�}�~�.����Q{@�<�rs\\\rX��//T���)���~&��EP7EPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPG�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6������\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0��',NULL,NULL,NULL,'����\0hikvision��\0C\0\n\n	\n\r\r\"\Z)$+*($\'\'-2@7-0=0\'\'8L9=CEHIH+6OUNFT@GHE��\0C\r\r!!E.\'.EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE��\0@�\0\"\0��\0\0\0\0\0\0\0\0\0\0\0	\n��\0�\0\0\0}\0!1AQa\"q2���#B��R��$3br�	\n\Z%&\'()*456789:CDEFGHIJSTUVWXYZcdefghijstuvwxyz���������������������������������������������������������������������������\0\0\0\0\0\0\0\0	\n��\0�\0\0w\0!1AQaq\"2�B����	#3R�br�\n$4�%�\Z&\'()*56789:CDEFGHIJSTUVWXYZcdefghijstuvwxyz��������������������������������������������������������������������������\0\0\0\0?\0��(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\r��Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�D����\0Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9�(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��:J(��\n��hך���2�������:}\rQ�������y�-����hW��c�ɩ�\Z�}�\\������\0��?��k��������3˷f7�q��0x?Wa�h���\r�=`���]�.��\'�+�Q�*�\0|������\0�������)��A$�|�Ի`6pMcէ��dFG����.pEU��X�os{N���r6\'����P*<�(�G=I��;�1����7|M��h���F#�~��v�����+��[딷�����8���}����r[\"H�L&,��r=?�T��:k��\"4n7eX`�����\rY��۶=R�\0��z��5ix�����g��ݿ;���2k���tM��(J>r�=}([�\Z�}�\\�����Iln^�r�D�Jt�g��O�k������g�n�ol��V/���9s�\0�\0�E\0fS��F�m��znE�ϥ2�	�._�����XY�}�퐙vl����?�V~�o\r��<6�%۵s�|�ֿ������\0�U�GB��/���Q�f|nO7�\0q��g�KP�K�c��۸�q�*f�~��,��{����/�ܽ���!��K����I�_]�^���\\<�Ƙ9|����@ǃ�vV��P\Z�?�5[h$�S�\Z�l�\0ɦ�:ܫ�\\���h�6��\0��1���^�e1��0 ����\0�E�a��x��fI*�}~���@F��X��K�d�w�#`��\Z�	\\[�A��0��]ƨ>���b��	�냅������.������\"�>f�����v����݅�@�yo� ��A[����>��S�oÂ���gX\0 \"�\\��#Et�\0l������\0\n>����\0����QRܴ-u3[�.�?�s��QPލ���mv����݄�s�����S_��j	�._����KT0�\0k^fL=�<�?���M�\0��O��h�\0�B�	���5�����\0��ј��D?�@��lM�Ԕ�#5��B-��6�������5��?o�L�p��;��+\\ާ�\0!K����\0��\n�QE\0stQE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0t�QE\0i����T�3-����	H�W`:��A/��J�-<4a��J�Gn��l��]7���2���T��N&�\0�j�\0�K���j�j�fy-��9U|��=�?\n\0�|D�u˒����\0dVf���~U�������bEKgڲp�A�����\rO�r�����d����Fr���Gc�\0u�*B�:�>��O�N&�\0�j�\0�K�[U�\n��Z����`�H+����M\0e�^��y�J���?�mށ�����k_��O��ɖP~�	�pퟻ��Y�ًw�F }�GP1�u���rz$��ı����r@Hc]�g�Z%��A6ev펃�?ʹ�\n\'��qC �$l��Ѕ4���s�\0��\0쵡4��7H�Sh��vP�Eg���\\�\0��-\\բ{\n�edH�F��\0S�w���?�j����.�?��O����\0f���r���\0��\0φ\'�h�ny*�RNv��s�ؼ7q�n�9�\0J��G�E�6��C)�pGJذ���dwC7|�1���\Z\0����y�}���ͻy8���ZǇ��Nk�{r�>ݭ���V�5wr�k��o�f�i\\���Y�歨�kAmt1�jl�A?ր\'�4)�u����x��|0$�\0\ZԟQ��9��l��(baP g���^��jloe2��|�q�.�O���u�8n|M	ܹ�~���������fc�J.I���>�\ry\"��m�*�G�+?��~�e����ٿ�*GϿOֶ<E�\0 ;����(����zqi�D<~� G_S�?:�� H������S�m�����pg�l\nJ\0r}@?�\0M�/���\0��!\\��ak�]4W�?g�!`����~�������\0�\n�t}55K���B���y�\0k�\0�1��\0�_�\0#�\0���\0�cE�\0���G�\0�S�\0����i�\0~���A�\0A4�\0�f��\0Ƌ�\0A���\0֪�������=���L�ڞns���j��\"�M?�٪���ⰰ��/�R��c9 Z\0���譼;�Ok��$tVe󱴑�:Ph\Zݞ�b�ܤ��!`S�\0��i��H�炙3�QrMF</�1\n��f<rO�J{�GM�n��h���>�\0kxs����\0|-���\0�s�\0�L�\0�cE�\0���G�\0�Q�\0Ƌ�\0A���\0֠Px�F�B�Z�\Z��(�V�e����0BI#2����F4_��\0�����h���\0��\0�j\0�(�Z��w�Am7�\nck��r<�MU�n�(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(���(��($�p\0\0@PY���=�wq�/���L�y����qY�ݞ;��Q�29n�q����>�%s���ȸiOV������Ҁ$�w���?�j����.�?��O����\0f���r���\0��\0̢���\\]�>�,���2qZZ��.���te��<fE+�G�� �,-u+��\\N��\0�T���Ǐ�]�m,�m��t�r��\0,�y�$��U�]�)8 ����3��;�fb�I9$�4�j����-��,�N2F6��Țȟ\\ӟ^���&h�V�%L!*@����<c�\0.�?����@\'\0PG�][������&Py��/��\0����\rZ�!i����6�s�F?Z��m�^�a�&�P��_Č��^����|��a�b&:�����\n\0��5]\n���$���;K�Y���Wڜ�����)����.�\0��\0�F��7Ik\rɁ��l�dpps��\0W��C�M/F77!�|�8�W~��5�V�ƹw`֗2��H� R@��l�@�����Q����21�A���r�ğ��0Slq�s��r�γ|����9�\0��O]��M�1��.�R#\\goO��Ǌ\0��Q���E#˷����]����]�\0��e�\0\\O�z����o�^��+#!����9�ҷ짃W�\r���`���$�1��?��\n/�\ZkXA��Y���?��o����\0�\n�J�s�ȑD��t�9�rO�	��W�i��\\�[\\����\0p��\0!@� $�Ͻ-�x��@w?��Wme&�p�аY8,H����_���\0��\0�B���\0�r���\0��\0�|�0�������j�ޏ�z��F{=J8�xT�h|g��b�\0m��\0�BO��@\Z�:�/���w�ĳ�I!m�#1���Ri��̺��m}#+L�Tɜ�+��o����\0���\0Aj\0㨢�\0��B\'�mP�ߟx>�Al~��x���Q��8�>�m�m���O�\\���>�u���G�Ty��3�{�\0�k�\0�e{�\0>����\0U�\0�WW�\0�C�\0}\n?���\0���\0�B��e{�\0>�����^�\0Ͻ���@���\0���\0�B�.����x&\0H�08>���w����]HY�d �$J�n&772�Wi����q��PtQE\0stQE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0t�QE\0X����cw� 3����O�xZU�u�L!�8��\0׮@��U��;��L�|�`�t��@.��U�v���9e ����cߚ�@��Pᵼ�	�cY�#�\0W<~ �ʵ/�?a���vnܙ1�R|�\08�������߃@����l��Y䑣9\n��N\'�;;i�]�<�d�ǟ¹O)}_��?�O���;�\0!�o���k2�X^��y�J���?�\0o��l��f;�S�it_���5;�����1���[Y�X	�<����3��H�\"��-�ХNL�0�9����\r_�[B��A�A��=�3��s^(��Bu#���G�\\�� �����+��`�88��Q�>�<��<���g\'����\r�䰀�\"��I�������\0?��\0�f�����Oq,����\0&�\"�3,�\Z��Q���t�o�ؕ{�w�p�T9�����\\�[MWP��n�b@���Z\0����\Zkf�$��H�S��=��,��J����~Y�z`��5���߸i�{HCg�y�:�{���姆�R��O�1��H�,Ջ�����>�iv�����Ǩ��fb���Y��b�$�@��b��x�����?Ş{r:���e.�����\0Ƨ\"A�̾��֍��wai-�L����2c\'9*{u��8e*è=E��(������?��cÿ���\0��&���5֡g%������D����*��~�m��#�$p�.�3����@f�}��\\�j�4�.O�5K�[ß���kT���nVy��a2O��T�[j��1$�����xl�i�-�\0�\\_���-\\�H�H�F�]e8��S�jwױ�����6��4Z�(��(�6:|ڔ�w�$\nXy��@�~�\0��(�%��PK=��Xn @�YV�2Y�Eq��`�=����|a}$N��R�}�~�.����Q{@�<�rs\\\rX��//T���)���~&��EP7EPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPG�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6������\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0��',NULL,NULL,NULL,'2012-04-01 16:57:13','2012-04-01 16:57:49',NULL,NULL,0,'2012-04-01 16:57:49','停车场管理员',0,'未知','未知',NULL,'未知','','月租卡',-1,NULL,'无优惠','未知',0),(6,'447551','C入',NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,'2012-04-01 16:57:33',NULL,NULL,NULL,NULL,NULL,NULL,NULL,'未知','未知',NULL,'未知',NULL,'月租卡',-1,NULL,'无优惠','未知',0),(7,'448760','C入',NULL,'����\0hikvision��\0C\0\n\n	\n\r\r\"\Z)$+*($\'\'-2@7-0=0\'\'8L9=CEHIH+6OUNFT@GHE��\0C\r\r!!E.\'.EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE��\0@�\0\"\0��\0\0\0\0\0\0\0\0\0\0\0	\n��\0�\0\0\0}\0!1AQa\"q2���#B��R��$3br�	\n\Z%&\'()*456789:CDEFGHIJSTUVWXYZcdefghijstuvwxyz���������������������������������������������������������������������������\0\0\0\0\0\0\0\0	\n��\0�\0\0w\0!1AQaq\"2�B����	#3R�br�\n$4�%�\Z&\'()*56789:CDEFGHIJSTUVWXYZcdefghijstuvwxyz��������������������������������������������������������������������������\0\0\0\0?\0��(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\r��Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�D����\0Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9�(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��:J(��\n��hך���2�������:}\rQ�������y�-����hW��c�ɩ�\Z�}�\\������\0��?��k��������3˷f7�q��0x?Wa�h���\r�=`���]�.��\'�+�Q�*�\0|������\0�������)��A$�|�Ի`6pMcէ��dFG����.pEU��X�os{N���r6\'����P*<�(�G=I��;�1����7|M��h���F#�~��v�����+��[딷�����8���}����r[\"H�L&,��r=?�T��:k��\"4n7eX`�����\rY��۶=R�\0��z��5ix�����g��ݿ;���2k���tM��(J>r�=}([�\Z�}�\\�����Iln^�r�D�Jt�g��O�k������g�n�ol��V/���9s�\0�\0�E\0fS��F�m��znE�ϥ2�	�._�����XY�}�퐙vl����?�V~�o\r��<6�%۵s�|�ֿ������\0�U�GB��/���Q�f|nO7�\0q��g�KP�K�c��۸�q�*f�~��,��{����/�ܽ���!��K����I�_]�^���\\<�Ƙ9|����@ǃ�vV��P\Z�?�5[h$�S�\Z�l�\0ɦ�:ܫ�\\���h�6��\0��1���^�e1��0 ����\0�E�a��x��fI*�}~���@F��X��K�d�w�#`��\Z�	\\[�A��0��]ƨ>���b��	�냅������.������\"�>f�����v����݅�@�yo� ��A[����>��S�oÂ���gX\0 \"�\\��#Et�\0l������\0\n>����\0����QRܴ-u3[�.�?�s��QPލ���mv����݄�s�����S_��j	�._����KT0�\0k^fL=�<�?���M�\0��O��h�\0�B�	���5�����\0��ј��D?�@��lM�Ԕ�#5��B-��6�������5��?o�L�p��;��+\\ާ�\0!K����\0��\n�QE\0stQE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0t�QE\0i����T�3-����	H�W`:��A/��J�-<4a��J�Gn��l��]7���2���T��N&�\0�j�\0�K���j�j�fy-��9U|��=�?\n\0�|D�u˒����\0dVf���~U�������bEKgڲp�A�����\rO�r�����d����Fr���Gc�\0u�*B�:�>��O�N&�\0�j�\0�K�[U�\n��Z����`�H+����M\0e�^��y�J���?�mށ�����k_��O��ɖP~�	�pퟻ��Y�ًw�F }�GP1�u���rz$��ı����r@Hc]�g�Z%��A6ev펃�?ʹ�\n\'��qC �$l��Ѕ4���s�\0��\0쵡4��7H�Sh��vP�Eg���\\�\0��-\\բ{\n�edH�F��\0S�w���?�j����.�?��O����\0f���r���\0��\0φ\'�h�ny*�RNv��s�ؼ7q�n�9�\0J��G�E�6��C)�pGJذ���dwC7|�1���\Z\0����y�}���ͻy8���ZǇ��Nk�{r�>ݭ���V�5wr�k��o�f�i\\���Y�歨�kAmt1�jl�A?ր\'�4)�u����x��|0$�\0\ZԟQ��9��l��(baP g���^��jloe2��|�q�.�O���u�8n|M	ܹ�~���������fc�J.I���>�\ry\"��m�*�G�+?��~�e����ٿ�*GϿOֶ<E�\0 ;����(����zqi�D<~� G_S�?:�� H������S�m�����pg�l\nJ\0r}@?�\0M�/���\0��!\\��ak�]4W�?g�!`����~�������\0�\n�t}55K���B���y�\0k�\0�1��\0�_�\0#�\0���\0�cE�\0���G�\0�S�\0����i�\0~���A�\0A4�\0�f��\0Ƌ�\0A���\0֪�������=���L�ڞns���j��\"�M?�٪���ⰰ��/�R��c9 Z\0���譼;�Ok��$tVe󱴑�:Ph\Zݞ�b�ܤ��!`S�\0��i��H�炙3�QrMF</�1\n��f<rO�J{�GM�n��h���>�\0kxs����\0|-���\0�s�\0�L�\0�cE�\0���G�\0�Q�\0Ƌ�\0A���\0֠Px�F�B�Z�\Z��(�V�e����0BI#2����F4_��\0�����h���\0��\0�j\0�(�Z��w�Am7�\nck��r<�MU�n�(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(���(��($�p\0\0@PY���=�wq�/���L�y����qY�ݞ;��Q�29n�q����>�%s���ȸiOV������Ҁ$�w���?�j����.�?��O����\0f���r���\0��\0̢���\\]�>�,���2qZZ��.���te��<fE+�G�� �,-u+��\\N��\0�T���Ǐ�]�m,�m��t�r��\0,�y�$��U�]�)8 ����3��;�fb�I9$�4�j����-��,�N2F6��Țȟ\\ӟ^���&h�V�%L!*@����<c�\0.�?����@\'\0PG�][������&Py��/��\0����\rZ�!i����6�s�F?Z��m�^�a�&�P��_Č��^����|��a�b&:�����\n\0��5]\n���$���;K�Y���Wڜ�����)����.�\0��\0�F��7Ik\rɁ��l�dpps��\0W��C�M/F77!�|�8�W~��5�V�ƹw`֗2��H� R@��l�@�����Q����21�A���r�ğ��0Slq�s��r�γ|����9�\0��O]��M�1��.�R#\\goO��Ǌ\0��Q���E#˷����]����]�\0��e�\0\\O�z����o�^��+#!����9�ҷ짃W�\r���`���$�1��?��\n/�\ZkXA��Y���?��o����\0�\n�J�s�ȑD��t�9�rO�	��W�i��\\�[\\����\0p��\0!@� $�Ͻ-�x��@w?��Wme&�p�аY8,H����_���\0��\0�B���\0�r���\0��\0�|�0�������j�ޏ�z��F{=J8�xT�h|g��b�\0m��\0�BO��@\Z�:�/���w�ĳ�I!m�#1���Ri��̺��m}#+L�Tɜ�+��o����\0���\0Aj\0㨢�\0��B\'�mP�ߟx>�Al~��x���Q��8�>�m�m���O�\\���>�u���G�Ty��3�{�\0�k�\0�e{�\0>����\0U�\0�WW�\0�C�\0}\n?���\0���\0�B��e{�\0>�����^�\0Ͻ���@���\0���\0�B�.����x&\0H�08>���w����]HY�d �$J�n&772�Wi����q��PtQE\0stQE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0t�QE\0X����cw� 3����O�xZU�u�L!�8��\0׮@��U��;��L�|�`�t��@.��U�v���9e ����cߚ�@��Pᵼ�	�cY�#�\0W<~ �ʵ/�?a���vnܙ1�R|�\08�������߃@����l��Y䑣9\n��N\'�;;i�]�<�d�ǟ¹O)}_��?�O���;�\0!�o���k2�X^��y�J���?�\0o��l��f;�S�it_���5;�����1���[Y�X	�<����3��H�\"��-�ХNL�0�9����\r_�[B��A�A��=�3��s^(��Bu#���G�\\�� �����+��`�88��Q�>�<��<���g\'����\r�䰀�\"��I�������\0?��\0�f�����Oq,����\0&�\"�3,�\Z��Q���t�o�ؕ{�w�p�T9�����\\�[MWP��n�b@���Z\0����\Zkf�$��H�S��=��,��J����~Y�z`��5���߸i�{HCg�y�:�{���姆�R��O�1��H�,Ջ�����>�iv�����Ǩ��fb���Y��b�$�@��b��x�����?Ş{r:���e.�����\0Ƨ\"A�̾��֍��wai-�L����2c\'9*{u��8e*è=E��(������?��cÿ���\0��&���5֡g%������D����*��~�m��#�$p�.�3����@f�}��\\�j�4�.O�5K�[ß���kT���nVy��a2O��T�[j��1$�����xl�i�-�\0�\\_���-\\�H�H�F�]e8��S�jwױ�����6��4Z�(��(�6:|ڔ�w�$\nXy��@�~�\0��(�%��PK=��Xn @�YV�2Y�Eq��`�=����|a}$N��R�}�~�.����Q{@�<�rs\\\rX��//T���)���~&��EP7EPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPG�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6������\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0��',NULL,NULL,NULL,NULL,NULL,NULL,NULL,'2012-04-01 17:00:31',NULL,NULL,NULL,NULL,NULL,NULL,NULL,'未知','未知',NULL,'未知',NULL,'月租卡',-1,NULL,'无优惠','未知',0),(8,'447551','C入',NULL,'����\0hikvision��\0C\0\n\n	\n\r\r\"\Z)$+*($\'\'-2@7-0=0\'\'8L9=CEHIH+6OUNFT@GHE��\0C\r\r!!E.\'.EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE��\0@�\0\"\0��\0\0\0\0\0\0\0\0\0\0\0	\n��\0�\0\0\0}\0!1AQa\"q2���#B��R��$3br�	\n\Z%&\'()*456789:CDEFGHIJSTUVWXYZcdefghijstuvwxyz���������������������������������������������������������������������������\0\0\0\0\0\0\0\0	\n��\0�\0\0w\0!1AQaq\"2�B����	#3R�br�\n$4�%�\Z&\'()*56789:CDEFGHIJSTUVWXYZcdefghijstuvwxyz��������������������������������������������������������������������������\0\0\0\0?\0��(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\r��Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�D����\0Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9�(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��:J(��\n��hך���2�������:}\rQ�������y�-����hW��c�ɩ�\Z�}�\\������\0��?��k��������3˷f7�q��0x?Wa�h���\r�=`���]�.��\'�+�Q�*�\0|������\0�������)��A$�|�Ի`6pMcէ��dFG����.pEU��X�os{N���r6\'����P*<�(�G=I��;�1����7|M��h���F#�~��v�����+��[딷�����8���}����r[\"H�L&,��r=?�T��:k��\"4n7eX`�����\rY��۶=R�\0��z��5ix�����g��ݿ;���2k���tM��(J>r�=}([�\Z�}�\\�����Iln^�r�D�Jt�g��O�k������g�n�ol��V/���9s�\0�\0�E\0fS��F�m��znE�ϥ2�	�._�����XY�}�퐙vl����?�V~�o\r��<6�%۵s�|�ֿ������\0�U�GB��/���Q�f|nO7�\0q��g�KP�K�c��۸�q�*f�~��,��{����/�ܽ���!��K����I�_]�^���\\<�Ƙ9|����@ǃ�vV��P\Z�?�5[h$�S�\Z�l�\0ɦ�:ܫ�\\���h�6��\0��1���^�e1��0 ����\0�E�a��x��fI*�}~���@F��X��K�d�w�#`��\Z�	\\[�A��0��]ƨ>���b��	�냅������.������\"�>f�����v����݅�@�yo� ��A[����>��S�oÂ���gX\0 \"�\\��#Et�\0l������\0\n>����\0����QRܴ-u3[�.�?�s��QPލ���mv����݄�s�����S_��j	�._����KT0�\0k^fL=�<�?���M�\0��O��h�\0�B�	���5�����\0��ј��D?�@��lM�Ԕ�#5��B-��6�������5��?o�L�p��;��+\\ާ�\0!K����\0��\n�QE\0stQE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0t�QE\0i����T�3-����	H�W`:��A/��J�-<4a��J�Gn��l��]7���2���T��N&�\0�j�\0�K���j�j�fy-��9U|��=�?\n\0�|D�u˒����\0dVf���~U�������bEKgڲp�A�����\rO�r�����d����Fr���Gc�\0u�*B�:�>��O�N&�\0�j�\0�K�[U�\n��Z����`�H+����M\0e�^��y�J���?�mށ�����k_��O��ɖP~�	�pퟻ��Y�ًw�F }�GP1�u���rz$��ı����r@Hc]�g�Z%��A6ev펃�?ʹ�\n\'��qC �$l��Ѕ4���s�\0��\0쵡4��7H�Sh��vP�Eg���\\�\0��-\\բ{\n�edH�F��\0S�w���?�j����.�?��O����\0f���r���\0��\0φ\'�h�ny*�RNv��s�ؼ7q�n�9�\0J��G�E�6��C)�pGJذ���dwC7|�1���\Z\0����y�}���ͻy8���ZǇ��Nk�{r�>ݭ���V�5wr�k��o�f�i\\���Y�歨�kAmt1�jl�A?ր\'�4)�u����x��|0$�\0\ZԟQ��9��l��(baP g���^��jloe2��|�q�.�O���u�8n|M	ܹ�~���������fc�J.I���>�\ry\"��m�*�G�+?��~�e����ٿ�*GϿOֶ<E�\0 ;����(����zqi�D<~� G_S�?:�� H������S�m�����pg�l\nJ\0r}@?�\0M�/���\0��!\\��ak�]4W�?g�!`����~�������\0�\n�t}55K���B���y�\0k�\0�1��\0�_�\0#�\0���\0�cE�\0���G�\0�S�\0����i�\0~���A�\0A4�\0�f��\0Ƌ�\0A���\0֪�������=���L�ڞns���j��\"�M?�٪���ⰰ��/�R��c9 Z\0���譼;�Ok��$tVe󱴑�:Ph\Zݞ�b�ܤ��!`S�\0��i��H�炙3�QrMF</�1\n��f<rO�J{�GM�n��h���>�\0kxs����\0|-���\0�s�\0�L�\0�cE�\0���G�\0�Q�\0Ƌ�\0A���\0֠Px�F�B�Z�\Z��(�V�e����0BI#2����F4_��\0�����h���\0��\0�j\0�(�Z��w�Am7�\nck��r<�MU�n�(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(���(��($�p\0\0@PY���=�wq�/���L�y����qY�ݞ;��Q�29n�q����>�%s���ȸiOV������Ҁ$�w���?�j����.�?��O����\0f���r���\0��\0̢���\\]�>�,���2qZZ��.���te��<fE+�G�� �,-u+��\\N��\0�T���Ǐ�]�m,�m��t�r��\0,�y�$��U�]�)8 ����3��;�fb�I9$�4�j����-��,�N2F6��Țȟ\\ӟ^���&h�V�%L!*@����<c�\0.�?����@\'\0PG�][������&Py��/��\0����\rZ�!i����6�s�F?Z��m�^�a�&�P��_Č��^����|��a�b&:�����\n\0��5]\n���$���;K�Y���Wڜ�����)����.�\0��\0�F��7Ik\rɁ��l�dpps��\0W��C�M/F77!�|�8�W~��5�V�ƹw`֗2��H� R@��l�@�����Q����21�A���r�ğ��0Slq�s��r�γ|����9�\0��O]��M�1��.�R#\\goO��Ǌ\0��Q���E#˷����]����]�\0��e�\0\\O�z����o�^��+#!����9�ҷ짃W�\r���`���$�1��?��\n/�\ZkXA��Y���?��o����\0�\n�J�s�ȑD��t�9�rO�	��W�i��\\�[\\����\0p��\0!@� $�Ͻ-�x��@w?��Wme&�p�аY8,H����_���\0��\0�B���\0�r���\0��\0�|�0�������j�ޏ�z��F{=J8�xT�h|g��b�\0m��\0�BO��@\Z�:�/���w�ĳ�I!m�#1���Ri��̺��m}#+L�Tɜ�+��o����\0���\0Aj\0㨢�\0��B\'�mP�ߟx>�Al~��x���Q��8�>�m�m���O�\\���>�u���G�Ty��3�{�\0�k�\0�e{�\0>����\0U�\0�WW�\0�C�\0}\n?���\0���\0�B��e{�\0>�����^�\0Ͻ���@���\0���\0�B�.����x&\0H�08>���w����]HY�d �$J�n&772�Wi����q��PtQE\0stQE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0t�QE\0X����cw� 3����O�xZU�u�L!�8��\0׮@��U��;��L�|�`�t��@.��U�v���9e ����cߚ�@��Pᵼ�	�cY�#�\0W<~ �ʵ/�?a���vnܙ1�R|�\08�������߃@����l��Y䑣9\n��N\'�;;i�]�<�d�ǟ¹O)}_��?�O���;�\0!�o���k2�X^��y�J���?�\0o��l��f;�S�it_���5;�����1���[Y�X	�<����3��H�\"��-�ХNL�0�9����\r_�[B��A�A��=�3��s^(��Bu#���G�\\�� �����+��`�88��Q�>�<��<���g\'����\r�䰀�\"��I�������\0?��\0�f�����Oq,����\0&�\"�3,�\Z��Q���t�o�ؕ{�w�p�T9�����\\�[MWP��n�b@���Z\0����\Zkf�$��H�S��=��,��J����~Y�z`��5���߸i�{HCg�y�:�{���姆�R��O�1��H�,Ջ�����>�iv�����Ǩ��fb���Y��b�$�@��b��x�����?Ş{r:���e.�����\0Ƨ\"A�̾��֍��wai-�L����2c\'9*{u��8e*è=E��(������?��cÿ���\0��&���5֡g%������D����*��~�m��#�$p�.�3����@f�}��\\�j�4�.O�5K�[ß���kT���nVy��a2O��T�[j��1$�����xl�i�-�\0�\\_���-\\�H�H�F�]e8��S�jwױ�����6��4Z�(��(�6:|ڔ�w�$\nXy��@�~�\0��(�%��PK=��Xn @�YV�2Y�Eq��`�=����|a}$N��R�}�~�.����Q{@�<�rs\\\rX��//T���)���~&��EP7EPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPG�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6������\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0��',NULL,NULL,NULL,NULL,NULL,NULL,NULL,'2012-04-01 17:05:48',NULL,NULL,NULL,NULL,NULL,NULL,NULL,'未知','未知',NULL,'未知',NULL,'月租卡',-1,NULL,'无优惠','未知',0),(9,'447520','C入','C出','����\0hikvision��\0C\0\n\n	\n\r\r\"\Z)$+*($\'\'-2@7-0=0\'\'8L9=CEHIH+6OUNFT@GHE��\0C\r\r!!E.\'.EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE��\0@�\0\"\0��\0\0\0\0\0\0\0\0\0\0\0	\n��\0�\0\0\0}\0!1AQa\"q2���#B��R��$3br�	\n\Z%&\'()*456789:CDEFGHIJSTUVWXYZcdefghijstuvwxyz���������������������������������������������������������������������������\0\0\0\0\0\0\0\0	\n��\0�\0\0w\0!1AQaq\"2�B����	#3R�br�\n$4�%�\Z&\'()*56789:CDEFGHIJSTUVWXYZcdefghijstuvwxyz��������������������������������������������������������������������������\0\0\0\0?\0��(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\r��Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�D����\0Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9�(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��:J(��\n��hך���2�������:}\rQ�������y�-����hW��c�ɩ�\Z�}�\\������\0��?��k��������3˷f7�q��0x?Wa�h���\r�=`���]�.��\'�+�Q�*�\0|������\0�������)��A$�|�Ի`6pMcէ��dFG����.pEU��X�os{N���r6\'����P*<�(�G=I��;�1����7|M��h���F#�~��v�����+��[딷�����8���}����r[\"H�L&,��r=?�T��:k��\"4n7eX`�����\rY��۶=R�\0��z��5ix�����g��ݿ;���2k���tM��(J>r�=}([�\Z�}�\\�����Iln^�r�D�Jt�g��O�k������g�n�ol��V/���9s�\0�\0�E\0fS��F�m��znE�ϥ2�	�._�����XY�}�퐙vl����?�V~�o\r��<6�%۵s�|�ֿ������\0�U�GB��/���Q�f|nO7�\0q��g�KP�K�c��۸�q�*f�~��,��{����/�ܽ���!��K����I�_]�^���\\<�Ƙ9|����@ǃ�vV��P\Z�?�5[h$�S�\Z�l�\0ɦ�:ܫ�\\���h�6��\0��1���^�e1��0 ����\0�E�a��x��fI*�}~���@F��X��K�d�w�#`��\Z�	\\[�A��0��]ƨ>���b��	�냅������.������\"�>f�����v����݅�@�yo� ��A[����>��S�oÂ���gX\0 \"�\\��#Et�\0l������\0\n>����\0����QRܴ-u3[�.�?�s��QPލ���mv����݄�s�����S_��j	�._����KT0�\0k^fL=�<�?���M�\0��O��h�\0�B�	���5�����\0��ј��D?�@��lM�Ԕ�#5��B-��6�������5��?o�L�p��;��+\\ާ�\0!K����\0��\n�QE\0stQE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0t�QE\0i����T�3-����	H�W`:��A/��J�-<4a��J�Gn��l��]7���2���T��N&�\0�j�\0�K���j�j�fy-��9U|��=�?\n\0�|D�u˒����\0dVf���~U�������bEKgڲp�A�����\rO�r�����d����Fr���Gc�\0u�*B�:�>��O�N&�\0�j�\0�K�[U�\n��Z����`�H+����M\0e�^��y�J���?�mށ�����k_��O��ɖP~�	�pퟻ��Y�ًw�F }�GP1�u���rz$��ı����r@Hc]�g�Z%��A6ev펃�?ʹ�\n\'��qC �$l��Ѕ4���s�\0��\0쵡4��7H�Sh��vP�Eg���\\�\0��-\\բ{\n�edH�F��\0S�w���?�j����.�?��O����\0f���r���\0��\0φ\'�h�ny*�RNv��s�ؼ7q�n�9�\0J��G�E�6��C)�pGJذ���dwC7|�1���\Z\0����y�}���ͻy8���ZǇ��Nk�{r�>ݭ���V�5wr�k��o�f�i\\���Y�歨�kAmt1�jl�A?ր\'�4)�u����x��|0$�\0\ZԟQ��9��l��(baP g���^��jloe2��|�q�.�O���u�8n|M	ܹ�~���������fc�J.I���>�\ry\"��m�*�G�+?��~�e����ٿ�*GϿOֶ<E�\0 ;����(����zqi�D<~� G_S�?:�� H������S�m�����pg�l\nJ\0r}@?�\0M�/���\0��!\\��ak�]4W�?g�!`����~�������\0�\n�t}55K���B���y�\0k�\0�1��\0�_�\0#�\0���\0�cE�\0���G�\0�S�\0����i�\0~���A�\0A4�\0�f��\0Ƌ�\0A���\0֪�������=���L�ڞns���j��\"�M?�٪���ⰰ��/�R��c9 Z\0���譼;�Ok��$tVe󱴑�:Ph\Zݞ�b�ܤ��!`S�\0��i��H�炙3�QrMF</�1\n��f<rO�J{�GM�n��h���>�\0kxs����\0|-���\0�s�\0�L�\0�cE�\0���G�\0�Q�\0Ƌ�\0A���\0֠Px�F�B�Z�\Z��(�V�e����0BI#2����F4_��\0�����h���\0��\0�j\0�(�Z��w�Am7�\nck��r<�MU�n�(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(���(��($�p\0\0@PY���=�wq�/���L�y����qY�ݞ;��Q�29n�q����>�%s���ȸiOV������Ҁ$�w���?�j����.�?��O����\0f���r���\0��\0̢���\\]�>�,���2qZZ��.���te��<fE+�G�� �,-u+��\\N��\0�T���Ǐ�]�m,�m��t�r��\0,�y�$��U�]�)8 ����3��;�fb�I9$�4�j����-��,�N2F6��Țȟ\\ӟ^���&h�V�%L!*@����<c�\0.�?����@\'\0PG�][������&Py��/��\0����\rZ�!i����6�s�F?Z��m�^�a�&�P��_Č��^����|��a�b&:�����\n\0��5]\n���$���;K�Y���Wڜ�����)����.�\0��\0�F��7Ik\rɁ��l�dpps��\0W��C�M/F77!�|�8�W~��5�V�ƹw`֗2��H� R@��l�@�����Q����21�A���r�ğ��0Slq�s��r�γ|����9�\0��O]��M�1��.�R#\\goO��Ǌ\0��Q���E#˷����]����]�\0��e�\0\\O�z����o�^��+#!����9�ҷ짃W�\r���`���$�1��?��\n/�\ZkXA��Y���?��o����\0�\n�J�s�ȑD��t�9�rO�	��W�i��\\�[\\����\0p��\0!@� $�Ͻ-�x��@w?��Wme&�p�аY8,H����_���\0��\0�B���\0�r���\0��\0�|�0�������j�ޏ�z��F{=J8�xT�h|g��b�\0m��\0�BO��@\Z�:�/���w�ĳ�I!m�#1���Ri��̺��m}#+L�Tɜ�+��o����\0���\0Aj\0㨢�\0��B\'�mP�ߟx>�Al~��x���Q��8�>�m�m���O�\\���>�u���G�Ty��3�{�\0�k�\0�e{�\0>����\0U�\0�WW�\0�C�\0}\n?���\0���\0�B��e{�\0>�����^�\0Ͻ���@���\0���\0�B�.����x&\0H�08>���w����]HY�d �$J�n&772�Wi����q��PtQE\0stQE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0t�QE\0X����cw� 3����O�xZU�u�L!�8��\0׮@��U��;��L�|�`�t��@.��U�v���9e ����cߚ�@��Pᵼ�	�cY�#�\0W<~ �ʵ/�?a���vnܙ1�R|�\08�������߃@����l��Y䑣9\n��N\'�;;i�]�<�d�ǟ¹O)}_��?�O���;�\0!�o���k2�X^��y�J���?�\0o��l��f;�S�it_���5;�����1���[Y�X	�<����3��H�\"��-�ХNL�0�9����\r_�[B��A�A��=�3��s^(��Bu#���G�\\�� �����+��`�88��Q�>�<��<���g\'����\r�䰀�\"��I�������\0?��\0�f�����Oq,����\0&�\"�3,�\Z��Q���t�o�ؕ{�w�p�T9�����\\�[MWP��n�b@���Z\0����\Zkf�$��H�S��=��,��J����~Y�z`��5���߸i�{HCg�y�:�{���姆�R��O�1��H�,Ջ�����>�iv�����Ǩ��fb���Y��b�$�@��b��x�����?Ş{r:���e.�����\0Ƨ\"A�̾��֍��wai-�L����2c\'9*{u��8e*è=E��(������?��cÿ���\0��&���5֡g%������D����*��~�m��#�$p�.�3����@f�}��\\�j�4�.O�5K�[ß���kT���nVy��a2O��T�[j��1$�����xl�i�-�\0�\\_���-\\�H�H�F�]e8��S�jwױ�����6��4Z�(��(�6:|ڔ�w�$\nXy��@�~�\0��(�%��PK=��Xn @�YV�2Y�Eq��`�=����|a}$N��R�}�~�.����Q{@�<�rs\\\rX��//T���)���~&��EP7EPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPG�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6������\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0��',NULL,NULL,NULL,'����\0hikvision��\0C\0\n\n	\n\r\r\"\Z)$+*($\'\'-2@7-0=0\'\'8L9=CEHIH+6OUNFT@GHE��\0C\r\r!!E.\'.EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE��\0@�\0\"\0��\0\0\0\0\0\0\0\0\0\0\0	\n��\0�\0\0\0}\0!1AQa\"q2���#B��R��$3br�	\n\Z%&\'()*456789:CDEFGHIJSTUVWXYZcdefghijstuvwxyz���������������������������������������������������������������������������\0\0\0\0\0\0\0\0	\n��\0�\0\0w\0!1AQaq\"2�B����	#3R�br�\n$4�%�\Z&\'()*56789:CDEFGHIJSTUVWXYZcdefghijstuvwxyz��������������������������������������������������������������������������\0\0\0\0?\0��(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\r��Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�D����\0Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9�(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��:J(��\n��hך���2�������:}\rQ�������y�-����hW��c�ɩ�\Z�}�\\������\0��?��k��������3˷f7�q��0x?Wa�h���\r�=`���]�.��\'�+�Q�*�\0|������\0�������)��A$�|�Ի`6pMcէ��dFG����.pEU��X�os{N���r6\'����P*<�(�G=I��;�1����7|M��h���F#�~��v�����+��[딷�����8���}����r[\"H�L&,��r=?�T��:k��\"4n7eX`�����\rY��۶=R�\0��z��5ix�����g��ݿ;���2k���tM��(J>r�=}([�\Z�}�\\�����Iln^�r�D�Jt�g��O�k������g�n�ol��V/���9s�\0�\0�E\0fS��F�m��znE�ϥ2�	�._�����XY�}�퐙vl����?�V~�o\r��<6�%۵s�|�ֿ������\0�U�GB��/���Q�f|nO7�\0q��g�KP�K�c��۸�q�*f�~��,��{����/�ܽ���!��K����I�_]�^���\\<�Ƙ9|����@ǃ�vV��P\Z�?�5[h$�S�\Z�l�\0ɦ�:ܫ�\\���h�6��\0��1���^�e1��0 ����\0�E�a��x��fI*�}~���@F��X��K�d�w�#`��\Z�	\\[�A��0��]ƨ>���b��	�냅������.������\"�>f�����v����݅�@�yo� ��A[����>��S�oÂ���gX\0 \"�\\��#Et�\0l������\0\n>����\0����QRܴ-u3[�.�?�s��QPލ���mv����݄�s�����S_��j	�._����KT0�\0k^fL=�<�?���M�\0��O��h�\0�B�	���5�����\0��ј��D?�@��lM�Ԕ�#5��B-��6�������5��?o�L�p��;��+\\ާ�\0!K����\0��\n�QE\0stQE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0t�QE\0i����T�3-����	H�W`:��A/��J�-<4a��J�Gn��l��]7���2���T��N&�\0�j�\0�K���j�j�fy-��9U|��=�?\n\0�|D�u˒����\0dVf���~U�������bEKgڲp�A�����\rO�r�����d����Fr���Gc�\0u�*B�:�>��O�N&�\0�j�\0�K�[U�\n��Z����`�H+����M\0e�^��y�J���?�mށ�����k_��O��ɖP~�	�pퟻ��Y�ًw�F }�GP1�u���rz$��ı����r@Hc]�g�Z%��A6ev펃�?ʹ�\n\'��qC �$l��Ѕ4���s�\0��\0쵡4��7H�Sh��vP�Eg���\\�\0��-\\բ{\n�edH�F��\0S�w���?�j����.�?��O����\0f���r���\0��\0φ\'�h�ny*�RNv��s�ؼ7q�n�9�\0J��G�E�6��C)�pGJذ���dwC7|�1���\Z\0����y�}���ͻy8���ZǇ��Nk�{r�>ݭ���V�5wr�k��o�f�i\\���Y�歨�kAmt1�jl�A?ր\'�4)�u����x��|0$�\0\ZԟQ��9��l��(baP g���^��jloe2��|�q�.�O���u�8n|M	ܹ�~���������fc�J.I���>�\ry\"��m�*�G�+?��~�e����ٿ�*GϿOֶ<E�\0 ;����(����zqi�D<~� G_S�?:�� H������S�m�����pg�l\nJ\0r}@?�\0M�/���\0��!\\��ak�]4W�?g�!`����~�������\0�\n�t}55K���B���y�\0k�\0�1��\0�_�\0#�\0���\0�cE�\0���G�\0�S�\0����i�\0~���A�\0A4�\0�f��\0Ƌ�\0A���\0֪�������=���L�ڞns���j��\"�M?�٪���ⰰ��/�R��c9 Z\0���譼;�Ok��$tVe󱴑�:Ph\Zݞ�b�ܤ��!`S�\0��i��H�炙3�QrMF</�1\n��f<rO�J{�GM�n��h���>�\0kxs����\0|-���\0�s�\0�L�\0�cE�\0���G�\0�Q�\0Ƌ�\0A���\0֠Px�F�B�Z�\Z��(�V�e����0BI#2����F4_��\0�����h���\0��\0�j\0�(�Z��w�Am7�\nck��r<�MU�n�(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(���(��($�p\0\0@PY���=�wq�/���L�y����qY�ݞ;��Q�29n�q����>�%s���ȸiOV������Ҁ$�w���?�j����.�?��O����\0f���r���\0��\0̢���\\]�>�,���2qZZ��.���te��<fE+�G�� �,-u+��\\N��\0�T���Ǐ�]�m,�m��t�r��\0,�y�$��U�]�)8 ����3��;�fb�I9$�4�j����-��,�N2F6��Țȟ\\ӟ^���&h�V�%L!*@����<c�\0.�?����@\'\0PG�][������&Py��/��\0����\rZ�!i����6�s�F?Z��m�^�a�&�P��_Č��^����|��a�b&:�����\n\0��5]\n���$���;K�Y���Wڜ�����)����.�\0��\0�F��7Ik\rɁ��l�dpps��\0W��C�M/F77!�|�8�W~��5�V�ƹw`֗2��H� R@��l�@�����Q����21�A���r�ğ��0Slq�s��r�γ|����9�\0��O]��M�1��.�R#\\goO��Ǌ\0��Q���E#˷����]����]�\0��e�\0\\O�z����o�^��+#!����9�ҷ짃W�\r���`���$�1��?��\n/�\ZkXA��Y���?��o����\0�\n�J�s�ȑD��t�9�rO�	��W�i��\\�[\\����\0p��\0!@� $�Ͻ-�x��@w?��Wme&�p�аY8,H����_���\0��\0�B���\0�r���\0��\0�|�0�������j�ޏ�z��F{=J8�xT�h|g��b�\0m��\0�BO��@\Z�:�/���w�ĳ�I!m�#1���Ri��̺��m}#+L�Tɜ�+��o����\0���\0Aj\0㨢�\0��B\'�mP�ߟx>�Al~��x���Q��8�>�m�m���O�\\���>�u���G�Ty��3�{�\0�k�\0�e{�\0>����\0U�\0�WW�\0�C�\0}\n?���\0���\0�B��e{�\0>�����^�\0Ͻ���@���\0���\0�B�.����x&\0H�08>���w����]HY�d �$J�n&772�Wi����q��PtQE\0stQE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0t�QE\0X����cw� 3����O�xZU�u�L!�8��\0׮@��U��;��L�|�`�t��@.��U�v���9e ����cߚ�@��Pᵼ�	�cY�#�\0W<~ �ʵ/�?a���vnܙ1�R|�\08�������߃@����l��Y䑣9\n��N\'�;;i�]�<�d�ǟ¹O)}_��?�O���;�\0!�o���k2�X^��y�J���?�\0o��l��f;�S�it_���5;�����1���[Y�X	�<����3��H�\"��-�ХNL�0�9����\r_�[B��A�A��=�3��s^(��Bu#���G�\\�� �����+��`�88��Q�>�<��<���g\'����\r�䰀�\"��I�������\0?��\0�f�����Oq,����\0&�\"�3,�\Z��Q���t�o�ؕ{�w�p�T9�����\\�[MWP��n�b@���Z\0����\Zkf�$��H�S��=��,��J����~Y�z`��5���߸i�{HCg�y�:�{���姆�R��O�1��H�,Ջ�����>�iv�����Ǩ��fb���Y��b�$�@��b��x�����?Ş{r:���e.�����\0Ƨ\"A�̾��֍��wai-�L����2c\'9*{u��8e*è=E��(������?��cÿ���\0��&���5֡g%������D����*��~�m��#�$p�.�3����@f�}��\\�j�4�.O�5K�[ß���kT���nVy��a2O��T�[j��1$�����xl�i�-�\0�\\_���-\\�H�H�F�]e8��S�jwױ�����6��4Z�(��(�6:|ڔ�w�$\nXy��@�~�\0��(�%��PK=��Xn @�YV�2Y�Eq��`�=����|a}$N��R�}�~�.����Q{@�<�rs\\\rX��//T���)���~&��EP7EPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPG�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6������\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0��',NULL,NULL,NULL,'2012-04-01 17:10:26','2012-04-01 17:12:58',NULL,NULL,0,'2012-04-01 17:12:58','停车场管理员',0,'未知','未知',NULL,'未知','','月租卡',-1,NULL,'无优惠','未知',0),(10,'448760','C入','C出','����\0hikvision��\0C\0\n\n	\n\r\r\"\Z)$+*($\'\'-2@7-0=0\'\'8L9=CEHIH+6OUNFT@GHE��\0C\r\r!!E.\'.EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE��\0@�\0\"\0��\0\0\0\0\0\0\0\0\0\0\0	\n��\0�\0\0\0}\0!1AQa\"q2���#B��R��$3br�	\n\Z%&\'()*456789:CDEFGHIJSTUVWXYZcdefghijstuvwxyz���������������������������������������������������������������������������\0\0\0\0\0\0\0\0	\n��\0�\0\0w\0!1AQaq\"2�B����	#3R�br�\n$4�%�\Z&\'()*56789:CDEFGHIJSTUVWXYZcdefghijstuvwxyz��������������������������������������������������������������������������\0\0\0\0?\0��(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\r��Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�D����\0Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9�(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��:J(��\n��hך���2�������:}\rQ�������y�-����hW��c�ɩ�\Z�}�\\������\0��?��k��������3˷f7�q��0x?Wa�h���\r�=`���]�.��\'�+�Q�*�\0|������\0�������)��A$�|�Ի`6pMcէ��dFG����.pEU��X�os{N���r6\'����P*<�(�G=I��;�1����7|M��h���F#�~��v�����+��[딷�����8���}����r[\"H�L&,��r=?�T��:k��\"4n7eX`�����\rY��۶=R�\0��z��5ix�����g��ݿ;���2k���tM��(J>r�=}([�\Z�}�\\�����Iln^�r�D�Jt�g��O�k������g�n�ol��V/���9s�\0�\0�E\0fS��F�m��znE�ϥ2�	�._�����XY�}�퐙vl����?�V~�o\r��<6�%۵s�|�ֿ������\0�U�GB��/���Q�f|nO7�\0q��g�KP�K�c��۸�q�*f�~��,��{����/�ܽ���!��K����I�_]�^���\\<�Ƙ9|����@ǃ�vV��P\Z�?�5[h$�S�\Z�l�\0ɦ�:ܫ�\\���h�6��\0��1���^�e1��0 ����\0�E�a��x��fI*�}~���@F��X��K�d�w�#`��\Z�	\\[�A��0��]ƨ>���b��	�냅������.������\"�>f�����v����݅�@�yo� ��A[����>��S�oÂ���gX\0 \"�\\��#Et�\0l������\0\n>����\0����QRܴ-u3[�.�?�s��QPލ���mv����݄�s�����S_��j	�._����KT0�\0k^fL=�<�?���M�\0��O��h�\0�B�	���5�����\0��ј��D?�@��lM�Ԕ�#5��B-��6�������5��?o�L�p��;��+\\ާ�\0!K����\0��\n�QE\0stQE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0t�QE\0i����T�3-����	H�W`:��A/��J�-<4a��J�Gn��l��]7���2���T��N&�\0�j�\0�K���j�j�fy-��9U|��=�?\n\0�|D�u˒����\0dVf���~U�������bEKgڲp�A�����\rO�r�����d����Fr���Gc�\0u�*B�:�>��O�N&�\0�j�\0�K�[U�\n��Z����`�H+����M\0e�^��y�J���?�mށ�����k_��O��ɖP~�	�pퟻ��Y�ًw�F }�GP1�u���rz$��ı����r@Hc]�g�Z%��A6ev펃�?ʹ�\n\'��qC �$l��Ѕ4���s�\0��\0쵡4��7H�Sh��vP�Eg���\\�\0��-\\բ{\n�edH�F��\0S�w���?�j����.�?��O����\0f���r���\0��\0φ\'�h�ny*�RNv��s�ؼ7q�n�9�\0J��G�E�6��C)�pGJذ���dwC7|�1���\Z\0����y�}���ͻy8���ZǇ��Nk�{r�>ݭ���V�5wr�k��o�f�i\\���Y�歨�kAmt1�jl�A?ր\'�4)�u����x��|0$�\0\ZԟQ��9��l��(baP g���^��jloe2��|�q�.�O���u�8n|M	ܹ�~���������fc�J.I���>�\ry\"��m�*�G�+?��~�e����ٿ�*GϿOֶ<E�\0 ;����(����zqi�D<~� G_S�?:�� H������S�m�����pg�l\nJ\0r}@?�\0M�/���\0��!\\��ak�]4W�?g�!`����~�������\0�\n�t}55K���B���y�\0k�\0�1��\0�_�\0#�\0���\0�cE�\0���G�\0�S�\0����i�\0~���A�\0A4�\0�f��\0Ƌ�\0A���\0֪�������=���L�ڞns���j��\"�M?�٪���ⰰ��/�R��c9 Z\0���譼;�Ok��$tVe󱴑�:Ph\Zݞ�b�ܤ��!`S�\0��i��H�炙3�QrMF</�1\n��f<rO�J{�GM�n��h���>�\0kxs����\0|-���\0�s�\0�L�\0�cE�\0���G�\0�Q�\0Ƌ�\0A���\0֠Px�F�B�Z�\Z��(�V�e����0BI#2����F4_��\0�����h���\0��\0�j\0�(�Z��w�Am7�\nck��r<�MU�n�(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(���(��($�p\0\0@PY���=�wq�/���L�y����qY�ݞ;��Q�29n�q����>�%s���ȸiOV������Ҁ$�w���?�j����.�?��O����\0f���r���\0��\0̢���\\]�>�,���2qZZ��.���te��<fE+�G�� �,-u+��\\N��\0�T���Ǐ�]�m,�m��t�r��\0,�y�$��U�]�)8 ����3��;�fb�I9$�4�j����-��,�N2F6��Țȟ\\ӟ^���&h�V�%L!*@����<c�\0.�?����@\'\0PG�][������&Py��/��\0����\rZ�!i����6�s�F?Z��m�^�a�&�P��_Č��^����|��a�b&:�����\n\0��5]\n���$���;K�Y���Wڜ�����)����.�\0��\0�F��7Ik\rɁ��l�dpps��\0W��C�M/F77!�|�8�W~��5�V�ƹw`֗2��H� R@��l�@�����Q����21�A���r�ğ��0Slq�s��r�γ|����9�\0��O]��M�1��.�R#\\goO��Ǌ\0��Q���E#˷����]����]�\0��e�\0\\O�z����o�^��+#!����9�ҷ짃W�\r���`���$�1��?��\n/�\ZkXA��Y���?��o����\0�\n�J�s�ȑD��t�9�rO�	��W�i��\\�[\\����\0p��\0!@� $�Ͻ-�x��@w?��Wme&�p�аY8,H����_���\0��\0�B���\0�r���\0��\0�|�0�������j�ޏ�z��F{=J8�xT�h|g��b�\0m��\0�BO��@\Z�:�/���w�ĳ�I!m�#1���Ri��̺��m}#+L�Tɜ�+��o����\0���\0Aj\0㨢�\0��B\'�mP�ߟx>�Al~��x���Q��8�>�m�m���O�\\���>�u���G�Ty��3�{�\0�k�\0�e{�\0>����\0U�\0�WW�\0�C�\0}\n?���\0���\0�B��e{�\0>�����^�\0Ͻ���@���\0���\0�B�.����x&\0H�08>���w����]HY�d �$J�n&772�Wi����q��PtQE\0stQE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0t�QE\0X����cw� 3����O�xZU�u�L!�8��\0׮@��U��;��L�|�`�t��@.��U�v���9e ����cߚ�@��Pᵼ�	�cY�#�\0W<~ �ʵ/�?a���vnܙ1�R|�\08�������߃@����l��Y䑣9\n��N\'�;;i�]�<�d�ǟ¹O)}_��?�O���;�\0!�o���k2�X^��y�J���?�\0o��l��f;�S�it_���5;�����1���[Y�X	�<����3��H�\"��-�ХNL�0�9����\r_�[B��A�A��=�3��s^(��Bu#���G�\\�� �����+��`�88��Q�>�<��<���g\'����\r�䰀�\"��I�������\0?��\0�f�����Oq,����\0&�\"�3,�\Z��Q���t�o�ؕ{�w�p�T9�����\\�[MWP��n�b@���Z\0����\Zkf�$��H�S��=��,��J����~Y�z`��5���߸i�{HCg�y�:�{���姆�R��O�1��H�,Ջ�����>�iv�����Ǩ��fb���Y��b�$�@��b��x�����?Ş{r:���e.�����\0Ƨ\"A�̾��֍��wai-�L����2c\'9*{u��8e*è=E��(������?��cÿ���\0��&���5֡g%������D����*��~�m��#�$p�.�3����@f�}��\\�j�4�.O�5K�[ß���kT���nVy��a2O��T�[j��1$�����xl�i�-�\0�\\_���-\\�H�H�F�]e8��S�jwױ�����6��4Z�(��(�6:|ڔ�w�$\nXy��@�~�\0��(�%��PK=��Xn @�YV�2Y�Eq��`�=����|a}$N��R�}�~�.����Q{@�<�rs\\\rX��//T���)���~&��EP7EPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPG�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6������\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0��',NULL,NULL,NULL,'����\0hikvision��\0C\0\n\n	\n\r\r\"\Z)$+*($\'\'-2@7-0=0\'\'8L9=CEHIH+6OUNFT@GHE��\0C\r\r!!E.\'.EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE��\0@�\0\"\0��\0\0\0\0\0\0\0\0\0\0\0	\n��\0�\0\0\0}\0!1AQa\"q2���#B��R��$3br�	\n\Z%&\'()*456789:CDEFGHIJSTUVWXYZcdefghijstuvwxyz���������������������������������������������������������������������������\0\0\0\0\0\0\0\0	\n��\0�\0\0w\0!1AQaq\"2�B����	#3R�br�\n$4�%�\Z&\'()*56789:CDEFGHIJSTUVWXYZcdefghijstuvwxyz��������������������������������������������������������������������������\0\0\0\0?\0��(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\r��Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�D����\0Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9�(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��:J(��\n��hך���2�������:}\rQ�������y�-����hW��c�ɩ�\Z�}�\\������\0��?��k��������3˷f7�q��0x?Wa�h���\r�=`���]�.��\'�+�Q�*�\0|������\0�������)��A$�|�Ի`6pMcէ��dFG����.pEU��X�os{N���r6\'����P*<�(�G=I��;�1����7|M��h���F#�~��v�����+��[딷�����8���}����r[\"H�L&,��r=?�T��:k��\"4n7eX`�����\rY��۶=R�\0��z��5ix�����g��ݿ;���2k���tM��(J>r�=}([�\Z�}�\\�����Iln^�r�D�Jt�g��O�k������g�n�ol��V/���9s�\0�\0�E\0fS��F�m��znE�ϥ2�	�._�����XY�}�퐙vl����?�V~�o\r��<6�%۵s�|�ֿ������\0�U�GB��/���Q�f|nO7�\0q��g�KP�K�c��۸�q�*f�~��,��{����/�ܽ���!��K����I�_]�^���\\<�Ƙ9|����@ǃ�vV��P\Z�?�5[h$�S�\Z�l�\0ɦ�:ܫ�\\���h�6��\0��1���^�e1��0 ����\0�E�a��x��fI*�}~���@F��X��K�d�w�#`��\Z�	\\[�A��0��]ƨ>���b��	�냅������.������\"�>f�����v����݅�@�yo� ��A[����>��S�oÂ���gX\0 \"�\\��#Et�\0l������\0\n>����\0����QRܴ-u3[�.�?�s��QPލ���mv����݄�s�����S_��j	�._����KT0�\0k^fL=�<�?���M�\0��O��h�\0�B�	���5�����\0��ј��D?�@��lM�Ԕ�#5��B-��6�������5��?o�L�p��;��+\\ާ�\0!K����\0��\n�QE\0stQE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0t�QE\0i����T�3-����	H�W`:��A/��J�-<4a��J�Gn��l��]7���2���T��N&�\0�j�\0�K���j�j�fy-��9U|��=�?\n\0�|D�u˒����\0dVf���~U�������bEKgڲp�A�����\rO�r�����d����Fr���Gc�\0u�*B�:�>��O�N&�\0�j�\0�K�[U�\n��Z����`�H+����M\0e�^��y�J���?�mށ�����k_��O��ɖP~�	�pퟻ��Y�ًw�F }�GP1�u���rz$��ı����r@Hc]�g�Z%��A6ev펃�?ʹ�\n\'��qC �$l��Ѕ4���s�\0��\0쵡4��7H�Sh��vP�Eg���\\�\0��-\\բ{\n�edH�F��\0S�w���?�j����.�?��O����\0f���r���\0��\0φ\'�h�ny*�RNv��s�ؼ7q�n�9�\0J��G�E�6��C)�pGJذ���dwC7|�1���\Z\0����y�}���ͻy8���ZǇ��Nk�{r�>ݭ���V�5wr�k��o�f�i\\���Y�歨�kAmt1�jl�A?ր\'�4)�u����x��|0$�\0\ZԟQ��9��l��(baP g���^��jloe2��|�q�.�O���u�8n|M	ܹ�~���������fc�J.I���>�\ry\"��m�*�G�+?��~�e����ٿ�*GϿOֶ<E�\0 ;����(����zqi�D<~� G_S�?:�� H������S�m�����pg�l\nJ\0r}@?�\0M�/���\0��!\\��ak�]4W�?g�!`����~�������\0�\n�t}55K���B���y�\0k�\0�1��\0�_�\0#�\0���\0�cE�\0���G�\0�S�\0����i�\0~���A�\0A4�\0�f��\0Ƌ�\0A���\0֪�������=���L�ڞns���j��\"�M?�٪���ⰰ��/�R��c9 Z\0���譼;�Ok��$tVe󱴑�:Ph\Zݞ�b�ܤ��!`S�\0��i��H�炙3�QrMF</�1\n��f<rO�J{�GM�n��h���>�\0kxs����\0|-���\0�s�\0�L�\0�cE�\0���G�\0�Q�\0Ƌ�\0A���\0֠Px�F�B�Z�\Z��(�V�e����0BI#2����F4_��\0�����h���\0��\0�j\0�(�Z��w�Am7�\nck��r<�MU�n�(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(���(��($�p\0\0@PY���=�wq�/���L�y����qY�ݞ;��Q�29n�q����>�%s���ȸiOV������Ҁ$�w���?�j����.�?��O����\0f���r���\0��\0̢���\\]�>�,���2qZZ��.���te��<fE+�G�� �,-u+��\\N��\0�T���Ǐ�]�m,�m��t�r��\0,�y�$��U�]�)8 ����3��;�fb�I9$�4�j����-��,�N2F6��Țȟ\\ӟ^���&h�V�%L!*@����<c�\0.�?����@\'\0PG�][������&Py��/��\0����\rZ�!i����6�s�F?Z��m�^�a�&�P��_Č��^����|��a�b&:�����\n\0��5]\n���$���;K�Y���Wڜ�����)����.�\0��\0�F��7Ik\rɁ��l�dpps��\0W��C�M/F77!�|�8�W~��5�V�ƹw`֗2��H� R@��l�@�����Q����21�A���r�ğ��0Slq�s��r�γ|����9�\0��O]��M�1��.�R#\\goO��Ǌ\0��Q���E#˷����]����]�\0��e�\0\\O�z����o�^��+#!����9�ҷ짃W�\r���`���$�1��?��\n/�\ZkXA��Y���?��o����\0�\n�J�s�ȑD��t�9�rO�	��W�i��\\�[\\����\0p��\0!@� $�Ͻ-�x��@w?��Wme&�p�аY8,H����_���\0��\0�B���\0�r���\0��\0�|�0�������j�ޏ�z��F{=J8�xT�h|g��b�\0m��\0�BO��@\Z�:�/���w�ĳ�I!m�#1���Ri��̺��m}#+L�Tɜ�+��o����\0���\0Aj\0㨢�\0��B\'�mP�ߟx>�Al~��x���Q��8�>�m�m���O�\\���>�u���G�Ty��3�{�\0�k�\0�e{�\0>����\0U�\0�WW�\0�C�\0}\n?���\0���\0�B��e{�\0>�����^�\0Ͻ���@���\0���\0�B�.����x&\0H�08>���w����]HY�d �$J�n&772�Wi����q��PtQE\0stQE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0t�QE\0X����cw� 3����O�xZU�u�L!�8��\0׮@��U��;��L�|�`�t��@.��U�v���9e ����cߚ�@��Pᵼ�	�cY�#�\0W<~ �ʵ/�?a���vnܙ1�R|�\08�������߃@����l��Y䑣9\n��N\'�;;i�]�<�d�ǟ¹O)}_��?�O���;�\0!�o���k2�X^��y�J���?�\0o��l��f;�S�it_���5;�����1���[Y�X	�<����3��H�\"��-�ХNL�0�9����\r_�[B��A�A��=�3��s^(��Bu#���G�\\�� �����+��`�88��Q�>�<��<���g\'����\r�䰀�\"��I�������\0?��\0�f�����Oq,����\0&�\"�3,�\Z��Q���t�o�ؕ{�w�p�T9�����\\�[MWP��n�b@���Z\0����\Zkf�$��H�S��=��,��J����~Y�z`��5���߸i�{HCg�y�:�{���姆�R��O�1��H�,Ջ�����>�iv�����Ǩ��fb���Y��b�$�@��b��x�����?Ş{r:���e.�����\0Ƨ\"A�̾��֍��wai-�L����2c\'9*{u��8e*è=E��(������?��cÿ���\0��&���5֡g%������D����*��~�m��#�$p�.�3����@f�}��\\�j�4�.O�5K�[ß���kT���nVy��a2O��T�[j��1$�����xl�i�-�\0�\\_���-\\�H�H�F�]e8��S�jwױ�����6��4Z�(��(�6:|ڔ�w�$\nXy��@�~�\0��(�%��PK=��Xn @�YV�2Y�Eq��`�=����|a}$N��R�}�~�.����Q{@�<�rs\\\rX��//T���)���~&��EP7EPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPG�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6������\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0��',NULL,NULL,NULL,'2012-04-01 17:11:49','2012-04-01 17:13:00',NULL,NULL,0,'2012-04-01 17:13:00','停车场管理员',0,'未知','未知',NULL,'未知','','月租卡',-1,NULL,'无优惠','未知',0),(11,'448760','C入','C出','����\0hikvision��\0C\0\n\n	\n\r\r\"\Z)$+*($\'\'-2@7-0=0\'\'8L9=CEHIH+6OUNFT@GHE��\0C\r\r!!E.\'.EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE��\0@�\0\"\0��\0\0\0\0\0\0\0\0\0\0\0	\n��\0�\0\0\0}\0!1AQa\"q2���#B��R��$3br�	\n\Z%&\'()*456789:CDEFGHIJSTUVWXYZcdefghijstuvwxyz���������������������������������������������������������������������������\0\0\0\0\0\0\0\0	\n��\0�\0\0w\0!1AQaq\"2�B����	#3R�br�\n$4�%�\Z&\'()*56789:CDEFGHIJSTUVWXYZcdefghijstuvwxyz��������������������������������������������������������������������������\0\0\0\0?\0��(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\r��Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�D����\0Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9�(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��:J(��\n��hך���2�������:}\rQ�������y�-����hW��c�ɩ�\Z�}�\\������\0��?��k��������3˷f7�q��0x?Wa�h���\r�=`���]�.��\'�+�Q�*�\0|������\0�������)��A$�|�Ի`6pMcէ��dFG����.pEU��X�os{N���r6\'����P*<�(�G=I��;�1����7|M��h���F#�~��v�����+��[딷�����8���}����r[\"H�L&,��r=?�T��:k��\"4n7eX`�����\rY��۶=R�\0��z��5ix�����g��ݿ;���2k���tM��(J>r�=}([�\Z�}�\\�����Iln^�r�D�Jt�g��O�k������g�n�ol��V/���9s�\0�\0�E\0fS��F�m��znE�ϥ2�	�._�����XY�}�퐙vl����?�V~�o\r��<6�%۵s�|�ֿ������\0�U�GB��/���Q�f|nO7�\0q��g�KP�K�c��۸�q�*f�~��,��{����/�ܽ���!��K����I�_]�^���\\<�Ƙ9|����@ǃ�vV��P\Z�?�5[h$�S�\Z�l�\0ɦ�:ܫ�\\���h�6��\0��1���^�e1��0 ����\0�E�a��x��fI*�}~���@F��X��K�d�w�#`��\Z�	\\[�A��0��]ƨ>���b��	�냅������.������\"�>f�����v����݅�@�yo� ��A[����>��S�oÂ���gX\0 \"�\\��#Et�\0l������\0\n>����\0����QRܴ-u3[�.�?�s��QPލ���mv����݄�s�����S_��j	�._����KT0�\0k^fL=�<�?���M�\0��O��h�\0�B�	���5�����\0��ј��D?�@��lM�Ԕ�#5��B-��6�������5��?o�L�p��;��+\\ާ�\0!K����\0��\n�QE\0stQE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0t�QE\0i����T�3-����	H�W`:��A/��J�-<4a��J�Gn��l��]7���2���T��N&�\0�j�\0�K���j�j�fy-��9U|��=�?\n\0�|D�u˒����\0dVf���~U�������bEKgڲp�A�����\rO�r�����d����Fr���Gc�\0u�*B�:�>��O�N&�\0�j�\0�K�[U�\n��Z����`�H+����M\0e�^��y�J���?�mށ�����k_��O��ɖP~�	�pퟻ��Y�ًw�F }�GP1�u���rz$��ı����r@Hc]�g�Z%��A6ev펃�?ʹ�\n\'��qC �$l��Ѕ4���s�\0��\0쵡4��7H�Sh��vP�Eg���\\�\0��-\\բ{\n�edH�F��\0S�w���?�j����.�?��O����\0f���r���\0��\0φ\'�h�ny*�RNv��s�ؼ7q�n�9�\0J��G�E�6��C)�pGJذ���dwC7|�1���\Z\0����y�}���ͻy8���ZǇ��Nk�{r�>ݭ���V�5wr�k��o�f�i\\���Y�歨�kAmt1�jl�A?ր\'�4)�u����x��|0$�\0\ZԟQ��9��l��(baP g���^��jloe2��|�q�.�O���u�8n|M	ܹ�~���������fc�J.I���>�\ry\"��m�*�G�+?��~�e����ٿ�*GϿOֶ<E�\0 ;����(����zqi�D<~� G_S�?:�� H������S�m�����pg�l\nJ\0r}@?�\0M�/���\0��!\\��ak�]4W�?g�!`����~�������\0�\n�t}55K���B���y�\0k�\0�1��\0�_�\0#�\0���\0�cE�\0���G�\0�S�\0����i�\0~���A�\0A4�\0�f��\0Ƌ�\0A���\0֪�������=���L�ڞns���j��\"�M?�٪���ⰰ��/�R��c9 Z\0���譼;�Ok��$tVe󱴑�:Ph\Zݞ�b�ܤ��!`S�\0��i��H�炙3�QrMF</�1\n��f<rO�J{�GM�n��h���>�\0kxs����\0|-���\0�s�\0�L�\0�cE�\0���G�\0�Q�\0Ƌ�\0A���\0֠Px�F�B�Z�\Z��(�V�e����0BI#2����F4_��\0�����h���\0��\0�j\0�(�Z��w�Am7�\nck��r<�MU�n�(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(���(��($�p\0\0@PY���=�wq�/���L�y����qY�ݞ;��Q�29n�q����>�%s���ȸiOV������Ҁ$�w���?�j����.�?��O����\0f���r���\0��\0̢���\\]�>�,���2qZZ��.���te��<fE+�G�� �,-u+��\\N��\0�T���Ǐ�]�m,�m��t�r��\0,�y�$��U�]�)8 ����3��;�fb�I9$�4�j����-��,�N2F6��Țȟ\\ӟ^���&h�V�%L!*@����<c�\0.�?����@\'\0PG�][������&Py��/��\0����\rZ�!i����6�s�F?Z��m�^�a�&�P��_Č��^����|��a�b&:�����\n\0��5]\n���$���;K�Y���Wڜ�����)����.�\0��\0�F��7Ik\rɁ��l�dpps��\0W��C�M/F77!�|�8�W~��5�V�ƹw`֗2��H� R@��l�@�����Q����21�A���r�ğ��0Slq�s��r�γ|����9�\0��O]��M�1��.�R#\\goO��Ǌ\0��Q���E#˷����]����]�\0��e�\0\\O�z����o�^��+#!����9�ҷ짃W�\r���`���$�1��?��\n/�\ZkXA��Y���?��o����\0�\n�J�s�ȑD��t�9�rO�	��W�i��\\�[\\����\0p��\0!@� $�Ͻ-�x��@w?��Wme&�p�аY8,H����_���\0��\0�B���\0�r���\0��\0�|�0�������j�ޏ�z��F{=J8�xT�h|g��b�\0m��\0�BO��@\Z�:�/���w�ĳ�I!m�#1���Ri��̺��m}#+L�Tɜ�+��o����\0���\0Aj\0㨢�\0��B\'�mP�ߟx>�Al~��x���Q��8�>�m�m���O�\\���>�u���G�Ty��3�{�\0�k�\0�e{�\0>����\0U�\0�WW�\0�C�\0}\n?���\0���\0�B��e{�\0>�����^�\0Ͻ���@���\0���\0�B�.����x&\0H�08>���w����]HY�d �$J�n&772�Wi����q��PtQE\0stQE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0t�QE\0X����cw� 3����O�xZU�u�L!�8��\0׮@��U��;��L�|�`�t��@.��U�v���9e ����cߚ�@��Pᵼ�	�cY�#�\0W<~ �ʵ/�?a���vnܙ1�R|�\08�������߃@����l��Y䑣9\n��N\'�;;i�]�<�d�ǟ¹O)}_��?�O���;�\0!�o���k2�X^��y�J���?�\0o��l��f;�S�it_���5;�����1���[Y�X	�<����3��H�\"��-�ХNL�0�9����\r_�[B��A�A��=�3��s^(��Bu#���G�\\�� �����+��`�88��Q�>�<��<���g\'����\r�䰀�\"��I�������\0?��\0�f�����Oq,����\0&�\"�3,�\Z��Q���t�o�ؕ{�w�p�T9�����\\�[MWP��n�b@���Z\0����\Zkf�$��H�S��=��,��J����~Y�z`��5���߸i�{HCg�y�:�{���姆�R��O�1��H�,Ջ�����>�iv�����Ǩ��fb���Y��b�$�@��b��x�����?Ş{r:���e.�����\0Ƨ\"A�̾��֍��wai-�L����2c\'9*{u��8e*è=E��(������?��cÿ���\0��&���5֡g%������D����*��~�m��#�$p�.�3����@f�}��\\�j�4�.O�5K�[ß���kT���nVy��a2O��T�[j��1$�����xl�i�-�\0�\\_���-\\�H�H�F�]e8��S�jwױ�����6��4Z�(��(�6:|ڔ�w�$\nXy��@�~�\0��(�%��PK=��Xn @�YV�2Y�Eq��`�=����|a}$N��R�}�~�.����Q{@�<�rs\\\rX��//T���)���~&��EP7EPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPG�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6������\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0��',NULL,NULL,NULL,'����\0hikvision��\0C\0\n\n	\n\r\r\"\Z)$+*($\'\'-2@7-0=0\'\'8L9=CEHIH+6OUNFT@GHE��\0C\r\r!!E.\'.EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE��\0@�\0\"\0��\0\0\0\0\0\0\0\0\0\0\0	\n��\0�\0\0\0}\0!1AQa\"q2���#B��R��$3br�	\n\Z%&\'()*456789:CDEFGHIJSTUVWXYZcdefghijstuvwxyz���������������������������������������������������������������������������\0\0\0\0\0\0\0\0	\n��\0�\0\0w\0!1AQaq\"2�B����	#3R�br�\n$4�%�\Z&\'()*56789:CDEFGHIJSTUVWXYZcdefghijstuvwxyz��������������������������������������������������������������������������\0\0\0\0?\0��(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\r��Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�D����\0Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9���Ѵ�\Z�wo�Q��~B�9�(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��\n(��:J(��\n��hך���2�������:}\rQ�������y�-����hW��c�ɩ�\Z�}�\\������\0��?��k��������3˷f7�q��0x?Wa�h���\r�=`���]�.��\'�+�Q�*�\0|������\0�������)��A$�|�Ի`6pMcէ��dFG����.pEU��X�os{N���r6\'����P*<�(�G=I��;�1����7|M��h���F#�~��v�����+��[딷�����8���}����r[\"H�L&,��r=?�T��:k��\"4n7eX`�����\rY��۶=R�\0��z��5ix�����g��ݿ;���2k���tM��(J>r�=}([�\Z�}�\\�����Iln^�r�D�Jt�g��O�k������g�n�ol��V/���9s�\0�\0�E\0fS��F�m��znE�ϥ2�	�._�����XY�}�퐙vl����?�V~�o\r��<6�%۵s�|�ֿ������\0�U�GB��/���Q�f|nO7�\0q��g�KP�K�c��۸�q�*f�~��,��{����/�ܽ���!��K����I�_]�^���\\<�Ƙ9|����@ǃ�vV��P\Z�?�5[h$�S�\Z�l�\0ɦ�:ܫ�\\���h�6��\0��1���^�e1��0 ����\0�E�a��x��fI*�}~���@F��X��K�d�w�#`��\Z�	\\[�A��0��]ƨ>���b��	�냅������.������\"�>f�����v����݅�@�yo� ��A[����>��S�oÂ���gX\0 \"�\\��#Et�\0l������\0\n>����\0����QRܴ-u3[�.�?�s��QPލ���mv����݄�s�����S_��j	�._����KT0�\0k^fL=�<�?���M�\0��O��h�\0�B�	���5�����\0��ј��D?�@��lM�Ԕ�#5��B-��6�������5��?o�L�p��;��+\\ާ�\0!K����\0��\n�QE\0stQE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0t�QE\0i����T�3-����	H�W`:��A/��J�-<4a��J�Gn��l��]7���2���T��N&�\0�j�\0�K���j�j�fy-��9U|��=�?\n\0�|D�u˒����\0dVf���~U�������bEKgڲp�A�����\rO�r�����d����Fr���Gc�\0u�*B�:�>��O�N&�\0�j�\0�K�[U�\n��Z����`�H+����M\0e�^��y�J���?�mށ�����k_��O��ɖP~�	�pퟻ��Y�ًw�F }�GP1�u���rz$��ı����r@Hc]�g�Z%��A6ev펃�?ʹ�\n\'��qC �$l��Ѕ4���s�\0��\0쵡4��7H�Sh��vP�Eg���\\�\0��-\\բ{\n�edH�F��\0S�w���?�j����.�?��O����\0f���r���\0��\0φ\'�h�ny*�RNv��s�ؼ7q�n�9�\0J��G�E�6��C)�pGJذ���dwC7|�1���\Z\0����y�}���ͻy8���ZǇ��Nk�{r�>ݭ���V�5wr�k��o�f�i\\���Y�歨�kAmt1�jl�A?ր\'�4)�u����x��|0$�\0\ZԟQ��9��l��(baP g���^��jloe2��|�q�.�O���u�8n|M	ܹ�~���������fc�J.I���>�\ry\"��m�*�G�+?��~�e����ٿ�*GϿOֶ<E�\0 ;����(����zqi�D<~� G_S�?:�� H������S�m�����pg�l\nJ\0r}@?�\0M�/���\0��!\\��ak�]4W�?g�!`����~�������\0�\n�t}55K���B���y�\0k�\0�1��\0�_�\0#�\0���\0�cE�\0���G�\0�S�\0����i�\0~���A�\0A4�\0�f��\0Ƌ�\0A���\0֪�������=���L�ڞns���j��\"�M?�٪���ⰰ��/�R��c9 Z\0���譼;�Ok��$tVe󱴑�:Ph\Zݞ�b�ܤ��!`S�\0��i��H�炙3�QrMF</�1\n��f<rO�J{�GM�n��h���>�\0kxs����\0|-���\0�s�\0�L�\0�cE�\0���G�\0�Q�\0Ƌ�\0A���\0֠Px�F�B�Z�\Z��(�V�e����0BI#2����F4_��\0�����h���\0��\0�j\0�(�Z��w�Am7�\nck��r<�MU�n�(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(��(���(��($�p\0\0@PY���=�wq�/���L�y����qY�ݞ;��Q�29n�q����>�%s���ȸiOV������Ҁ$�w���?�j����.�?��O����\0f���r���\0��\0̢���\\]�>�,���2qZZ��.���te��<fE+�G�� �,-u+��\\N��\0�T���Ǐ�]�m,�m��t�r��\0,�y�$��U�]�)8 ����3��;�fb�I9$�4�j����-��,�N2F6��Țȟ\\ӟ^���&h�V�%L!*@����<c�\0.�?����@\'\0PG�][������&Py��/��\0����\rZ�!i����6�s�F?Z��m�^�a�&�P��_Č��^����|��a�b&:�����\n\0��5]\n���$���;K�Y���Wڜ�����)����.�\0��\0�F��7Ik\rɁ��l�dpps��\0W��C�M/F77!�|�8�W~��5�V�ƹw`֗2��H� R@��l�@�����Q����21�A���r�ğ��0Slq�s��r�γ|����9�\0��O]��M�1��.�R#\\goO��Ǌ\0��Q���E#˷����]����]�\0��e�\0\\O�z����o�^��+#!����9�ҷ짃W�\r���`���$�1��?��\n/�\ZkXA��Y���?��o����\0�\n�J�s�ȑD��t�9�rO�	��W�i��\\�[\\����\0p��\0!@� $�Ͻ-�x��@w?��Wme&�p�аY8,H����_���\0��\0�B���\0�r���\0��\0�|�0�������j�ޏ�z��F{=J8�xT�h|g��b�\0m��\0�BO��@\Z�:�/���w�ĳ�I!m�#1���Ri��̺��m}#+L�Tɜ�+��o����\0���\0Aj\0㨢�\0��B\'�mP�ߟx>�Al~��x���Q��8�>�m�m���O�\\���>�u���G�Ty��3�{�\0�k�\0�e{�\0>����\0U�\0�WW�\0�C�\0}\n?���\0���\0�B��e{�\0>�����^�\0Ͻ���@���\0���\0�B�.����x&\0H�08>���w����]HY�d �$J�n&772�Wi����q��PtQE\0stQE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0QE\0t�QE\0X����cw� 3����O�xZU�u�L!�8��\0׮@��U��;��L�|�`�t��@.��U�v���9e ����cߚ�@��Pᵼ�	�cY�#�\0W<~ �ʵ/�?a���vnܙ1�R|�\08�������߃@����l��Y䑣9\n��N\'�;;i�]�<�d�ǟ¹O)}_��?�O���;�\0!�o���k2�X^��y�J���?�\0o��l��f;�S�it_���5;�����1���[Y�X	�<����3��H�\"��-�ХNL�0�9����\r_�[B��A�A��=�3��s^(��Bu#���G�\\�� �����+��`�88��Q�>�<��<���g\'����\r�䰀�\"��I�������\0?��\0�f�����Oq,����\0&�\"�3,�\Z��Q���t�o�ؕ{�w�p�T9�����\\�[MWP��n�b@���Z\0����\Zkf�$��H�S��=��,��J����~Y�z`��5���߸i�{HCg�y�:�{���姆�R��O�1��H�,Ջ�����>�iv�����Ǩ��fb���Y��b�$�@��b��x�����?Ş{r:���e.�����\0Ƨ\"A�̾��֍��wai-�L����2c\'9*{u��8e*è=E��(������?��cÿ���\0��&���5֡g%������D����*��~�m��#�$p�.�3����@f�}��\\�j�4�.O�5K�[ß���kT���nVy��a2O��T�[j��1$�����xl�i�-�\0�\\_���-\\�H�H�F�]e8��S�jwױ�����6��4Z�(��(�6:|ڔ�w�$\nXy��@�~�\0��(�%��PK=��Xn @�YV�2Y�Eq��`�=����|a}$N��R�}�~�.����Q{@�<�rs\\\rX��//T���)���~&��EP7EPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPEPG�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6���K�z�7Q\\�����6������\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0(��\0��',NULL,NULL,NULL,'2012-04-01 17:14:55','2012-04-01 17:14:58',NULL,NULL,0,'2012-04-01 17:14:58','停车场管理员',0,'未知','未知',NULL,'未知','','月租卡',-1,NULL,'无优惠','未知',0);
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
 if ( ( '计时卡' = new.cardkind ) && Exists( Select Table_name from information_schema.tables as a where a.table_name = 'tmpcardintime' ) )  then
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
/*!50003 CREATE*/ /*!50017 DEFINER=`root`@`localhost`*/ /*!50003 TRIGGER `parkadmin`.`UpdateStoprd`
AFTER UPDATE ON `parkadmin`.`stoprd`
FOR EACH ROW
BEGIN
 if ( ( '计时卡' = new.cardkind ) && Exists( Select Table_name from information_schema.tables as a where a.table_name = 'tmpcardintime' ) ) then
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
) ENGINE=InnoDB AUTO_INCREMENT=41 DEFAULT CHARSET=gb2312;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `carinfo`
--

LOCK TABLES `carinfo` WRITE;
/*!40000 ALTER TABLE `carinfo` DISABLE KEYS */;
INSERT INTO `carinfo` VALUES (32,'未知','小型车',NULL,'448760','未知'),(33,'未知','小型车',NULL,'447551','未知'),(34,'未知','小型车',NULL,'447520','未知'),(37,'未知','未知',NULL,'434605','未知'),(38,'未知','未知',NULL,'441528','未知'),(39,'未知','未知',NULL,'9400338','未知'),(40,'未知','小型车',NULL,'15406074','未知');
/*!40000 ALTER TABLE `carinfo` ENABLE KEYS */;
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
INSERT INTO `savecard` VALUES ('15406074','启用','EMID卡','未知','未知','停车场管理员','小型车',0,0,0,0);
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
INSERT INTO `license` VALUES ('5101070001','UE1TWuY2dBvFzgp4xxrpwF5ja0kLFWiDCSqganFX6WA9UsOD+fIv2RKQzcXpNcxJXK6Zhy6YkRiApYklZZD+M4u/RPI7cTYMgalk65NCbC6ENxV8zD6Bm7eU/ngdOregXPV1CN8oZzcWe0eOgKVa3H2Bj97rmRAC05mJuHZE0/3b90/pYypuYLxlhNa6TYuQPrgB6fYwHMBMpc2xKVZqRI/nb9auXXjDbtkVm7HYm1S9qsixBk9KSOuaDa8YqdXXyYLdViUx81RcrZdD11SII5aMFdnhwkdOgnlen8j4GNUP2+4kRJaOaqZUEeqaItc0KvnkXoyuMte2SURp0/z6P5atBb8r3rUNLr3sJ9oamfdyfO6ogRIFTKKq+tMiUq9lDFU7MmcP8qfr4o+ySFEKn5DgYe9j/yodslx4co89H7FaCMIeuwczjJPtzzEJwesvTalfMmSsY5wHC3I6ESPErXJ42M3PLHpMAXaTXBwnP8eDx/zsys5veUvI+Dt5j9QtMcduaEfv0zYxYv1eKYGKhTArck1o0Oess7TJW4DYbHBTOT1FPODir2J5TFhlxTQemIhxot2QRj0Fu2qdl0vHmSZTGoBaWShtgI7A+hJbz5WuHxOYejQFPhqVYJ5dpIu1rT7R1A==');
/*!40000 ALTER TABLE `license` ENABLE KEYS */;
UNLOCK TABLES;

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
) ENGINE=InnoDB AUTO_INCREMENT=111 DEFAULT CHARSET=gb2312;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `sysinfo`
--

LOCK TABLES `sysinfo` WRITE;
/*!40000 ALTER TABLE `sysinfo` DISABLE KEYS */;
INSERT INTO `sysinfo` VALUES (55,'停车场管理员','换班记录','退出软件','2012-03-27 14:26:39',NULL,NULL,NULL,NULL),(56,'停车场管理员','换班记录','登录系统成功','2012-03-27 14:26:56',NULL,NULL,NULL,NULL),(57,'停车场管理员','换班记录','退出软件','2012-03-27 14:32:13',NULL,NULL,NULL,NULL),(58,'停车场管理员','换班记录','登录系统成功','2012-03-27 14:32:28',NULL,NULL,NULL,NULL),(59,'停车场管理员','换班记录','退出软件','2012-03-27 15:33:24',NULL,NULL,NULL,NULL),(60,'停车场管理员','换班记录','登录系统成功','2012-03-27 15:40:52',NULL,NULL,NULL,NULL),(61,'停车场管理员','换班记录','登录系统成功','2012-03-28 10:40:19',NULL,NULL,NULL,NULL),(62,'停车场管理员','换班记录','退出软件','2012-03-28 13:26:13',NULL,NULL,NULL,NULL),(63,'停车场管理员','换班记录','登录系统成功','2012-03-28 13:35:35',NULL,NULL,NULL,NULL),(64,'停车场管理员','卡片管理','删除月租卡 卡号　：454781','2012-03-28 14:54:21',NULL,NULL,NULL,NULL),(65,'停车场管理员','卡片管理','删除月租卡 卡号　：433238','2012-03-28 14:54:25',NULL,NULL,NULL,NULL),(66,'停车场管理员','换班记录','退出软件','2012-03-28 14:58:49',NULL,NULL,NULL,NULL),(67,'停车场管理员','换班记录','登录系统成功','2012-03-28 14:59:10',NULL,NULL,NULL,NULL),(68,'停车场管理员','换班记录','登录系统成功','2012-03-28 15:37:38',NULL,NULL,NULL,NULL),(69,'停车场管理员','卡片管理','新增计时卡 卡号　：434605','2012-03-28 15:40:39',NULL,NULL,NULL,NULL),(70,'停车场管理员','卡片管理','新增计时卡 卡号　：441528','2012-03-28 15:40:50',NULL,NULL,NULL,NULL),(71,'停车场管理员','卡片管理','新增计时卡 卡号　：9400338','2012-03-28 15:40:57',NULL,NULL,NULL,NULL),(72,'停车场管理员','换班记录','退出软件','2012-03-28 15:53:39',NULL,NULL,NULL,NULL),(73,'停车场管理员','换班记录','登录系统成功','2012-03-28 15:55:44',NULL,NULL,NULL,NULL),(74,'停车场管理员','卡片管理','删除计时卡 卡号　：9400338','2012-03-28 15:56:26',NULL,NULL,NULL,NULL),(75,'停车场管理员','换班记录','登录系统成功','2012-03-30 11:08:05',NULL,NULL,NULL,NULL),(76,'停车场管理员','换班记录','登录系统成功','2012-03-30 11:09:59',NULL,NULL,NULL,NULL),(77,'停车场管理员','换班记录','登录系统成功','2012-03-30 11:24:37',NULL,NULL,NULL,NULL),(78,'停车场管理员','换班记录','退出软件','2012-03-30 11:38:36',NULL,NULL,NULL,NULL),(79,'停车场管理员','换班记录','登录系统成功','2012-03-30 11:40:42',NULL,NULL,NULL,NULL),(80,'停车场管理员','换班记录','退出软件','2012-03-30 11:56:59',NULL,NULL,NULL,NULL),(81,'停车场管理员','换班记录','登录系统成功','2012-03-30 11:57:29',NULL,NULL,NULL,NULL),(82,'停车场管理员','换班记录','登录系统成功','2012-03-30 12:02:05',NULL,NULL,NULL,NULL),(83,'停车场管理员','换班记录','登录系统成功','2012-03-30 12:12:17',NULL,NULL,NULL,NULL),(84,'停车场管理员','换班记录','登录系统成功','2012-03-30 12:19:46',NULL,NULL,NULL,NULL),(85,'停车场管理员','换班记录','登录系统成功','2012-03-30 14:31:31',NULL,NULL,NULL,NULL),(86,'停车场管理员','换班记录','登录系统成功','2012-03-30 14:35:50',NULL,NULL,NULL,NULL),(87,'停车场管理员','换班记录','登录系统成功','2012-03-30 14:39:41',NULL,NULL,NULL,NULL),(88,'停车场管理员','换班记录','登录系统成功','2012-03-30 15:08:04',NULL,NULL,NULL,NULL),(89,'停车场管理员','换班记录','登录系统成功','2012-03-30 15:28:19',NULL,NULL,NULL,NULL),(90,'停车场管理员','换班记录','登录系统成功','2012-03-30 15:33:12',NULL,NULL,NULL,NULL),(91,'停车场管理员','换班记录','登录系统成功','2012-03-30 15:48:12',NULL,NULL,NULL,NULL),(92,'停车场管理员','换班记录','登录系统成功','2012-03-30 16:08:21',NULL,NULL,NULL,NULL),(93,'','导入授权数据',' 导入了授权数据！','2012-03-31 16:42:45',NULL,NULL,NULL,NULL),(94,'停车场管理员','换班记录','登录系统成功','2012-04-01 16:25:32',NULL,NULL,NULL,NULL),(95,'停车场管理员','换班记录','登录系统成功','2012-04-01 16:38:00',NULL,NULL,NULL,NULL),(96,'停车场管理员','换班记录','登录系统成功','2012-04-01 16:41:05',NULL,NULL,NULL,NULL),(97,'停车场管理员','换班记录','登录系统成功','2012-04-01 16:45:01',NULL,NULL,NULL,NULL),(98,'停车场管理员','换班记录','登录系统成功','2012-04-01 16:46:19',NULL,NULL,NULL,NULL),(99,'停车场管理员','换班记录','退出软件','2012-04-01 16:51:50',NULL,NULL,NULL,NULL),(100,'停车场管理员','换班记录','登录系统成功','2012-04-01 16:52:11',NULL,NULL,NULL,NULL),(101,'停车场管理员','换班记录','登录系统成功','2012-04-01 16:54:05',NULL,NULL,NULL,NULL),(102,'停车场管理员','换班记录','登录系统成功','2012-04-01 17:03:29',NULL,NULL,NULL,NULL),(103,'停车场管理员','换班记录','退出软件','2012-04-01 16:54:30',NULL,NULL,NULL,NULL),(104,'停车场管理员','换班记录','登录系统成功','2012-04-01 16:57:06',NULL,NULL,NULL,NULL),(105,'停车场管理员','换班记录','登录系统成功','2012-04-01 16:59:18',NULL,NULL,NULL,NULL),(106,'停车场管理员','换班记录','登录系统成功','2012-04-01 17:00:21',NULL,NULL,NULL,NULL),(107,'停车场管理员','换班记录','登录系统成功','2012-04-01 17:05:30',NULL,NULL,NULL,NULL),(108,'停车场管理员','换班记录','登录系统成功','2012-04-01 17:05:43',NULL,NULL,NULL,NULL),(109,'停车场管理员','换班记录','登录系统成功','2012-04-01 17:09:59',NULL,NULL,NULL,NULL),(110,'停车场管理员','换班记录','登录系统成功','2012-04-01 17:10:22',NULL,NULL,NULL,NULL);
/*!40000 ALTER TABLE `sysinfo` ENABLE KEYS */;
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
) ENGINE=InnoDB AUTO_INCREMENT=1975 DEFAULT CHARSET=gb2312;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `feerate`
--

LOCK TABLES `feerate` WRITE;
/*!40000 ALTER TABLE `feerate` DISABLE KEYS */;
INSERT INTO `feerate` VALUES (23,0,0,0,0,7,0,0,1323),(23,0,1,1,2,0,0,0,1324),(23,0,2,0,0,0,0,0,1325),(23,0,3,0,0,0,0,0,1326),(23,0,4,0,0,0,0,0,1327),(23,0,5,0,0,0,0,0,1328),(23,0,6,0,0,0,0,0,1329),(23,0,7,0,0,0,0,0,1330),(23,0,8,0,0,0,0,0,1331),(23,1,0,0,0,7,0,0,1332),(23,1,1,1,2,0,0,0,1333),(23,1,2,0,0,0,0,0,1334),(23,1,3,0,0,0,0,0,1335),(23,1,4,0,0,0,0,0,1336),(23,1,5,0,0,0,0,0,1337),(23,1,6,0,0,0,0,0,1338),(23,1,7,0,0,0,0,0,1339),(23,1,8,0,0,0,0,0,1340),(23,2,0,0,0,2,0,1,1341),(23,2,1,1,2,6,0,0,1342),(23,2,2,3,5,1,2,0,1343),(23,2,3,6,1000,2,3,0,1344),(23,2,4,0,0,0,0,0,1345),(23,2,5,0,0,0,0,0,1346),(23,2,6,0,0,0,0,0,1347),(23,2,7,0,0,0,0,0,1348),(23,2,8,0,0,0,0,0,1349),(23,3,0,0,0,7,0,0,1350),(23,3,1,1,2,0,0,0,1351),(23,3,2,0,0,0,0,0,1352),(23,3,3,0,0,0,0,0,1353),(23,3,4,0,0,0,0,0,1354),(23,3,5,0,0,0,0,0,1355),(23,3,6,0,0,0,0,0,1356),(23,3,7,0,0,0,0,0,1357),(23,3,8,0,0,0,0,0,1358),(23,4,0,0,0,7,0,0,1359),(23,4,1,1,2,0,0,0,1360),(23,4,2,0,0,0,0,0,1361),(23,4,3,0,0,0,0,0,1362),(23,4,4,0,0,0,0,0,1363),(23,4,5,0,0,0,0,0,1364),(23,4,6,0,0,0,0,0,1365),(23,4,7,0,0,0,0,0,1366),(23,4,8,0,0,0,0,0,1367),(23,5,0,0,0,7,0,0,1368),(23,5,1,1,2,0,0,0,1369),(23,5,2,0,0,0,0,0,1370),(23,5,3,0,0,0,0,0,1371),(23,5,4,0,0,0,0,0,1372),(23,5,5,0,0,0,0,0,1373),(23,5,6,0,0,0,0,0,1374),(23,5,7,0,0,0,0,0,1375),(23,5,8,0,0,0,0,0,1376),(23,6,0,0,0,7,0,0,1377),(23,6,1,1,2,0,0,0,1378),(23,6,2,0,0,0,0,0,1379),(23,6,3,0,0,0,0,0,1380),(23,6,4,0,0,0,0,0,1381),(23,6,5,0,0,0,0,0,1382),(23,6,6,0,0,0,0,0,1383),(23,6,7,0,0,0,0,0,1384),(23,6,8,0,0,0,0,0,1385),(23,7,0,0,0,7,0,0,1386),(23,7,1,1,2,0,0,0,1387),(23,7,2,0,0,0,0,0,1388),(23,7,3,0,0,0,0,0,1389),(23,7,4,0,0,0,0,0,1390),(23,7,5,0,0,0,0,0,1391),(23,7,6,0,0,0,0,0,1392),(23,7,7,0,0,0,0,0,1393),(23,7,8,0,0,0,0,0,1394),(24,0,0,0,0,7,0,0,1450),(24,0,1,1,2,0,0,0,1451),(24,0,2,0,0,0,0,0,1452),(24,0,3,0,0,0,0,0,1453),(24,0,4,0,0,0,0,0,1454),(24,0,5,0,0,0,0,0,1455),(24,0,6,0,0,0,0,0,1456),(24,0,7,0,0,0,0,0,1457),(24,0,8,0,0,0,0,0,1458),(24,1,0,0,0,7,0,0,1459),(24,1,1,1,2,0,0,0,1460),(24,1,2,0,0,0,0,0,1461),(24,1,3,0,0,0,0,0,1462),(24,1,4,0,0,0,0,0,1463),(24,1,5,0,0,0,0,0,1464),(24,1,6,0,0,0,0,0,1465),(24,1,7,0,0,0,0,0,1466),(24,1,8,0,0,0,0,0,1467),(24,2,0,0,0,2,0,1,1468),(24,2,1,1,2,6,0,0,1469),(24,2,2,3,5,1,2,0,1470),(24,2,3,6,1000,2,3,0,1471),(24,2,4,0,0,0,0,0,1472),(24,2,5,0,0,0,0,0,1473),(24,2,6,0,0,0,0,0,1474),(24,2,7,0,0,0,0,0,1475),(24,2,8,0,0,0,0,0,1476),(24,3,0,0,0,7,0,0,1477),(24,3,1,1,2,0,0,0,1478),(24,3,2,0,0,0,0,0,1479),(24,3,3,0,0,0,0,0,1480),(24,3,4,0,0,0,0,0,1481),(24,3,5,0,0,0,0,0,1482),(24,3,6,0,0,0,0,0,1483),(24,3,7,0,0,0,0,0,1484),(24,3,8,0,0,0,0,0,1485),(24,4,0,0,0,7,0,0,1486),(24,4,1,1,2,0,0,0,1487),(24,4,2,0,0,0,0,0,1488),(24,4,3,0,0,0,0,0,1489),(24,4,4,0,0,0,0,0,1490),(24,4,5,0,0,0,0,0,1491),(24,4,6,0,0,0,0,0,1492),(24,4,7,0,0,0,0,0,1493),(24,4,8,0,0,0,0,0,1494),(24,5,0,0,0,7,0,0,1495),(24,5,1,1,2,0,0,0,1496),(24,5,2,0,0,0,0,0,1497),(24,5,3,0,0,0,0,0,1498),(24,5,4,0,0,0,0,0,1499),(24,5,5,0,0,0,0,0,1500),(24,5,6,0,0,0,0,0,1501),(24,5,7,0,0,0,0,0,1502),(24,5,8,0,0,0,0,0,1503),(24,6,0,0,0,7,0,0,1504),(24,6,1,1,2,0,0,0,1505),(24,6,2,0,0,0,0,0,1506),(24,6,3,0,0,0,0,0,1507),(24,6,4,0,0,0,0,0,1508),(24,6,5,0,0,0,0,0,1509),(24,6,6,0,0,0,0,0,1510),(24,6,7,0,0,0,0,0,1511),(24,6,8,0,0,0,0,0,1512),(24,7,0,0,0,7,0,0,1513),(24,7,1,1,2,0,0,0,1514),(24,7,2,0,0,0,0,0,1515),(24,7,3,0,0,0,0,0,1516),(24,7,4,0,0,0,0,0,1517),(24,7,5,0,0,0,0,0,1518),(24,7,6,0,0,0,0,0,1519),(24,7,7,0,0,0,0,0,1520),(24,7,8,0,0,0,0,0,1521),(25,0,0,0,0,7,0,0,1577),(25,0,1,1,2,0,0,0,1578),(25,0,2,0,0,0,0,0,1579),(25,0,3,0,0,0,0,0,1580),(25,0,4,0,0,0,0,0,1581),(25,0,5,0,0,0,0,0,1582),(25,0,6,0,0,0,0,0,1583),(25,0,7,0,0,0,0,0,1584),(25,0,8,0,0,0,0,0,1585),(25,1,0,0,0,7,0,0,1586),(25,1,1,1,2,0,0,0,1587),(25,1,2,0,0,0,0,0,1588),(25,1,3,0,0,0,0,0,1589),(25,1,4,0,0,0,0,0,1590),(25,1,5,0,0,0,0,0,1591),(25,1,6,0,0,0,0,0,1592),(25,1,7,0,0,0,0,0,1593),(25,1,8,0,0,0,0,0,1594),(25,2,0,0,0,2,0,1,1595),(25,2,1,1,2,6,0,0,1596),(25,2,2,3,5,1,2,0,1597),(25,2,3,6,1000,2,3,0,1598),(25,2,4,0,0,0,0,0,1599),(25,2,5,0,0,0,0,0,1600),(25,2,6,0,0,0,0,0,1601),(25,2,7,0,0,0,0,0,1602),(25,2,8,0,0,0,0,0,1603),(25,3,0,0,0,7,0,0,1604),(25,3,1,1,2,0,0,0,1605),(25,3,2,0,0,0,0,0,1606),(25,3,3,0,0,0,0,0,1607),(25,3,4,0,0,0,0,0,1608),(25,3,5,0,0,0,0,0,1609),(25,3,6,0,0,0,0,0,1610),(25,3,7,0,0,0,0,0,1611),(25,3,8,0,0,0,0,0,1612),(25,4,0,0,0,7,0,0,1613),(25,4,1,1,2,0,0,0,1614),(25,4,2,0,0,0,0,0,1615),(25,4,3,0,0,0,0,0,1616),(25,4,4,0,0,0,0,0,1617),(25,4,5,0,0,0,0,0,1618),(25,4,6,0,0,0,0,0,1619),(25,4,7,0,0,0,0,0,1620),(25,4,8,0,0,0,0,0,1621),(25,5,0,0,0,7,0,0,1622),(25,5,1,1,2,0,0,0,1623),(25,5,2,0,0,0,0,0,1624),(25,5,3,0,0,0,0,0,1625),(25,5,4,0,0,0,0,0,1626),(25,5,5,0,0,0,0,0,1627),(25,5,6,0,0,0,0,0,1628),(25,5,7,0,0,0,0,0,1629),(25,5,8,0,0,0,0,0,1630),(25,6,0,0,0,7,0,0,1631),(25,6,1,1,2,0,0,0,1632),(25,6,2,0,0,0,0,0,1633),(25,6,3,0,0,0,0,0,1634),(25,6,4,0,0,0,0,0,1635),(25,6,5,0,0,0,0,0,1636),(25,6,6,0,0,0,0,0,1637),(25,6,7,0,0,0,0,0,1638),(25,6,8,0,0,0,0,0,1639),(25,7,0,0,0,7,0,0,1640),(25,7,1,1,2,0,0,0,1641),(25,7,2,0,0,0,0,0,1642),(25,7,3,0,0,0,0,0,1643),(25,7,4,0,0,0,0,0,1644),(25,7,5,0,0,0,0,0,1645),(25,7,6,0,0,0,0,0,1646),(25,7,7,0,0,0,0,0,1647),(25,7,8,0,0,0,0,0,1648),(26,0,0,0,0,7,0,0,1704),(26,0,1,1,2,0,0,0,1705),(26,0,2,0,0,0,0,0,1706),(26,0,3,0,0,0,0,0,1707),(26,0,4,0,0,0,0,0,1708),(26,0,5,0,0,0,0,0,1709),(26,0,6,0,0,0,0,0,1710),(26,0,7,0,0,0,0,0,1711),(26,0,8,0,0,0,0,0,1712),(26,1,0,0,0,7,0,0,1713),(26,1,1,1,2,0,0,0,1714),(26,1,2,0,0,0,0,0,1715),(26,1,3,0,0,0,0,0,1716),(26,1,4,0,0,0,0,0,1717),(26,1,5,0,0,0,0,0,1718),(26,1,6,0,0,0,0,0,1719),(26,1,7,0,0,0,0,0,1720),(26,1,8,0,0,0,0,0,1721),(26,2,0,0,0,2,0,1,1722),(26,2,1,1,2,6,0,0,1723),(26,2,2,3,5,1,2,0,1724),(26,2,3,6,1000,2,3,0,1725),(26,2,4,0,0,0,0,0,1726),(26,2,5,0,0,0,0,0,1727),(26,2,6,0,0,0,0,0,1728),(26,2,7,0,0,0,0,0,1729),(26,2,8,0,0,0,0,0,1730),(26,3,0,0,0,7,0,0,1731),(26,3,1,1,2,0,0,0,1732),(26,3,2,0,0,0,0,0,1733),(26,3,3,0,0,0,0,0,1734),(26,3,4,0,0,0,0,0,1735),(26,3,5,0,0,0,0,0,1736),(26,3,6,0,0,0,0,0,1737),(26,3,7,0,0,0,0,0,1738),(26,3,8,0,0,0,0,0,1739),(26,4,0,0,0,7,0,0,1740),(26,4,1,1,2,0,0,0,1741),(26,4,2,0,0,0,0,0,1742),(26,4,3,0,0,0,0,0,1743),(26,4,4,0,0,0,0,0,1744),(26,4,5,0,0,0,0,0,1745),(26,4,6,0,0,0,0,0,1746),(26,4,7,0,0,0,0,0,1747),(26,4,8,0,0,0,0,0,1748),(26,5,0,0,0,7,0,0,1749),(26,5,1,1,2,0,0,0,1750),(26,5,2,0,0,0,0,0,1751),(26,5,3,0,0,0,0,0,1752),(26,5,4,0,0,0,0,0,1753),(26,5,5,0,0,0,0,0,1754),(26,5,6,0,0,0,0,0,1755),(26,5,7,0,0,0,0,0,1756),(26,5,8,0,0,0,0,0,1757),(26,6,0,0,0,7,0,0,1758),(26,6,1,1,2,0,0,0,1759),(26,6,2,0,0,0,0,0,1760),(26,6,3,0,0,0,0,0,1761),(26,6,4,0,0,0,0,0,1762),(26,6,5,0,0,0,0,0,1763),(26,6,6,0,0,0,0,0,1764),(26,6,7,0,0,0,0,0,1765),(26,6,8,0,0,0,0,0,1766),(26,7,0,0,0,7,0,0,1767),(26,7,1,1,2,0,0,0,1768),(26,7,2,0,0,0,0,0,1769),(26,7,3,0,0,0,0,0,1770),(26,7,4,0,0,0,0,0,1771),(26,7,5,0,0,0,0,0,1772),(26,7,6,0,0,0,0,0,1773),(26,7,7,0,0,0,0,0,1774),(26,7,8,0,0,0,0,0,1775),(27,0,0,0,0,7,0,0,1776),(27,0,1,1,2,0,0,0,1777),(27,0,2,0,0,0,0,0,1778),(27,0,3,0,0,0,0,0,1779),(27,0,4,0,0,0,0,0,1780),(27,0,5,0,0,0,0,0,1781),(27,0,6,0,0,0,0,0,1782),(27,0,7,0,0,0,0,0,1783),(27,0,8,0,0,0,0,0,1784),(27,1,0,0,0,7,0,0,1785),(27,1,1,1,2,0,0,0,1786),(27,1,2,0,0,0,0,0,1787),(27,1,3,0,0,0,0,0,1788),(27,1,4,0,0,0,0,0,1789),(27,1,5,0,0,0,0,0,1790),(27,1,6,0,0,0,0,0,1791),(27,1,7,0,0,0,0,0,1792),(27,1,8,0,0,0,0,0,1793),(27,2,0,0,0,2,0,1,1794),(27,2,1,1,2,6,0,0,1795),(27,2,2,3,5,1,2,0,1796),(27,2,3,6,1000,2,3,0,1797),(27,2,4,0,0,0,0,0,1798),(27,2,5,0,0,0,0,0,1799),(27,2,6,0,0,0,0,0,1800),(27,2,7,0,0,0,0,0,1801),(27,2,8,0,0,0,0,0,1802),(27,3,0,0,0,7,0,0,1803),(27,3,1,1,2,0,0,0,1804),(27,3,2,0,0,0,0,0,1805),(27,3,3,0,0,0,0,0,1806),(27,3,4,0,0,0,0,0,1807),(27,3,5,0,0,0,0,0,1808),(27,3,6,0,0,0,0,0,1809),(27,3,7,0,0,0,0,0,1810),(27,3,8,0,0,0,0,0,1811),(27,4,0,0,0,7,0,0,1812),(27,4,1,1,2,0,0,0,1813),(27,4,2,0,0,0,0,0,1814),(27,4,3,0,0,0,0,0,1815),(27,4,4,0,0,0,0,0,1816),(27,4,5,0,0,0,0,0,1817),(27,4,6,0,0,0,0,0,1818),(27,4,7,0,0,0,0,0,1819),(27,4,8,0,0,0,0,0,1820),(27,5,0,0,0,7,0,0,1821),(27,5,1,1,2,0,0,0,1822),(27,5,2,0,0,0,0,0,1823),(27,5,3,0,0,0,0,0,1824),(27,5,4,0,0,0,0,0,1825),(27,5,5,0,0,0,0,0,1826),(27,5,6,0,0,0,0,0,1827),(27,5,7,0,0,0,0,0,1828),(27,5,8,0,0,0,0,0,1829),(27,6,0,0,0,7,0,0,1830),(27,6,1,1,2,0,0,0,1831),(27,6,2,0,0,0,0,0,1832),(27,6,3,0,0,0,0,0,1833),(27,6,4,0,0,0,0,0,1834),(27,6,5,0,0,0,0,0,1835),(27,6,6,0,0,0,0,0,1836),(27,6,7,0,0,0,0,0,1837),(27,6,8,0,0,0,0,0,1838),(27,7,0,0,0,7,0,0,1839),(27,7,1,1,2,0,0,0,1840),(27,7,2,0,0,0,0,0,1841),(27,7,3,0,0,0,0,0,1842),(27,7,4,0,0,0,0,0,1843),(27,7,5,0,0,0,0,0,1844),(27,7,6,0,0,0,0,0,1845),(27,7,7,0,0,0,0,0,1846),(27,7,8,0,0,0,0,0,1847),(28,0,0,0,0,7,0,0,1903),(28,0,1,1,2,0,0,0,1904),(28,0,2,0,0,0,0,0,1905),(28,0,3,0,0,0,0,0,1906),(28,0,4,0,0,0,0,0,1907),(28,0,5,0,0,0,0,0,1908),(28,0,6,0,0,0,0,0,1909),(28,0,7,0,0,0,0,0,1910),(28,0,8,0,0,0,0,0,1911),(28,1,0,0,0,7,0,0,1912),(28,1,1,1,2,0,0,0,1913),(28,1,2,0,0,0,0,0,1914),(28,1,3,0,0,0,0,0,1915),(28,1,4,0,0,0,0,0,1916),(28,1,5,0,0,0,0,0,1917),(28,1,6,0,0,0,0,0,1918),(28,1,7,0,0,0,0,0,1919),(28,1,8,0,0,0,0,0,1920),(28,2,0,0,0,2,0,1,1921),(28,2,1,1,2,6,0,0,1922),(28,2,2,3,5,1,2,0,1923),(28,2,3,6,1000,2,3,0,1924),(28,2,4,0,0,0,0,0,1925),(28,2,5,0,0,0,0,0,1926),(28,2,6,0,0,0,0,0,1927),(28,2,7,0,0,0,0,0,1928),(28,2,8,0,0,0,0,0,1929),(28,3,0,0,0,7,0,0,1930),(28,3,1,1,2,0,0,0,1931),(28,3,2,0,0,0,0,0,1932),(28,3,3,0,0,0,0,0,1933),(28,3,4,0,0,0,0,0,1934),(28,3,5,0,0,0,0,0,1935),(28,3,6,0,0,0,0,0,1936),(28,3,7,0,0,0,0,0,1937),(28,3,8,0,0,0,0,0,1938),(28,4,0,0,0,7,0,0,1939),(28,4,1,1,2,0,0,0,1940),(28,4,2,0,0,0,0,0,1941),(28,4,3,0,0,0,0,0,1942),(28,4,4,0,0,0,0,0,1943),(28,4,5,0,0,0,0,0,1944),(28,4,6,0,0,0,0,0,1945),(28,4,7,0,0,0,0,0,1946),(28,4,8,0,0,0,0,0,1947),(28,5,0,0,0,7,0,0,1948),(28,5,1,1,2,0,0,0,1949),(28,5,2,0,0,0,0,0,1950),(28,5,3,0,0,0,0,0,1951),(28,5,4,0,0,0,0,0,1952),(28,5,5,0,0,0,0,0,1953),(28,5,6,0,0,0,0,0,1954),(28,5,7,0,0,0,0,0,1955),(28,5,8,0,0,0,0,0,1956),(28,6,0,0,0,7,0,0,1957),(28,6,1,1,2,0,0,0,1958),(28,6,2,0,0,0,0,0,1959),(28,6,3,0,0,0,0,0,1960),(28,6,4,0,0,0,0,0,1961),(28,6,5,0,0,0,0,0,1962),(28,6,6,0,0,0,0,0,1963),(28,6,7,0,0,0,0,0,1964),(28,6,8,0,0,0,0,0,1965),(28,7,0,0,0,7,0,0,1966),(28,7,1,1,2,0,0,0,1967),(28,7,2,0,0,0,0,0,1968),(28,7,3,0,0,0,0,0,1969),(28,7,4,0,0,0,0,0,1970),(28,7,5,0,0,0,0,0,1971),(28,7,6,0,0,0,0,0,1972),(28,7,7,0,0,0,0,0,1973),(28,7,8,0,0,0,0,0,1974);
/*!40000 ALTER TABLE `feerate` ENABLE KEYS */;
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
) ENGINE=InnoDB AUTO_INCREMENT=39 DEFAULT CHARSET=gb2312;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `userinfo`
--

LOCK TABLES `userinfo` WRITE;
/*!40000 ALTER TABLE `userinfo` DISABLE KEYS */;
INSERT INTO `userinfo` VALUES (33,'未知','未知','未知','未知','未知','未知',NULL,'448760',''),(34,'未知','未知','未知','未知','未知','未知',NULL,'447551',''),(35,'未知','未知','未知','未知','未知','未知',NULL,'447520',''),(38,'未知','未知','未知','未知','未知','未知',NULL,'15406074','');
/*!40000 ALTER TABLE `userinfo` ENABLE KEYS */;
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
) ENGINE=InnoDB AUTO_INCREMENT=44 DEFAULT CHARSET=gb2312;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `roadconerinfo`
--

LOCK TABLES `roadconerinfo` WRITE;
/*!40000 ALTER TABLE `roadconerinfo` DISABLE KEYS */;
INSERT INTO `roadconerinfo` VALUES (32,108,3,0,0,0,0,'B入','192.168.1.24','127.0.0.1','127.0.0.1','127.0.0.1',0),(33,109,1,0,0,0,0,'A入','192.168.1.24','127.0.0.1','127.0.0.1','127.0.0.1',0),(34,110,4,0,0,0,0,'B出','192.168.1.24','127.0.0.1','127.0.0.1','127.0.0.1',0),(35,111,5,0,0,0,0,'C入','192.168.1.24','127.0.0.1','127.0.0.1','127.0.0.1',0),(36,112,6,0,0,0,0,'C出','192.168.1.24','127.0.0.1','127.0.0.1','127.0.0.1',0),(37,113,2,0,0,0,0,'A出','192.168.1.24','127.0.0.1','127.0.0.1','127.0.0.1',0),(40,118,9,0,0,0,0,'A2入','192.168.1.24','127.0.0.1','127.0.0.1','127.0.0.1',0),(41,119,10,0,0,0,0,'A2出','192.168.1.24','127.0.0.1','127.0.0.1','127.0.0.1',0),(42,120,7,0,0,0,0,'A1入','192.168.1.24','127.0.0.1','127.0.0.1','127.0.0.1',0),(43,121,8,0,0,0,0,'A2出','192.168.1.24','127.0.0.1','127.0.0.1','127.0.0.1',0);
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
) ENGINE=InnoDB AUTO_INCREMENT=122 DEFAULT CHARSET=gb2312;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `treeview`
--

LOCK TABLES `treeview` WRITE;
/*!40000 ALTER TABLE `treeview` DISABLE KEYS */;
INSERT INTO `treeview` VALUES (104,0,1,'tcc','最外围'),(105,0,104,'tcc','停车场A'),(106,0,104,'tcc','停车场B'),(107,0,104,'tcc','停车场C'),(108,0,106,'kzq','B入'),(109,0,105,'kzq','A入'),(110,0,106,'kzq','B出'),(111,0,107,'kzq','C入'),(112,0,107,'kzq','C出'),(113,0,105,'kzq','A出'),(114,0,105,'tcc','停车场A1'),(115,0,105,'tcc','停车场A2'),(118,0,115,'kzq','A2入'),(119,0,115,'kzq','A2出'),(120,0,114,'kzq','A1入'),(121,0,114,'kzq','A2出');
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
INSERT INTO `monthcard` VALUES ('447520','2012-03-27 14:30:41','2012-04-27 14:30:41','启用','EMID卡','未知','未知','停车场管理员',0,0,0),('447551','2012-03-27 14:30:42','2012-04-27 14:30:42','启用','EMID卡','未知','未知','停车场管理员',0,0,0),('448760','2012-03-27 14:30:43','2012-04-27 14:30:43','启用','EMID卡','未知','未知','停车场管理员',0,0,0);
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
-- Dumping events for database 'parkadmin'
--

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

-- Dump completed on 2012-04-04 14:43:42
CREATE DATABASE  IF NOT EXISTS `pmshistory` /*!40100 DEFAULT CHARACTER SET gb2312 */;
USE `pmshistory`;
-- MySQL dump 10.13  Distrib 5.5.16, for Win32 (x86)
--
-- Host: localhost    Database: pmshistory
-- ------------------------------------------------------
-- Server version	5.5.21-log

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
/*!40000 ALTER TABLE `parkdongleinfo` ENABLE KEYS */;
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
INSERT INTO `tmpcard` VALUES ('1113554','EMID卡','小型车','未知','启用',0,0,0),('15395143','EMID卡','小型车','未知','启用',0,0,0),('9400338','EMID卡','小型车','','启用',0,0,0);
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
/*!50003 CREATE*/ /*!50017 DEFINER=`root`@`localhost`*/ /*!50003 TRIGGER `pmshistory`.`tmpcard_ai`
AFTER INSERT ON `pmshistory`.`tmpcard`
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
/*!50003 CREATE*/ /*!50017 DEFINER=`root`@`localhost`*/ /*!50003 TRIGGER `pmshistory`.`tmpcard_au`
AFTER UPDATE ON `pmshistory`.`tmpcard`
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
/*!50003 CREATE*/ /*!50017 DEFINER=`root`@`localhost`*/ /*!50003 TRIGGER `pmshistory`.`tmpcard_ad`
AFTER DELETE ON `pmshistory`.`tmpcard`
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
) ENGINE=InnoDB DEFAULT CHARSET=gb2312;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `parkinfo`
--

LOCK TABLES `parkinfo` WRITE;
/*!40000 ALTER TABLE `parkinfo` DISABLE KEYS */;
/*!40000 ALTER TABLE `parkinfo` ENABLE KEYS */;
UNLOCK TABLES;

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
) ENGINE=InnoDB DEFAULT CHARSET=gb2312;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `operator`
--

LOCK TABLES `operator` WRITE;
/*!40000 ALTER TABLE `operator` DISABLE KEYS */;
/*!40000 ALTER TABLE `operator` ENABLE KEYS */;
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
  `firstjstime` int(11) DEFAULT '0'
) ENGINE=InnoDB DEFAULT CHARSET=gb2312;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `feerate1`
--

LOCK TABLES `feerate1` WRITE;
/*!40000 ALTER TABLE `feerate1` DISABLE KEYS */;
/*!40000 ALTER TABLE `feerate1` ENABLE KEYS */;
UNLOCK TABLES;

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
  `intime` datetime NOT NULL,
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
  `MayDelete` tinyint(4) DEFAULT '0',
  PRIMARY KEY (`stoprdid`,`intime`),
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
) ENGINE=InnoDB DEFAULT CHARSET=gb2312
/*!50100 PARTITION BY LINEAR HASH (month( intime ) %31)
PARTITIONS 31 */;
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
/*!50003 CREATE*/ /*!50017 DEFINER=`test`@`%`*/ /*!50003 TRIGGER `pmshistory`.`ModifyMayDelte`
BEFORE UPDATE ON `pmshistory`.`stoprd`
FOR EACH ROW
begin
    -- Update Counter;
    set new.MayDelete = old.MayDelete + 1;
end */;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;

--
-- Table structure for table `log`
--

DROP TABLE IF EXISTS `log`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `log` (
  `idlog` int(11) NOT NULL AUTO_INCREMENT,
  `txt` blob,
  PRIMARY KEY (`idlog`)
) ENGINE=InnoDB AUTO_INCREMENT=61 DEFAULT CHARSET=gb2312;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `log`
--

LOCK TABLES `log` WRITE;
/*!40000 ALTER TABLE `log` DISABLE KEYS */;
INSERT INTO `log` VALUES (60,'delete from stoprd where stoprdid in ( select stoprdid FROM stoprd where ( cardno like \'%(%)%\' or outvideo1 is not null ) and inshebeiname =\'C��\') as tmp');
/*!40000 ALTER TABLE `log` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `tmpcardintime`
--

DROP TABLE IF EXISTS `tmpcardintime`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `tmpcardintime` (
  `idtmpcardintime` int(11) NOT NULL AUTO_INCREMENT,
  `cardno` varchar(45) NOT NULL,
  `intime` datetime NOT NULL,
  `invideo1` longblob,
  PRIMARY KEY (`idtmpcardintime`)
) ENGINE=InnoDB DEFAULT CHARSET=gb2312;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `tmpcardintime`
--

LOCK TABLES `tmpcardintime` WRITE;
/*!40000 ALTER TABLE `tmpcardintime` DISABLE KEYS */;
/*!40000 ALTER TABLE `tmpcardintime` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `stoprdtmpid`
--

DROP TABLE IF EXISTS `stoprdtmpid`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `stoprdtmpid` (
  `idstoprdid` bigint(20) NOT NULL AUTO_INCREMENT,
  `id` bigint(20) NOT NULL,
  PRIMARY KEY (`idstoprdid`)
) ENGINE=InnoDB DEFAULT CHARSET=gb2312;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `stoprdtmpid`
--

LOCK TABLES `stoprdtmpid` WRITE;
/*!40000 ALTER TABLE `stoprdtmpid` DISABLE KEYS */;
/*!40000 ALTER TABLE `stoprdtmpid` ENABLE KEYS */;
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
) ENGINE=InnoDB DEFAULT CHARSET=gb2312;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `roadconerinfo`
--

LOCK TABLES `roadconerinfo` WRITE;
/*!40000 ALTER TABLE `roadconerinfo` DISABLE KEYS */;
/*!40000 ALTER TABLE `roadconerinfo` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `stoprd6`
--

DROP TABLE IF EXISTS `stoprd6`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `stoprd6` (
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
  `intime` datetime NOT NULL,
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
  `MayDelete` tinyint(4) DEFAULT '0',
  PRIMARY KEY (`stoprdid`,`intime`),
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
) ENGINE=InnoDB DEFAULT CHARSET=gb2312
/*!50100 PARTITION BY LINEAR HASH (month( intime ) %31)
PARTITIONS 31 */;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `stoprd6`
--

LOCK TABLES `stoprd6` WRITE;
/*!40000 ALTER TABLE `stoprd6` DISABLE KEYS */;
/*!40000 ALTER TABLE `stoprd6` ENABLE KEYS */;
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
) ENGINE=InnoDB DEFAULT CHARSET=gb2312;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `feerate`
--

LOCK TABLES `feerate` WRITE;
/*!40000 ALTER TABLE `feerate` DISABLE KEYS */;
/*!40000 ALTER TABLE `feerate` ENABLE KEYS */;
UNLOCK TABLES;

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
) ENGINE=InnoDB AUTO_INCREMENT=8 DEFAULT CHARSET=gb2312;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `userinfo`
--

LOCK TABLES `userinfo` WRITE;
/*!40000 ALTER TABLE `userinfo` DISABLE KEYS */;
INSERT INTO `userinfo` VALUES (1,'未知','未知','未知','未知','未知','未知',NULL,'1109682',''),(2,'未知','女','未知','未知','未知','未知',NULL,'1105986',''),(3,'','女','','','','',NULL,'',''),(5,'未知','未知','未知','未知','未知','未知',NULL,'222656',''),(6,'','女','','','','',NULL,'',''),(7,'未知','未知','未知','未知','未知','未知',NULL,'1118066','');
/*!40000 ALTER TABLE `userinfo` ENABLE KEYS */;
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
INSERT INTO `monthcard` VALUES ('1105986','2012-01-31 09:39:01','2012-02-29 09:39:01','启用','EMID卡','未知','未知','停车场管理员',1,0,0),('1109682','2012-01-31 09:39:03','2012-02-29 09:39:03','启用','EMID卡','未知','未知','停车场管理员',0,0,0),('1118066','2012-03-07 11:51:40','2012-04-07 11:51:40','启用','EMID卡','','未知','停车场管理员',1,0,0),('1118550','2012-02-06 17:06:24','2012-03-06 17:06:24','启用','EMID卡','未知','未知','停车场管理员',0,0,0);
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
/*!50003 CREATE*/ /*!50017 DEFINER=`root`@`localhost`*/ /*!50003 TRIGGER `pmshistory`.`monthcard_ai`
AFTER INSERT ON `pmshistory`.`monthcard`
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
/*!50003 CREATE*/ /*!50017 DEFINER=`root`@`localhost`*/ /*!50003 TRIGGER `pmshistory`.`monthcard_au`
AFTER UPDATE ON `pmshistory`.`monthcard`
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
/*!50003 CREATE*/ /*!50017 DEFINER=`root`@`localhost`*/ /*!50003 TRIGGER `pmshistory`.`monthcard_ad`
AFTER DELETE ON `pmshistory`.`monthcard`
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
) ENGINE=InnoDB DEFAULT CHARSET=gb2312;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `pmslog`
--

LOCK TABLES `pmslog` WRITE;
/*!40000 ALTER TABLE `pmslog` DISABLE KEYS */;
/*!40000 ALTER TABLE `pmslog` ENABLE KEYS */;
UNLOCK TABLES;

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
) ENGINE=InnoDB DEFAULT CHARSET=gb2312;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `cardright`
--

LOCK TABLES `cardright` WRITE;
/*!40000 ALTER TABLE `cardright` DISABLE KEYS */;
/*!40000 ALTER TABLE `cardright` ENABLE KEYS */;
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
  PRIMARY KEY (`feeindex`),
  KEY `feetime` (`feetime`),
  KEY `cardno` (`cardno`)
) ENGINE=InnoDB DEFAULT CHARSET=gb2312;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `feerd`
--

LOCK TABLES `feerd` WRITE;
/*!40000 ALTER TABLE `feerd` DISABLE KEYS */;
/*!40000 ALTER TABLE `feerd` ENABLE KEYS */;
UNLOCK TABLES;

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
) ENGINE=InnoDB DEFAULT CHARSET=gb2312;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `sysinfo`
--

LOCK TABLES `sysinfo` WRITE;
/*!40000 ALTER TABLE `sysinfo` DISABLE KEYS */;
/*!40000 ALTER TABLE `sysinfo` ENABLE KEYS */;
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
) ENGINE=InnoDB AUTO_INCREMENT=7 DEFAULT CHARSET=gb2312;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `carinfo`
--

LOCK TABLES `carinfo` WRITE;
/*!40000 ALTER TABLE `carinfo` DISABLE KEYS */;
INSERT INTO `carinfo` VALUES (1,'未知','小型车',NULL,'1109682','未知'),(2,'渝F41093','小型车',NULL,'1105986','未知'),(4,'未知','小型车',NULL,'222656','未知'),(5,'未知','未知',NULL,'9400338','未知'),(6,'未知','小型车',NULL,'1118066','未知');
/*!40000 ALTER TABLE `carinfo` ENABLE KEYS */;
UNLOCK TABLES;

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
INSERT INTO `savecard` VALUES ('222656','启用','EMID卡','未知','未知','停车场管理员','小型车',0,0,0,0);
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
/*!50003 CREATE*/ /*!50017 DEFINER=`root`@`localhost`*/ /*!50003 TRIGGER `pmshistory`.`savecard_ai`
AFTER INSERT ON `pmshistory`.`savecard`
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
/*!50003 CREATE*/ /*!50017 DEFINER=`root`@`localhost`*/ /*!50003 TRIGGER `pmshistory`.`savecard_au`
AFTER UPDATE ON `pmshistory`.`savecard`
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
/*!50003 CREATE*/ /*!50017 DEFINER=`root`@`localhost`*/ /*!50003 TRIGGER `pmshistory`.`savecard_ad`
AFTER DELETE ON `pmshistory`.`savecard`
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
/*!40000 ALTER TABLE `feeratebackup` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `stoprd2`
--

DROP TABLE IF EXISTS `stoprd2`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `stoprd2` (
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
  `intime` datetime NOT NULL,
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
  `MayDelete` tinyint(4) DEFAULT '0',
  PRIMARY KEY (`stoprdid`,`intime`),
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
) ENGINE=InnoDB DEFAULT CHARSET=gb2312
/*!50100 PARTITION BY LINEAR HASH (month( intime ) %31)
PARTITIONS 31 */;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `stoprd2`
--

LOCK TABLES `stoprd2` WRITE;
/*!40000 ALTER TABLE `stoprd2` DISABLE KEYS */;
/*!40000 ALTER TABLE `stoprd2` ENABLE KEYS */;
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
/*!40000 ALTER TABLE `license` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `stoprd9`
--

DROP TABLE IF EXISTS `stoprd9`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `stoprd9` (
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
  `intime` datetime NOT NULL,
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
  `MayDelete` tinyint(4) DEFAULT '0',
  PRIMARY KEY (`stoprdid`,`intime`),
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
) ENGINE=InnoDB DEFAULT CHARSET=gb2312
/*!50100 PARTITION BY LINEAR HASH (month( intime ) %31)
PARTITIONS 31 */;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `stoprd9`
--

LOCK TABLES `stoprd9` WRITE;
/*!40000 ALTER TABLE `stoprd9` DISABLE KEYS */;
/*!40000 ALTER TABLE `stoprd9` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `stoprd8`
--

DROP TABLE IF EXISTS `stoprd8`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `stoprd8` (
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
  `intime` datetime NOT NULL,
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
  `MayDelete` tinyint(4) DEFAULT '0',
  PRIMARY KEY (`stoprdid`,`intime`),
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
) ENGINE=InnoDB DEFAULT CHARSET=gb2312
/*!50100 PARTITION BY LINEAR HASH (month( intime ) %31)
PARTITIONS 31 */;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `stoprd8`
--

LOCK TABLES `stoprd8` WRITE;
/*!40000 ALTER TABLE `stoprd8` DISABLE KEYS */;
/*!40000 ALTER TABLE `stoprd8` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `stoprdxtmpid`
--

DROP TABLE IF EXISTS `stoprdxtmpid`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `stoprdxtmpid` (
  `idstoprdid` bigint(20) NOT NULL AUTO_INCREMENT,
  `id` bigint(20) NOT NULL,
  PRIMARY KEY (`idstoprdid`)
) ENGINE=InnoDB DEFAULT CHARSET=gb2312;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `stoprdxtmpid`
--

LOCK TABLES `stoprdxtmpid` WRITE;
/*!40000 ALTER TABLE `stoprdxtmpid` DISABLE KEYS */;
/*!40000 ALTER TABLE `stoprdxtmpid` ENABLE KEYS */;
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
-- Table structure for table `stoprd1`
--

DROP TABLE IF EXISTS `stoprd1`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `stoprd1` (
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
  `intime` datetime NOT NULL,
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
  `MayDelete` tinyint(4) DEFAULT '0',
  PRIMARY KEY (`stoprdid`,`intime`),
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
) ENGINE=InnoDB DEFAULT CHARSET=gb2312
/*!50100 PARTITION BY LINEAR HASH (month( intime ) %31)
PARTITIONS 31 */;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `stoprd1`
--

LOCK TABLES `stoprd1` WRITE;
/*!40000 ALTER TABLE `stoprd1` DISABLE KEYS */;
/*!40000 ALTER TABLE `stoprd1` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `stoprd0`
--

DROP TABLE IF EXISTS `stoprd0`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `stoprd0` (
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
  `intime` datetime NOT NULL,
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
  `MayDelete` tinyint(4) DEFAULT '0',
  PRIMARY KEY (`stoprdid`,`intime`),
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
) ENGINE=InnoDB DEFAULT CHARSET=gb2312
/*!50100 PARTITION BY LINEAR HASH (month( intime ) %31)
PARTITIONS 31 */;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `stoprd0`
--

LOCK TABLES `stoprd0` WRITE;
/*!40000 ALTER TABLE `stoprd0` DISABLE KEYS */;
/*!40000 ALTER TABLE `stoprd0` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `stoprd3`
--

DROP TABLE IF EXISTS `stoprd3`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `stoprd3` (
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
  `intime` datetime NOT NULL,
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
  `MayDelete` tinyint(4) DEFAULT '0',
  PRIMARY KEY (`stoprdid`,`intime`),
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
) ENGINE=InnoDB DEFAULT CHARSET=gb2312
/*!50100 PARTITION BY LINEAR HASH (month( intime ) %31)
PARTITIONS 31 */;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `stoprd3`
--

LOCK TABLES `stoprd3` WRITE;
/*!40000 ALTER TABLE `stoprd3` DISABLE KEYS */;
/*!40000 ALTER TABLE `stoprd3` ENABLE KEYS */;
UNLOCK TABLES;

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
) ENGINE=InnoDB DEFAULT CHARSET=gb2312;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `treeview`
--

LOCK TABLES `treeview` WRITE;
/*!40000 ALTER TABLE `treeview` DISABLE KEYS */;
/*!40000 ALTER TABLE `treeview` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `stoprd5`
--

DROP TABLE IF EXISTS `stoprd5`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `stoprd5` (
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
  `intime` datetime NOT NULL,
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
  `MayDelete` tinyint(4) DEFAULT '0',
  PRIMARY KEY (`stoprdid`,`intime`),
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
) ENGINE=InnoDB DEFAULT CHARSET=gb2312
/*!50100 PARTITION BY LINEAR HASH (month( intime ) %31)
PARTITIONS 31 */;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `stoprd5`
--

LOCK TABLES `stoprd5` WRITE;
/*!40000 ALTER TABLE `stoprd5` DISABLE KEYS */;
/*!40000 ALTER TABLE `stoprd5` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `stoprd4`
--

DROP TABLE IF EXISTS `stoprd4`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `stoprd4` (
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
  `intime` datetime NOT NULL,
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
  `MayDelete` tinyint(4) DEFAULT '0',
  PRIMARY KEY (`stoprdid`,`intime`),
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
) ENGINE=InnoDB DEFAULT CHARSET=gb2312
/*!50100 PARTITION BY LINEAR HASH (month( intime ) %31)
PARTITIONS 31 */;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `stoprd4`
--

LOCK TABLES `stoprd4` WRITE;
/*!40000 ALTER TABLE `stoprd4` DISABLE KEYS */;
/*!40000 ALTER TABLE `stoprd4` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `stoprd7`
--

DROP TABLE IF EXISTS `stoprd7`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `stoprd7` (
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
  `intime` datetime NOT NULL,
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
  `MayDelete` tinyint(4) DEFAULT '0',
  PRIMARY KEY (`stoprdid`,`intime`),
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
) ENGINE=InnoDB DEFAULT CHARSET=gb2312
/*!50100 PARTITION BY LINEAR HASH (month( intime ) %31)
PARTITIONS 31 */;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `stoprd7`
--

LOCK TABLES `stoprd7` WRITE;
/*!40000 ALTER TABLE `stoprd7` DISABLE KEYS */;
/*!40000 ALTER TABLE `stoprd7` ENABLE KEYS */;
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
/*!40000 ALTER TABLE `parkadminset` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Dumping events for database 'pmshistory'
--
/*!50106 SET @save_time_zone= @@TIME_ZONE */ ;
/*!50106 DROP EVENT IF EXISTS `SplitDataTimer` */;
DELIMITER ;;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;;
/*!50003 SET character_set_client  = utf8 */ ;;
/*!50003 SET character_set_results = utf8 */ ;;
/*!50003 SET collation_connection  = utf8_general_ci */ ;;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;;
/*!50003 SET sql_mode              = '' */ ;;
/*!50003 SET @saved_time_zone      = @@time_zone */ ;;
/*!50003 SET time_zone             = 'SYSTEM' */ ;;
/*!50106 CREATE*/ /*!50117 DEFINER=`test`@`%`*/ /*!50106 EVENT `SplitDataTimer` ON SCHEDULE EVERY 2 MINUTE STARTS '2012-03-22 14:48:39' ON COMPLETION PRESERVE DISABLE COMMENT 'Split Stoprd Data' DO call CallSplitStopRD( ) */ ;;
/*!50003 SET time_zone             = @saved_time_zone */ ;;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;;
/*!50003 SET character_set_client  = @saved_cs_client */ ;;
/*!50003 SET character_set_results = @saved_cs_results */ ;;
/*!50003 SET collation_connection  = @saved_col_connection */ ;;
/*!50106 DROP EVENT IF EXISTS `SplitDataXTimer` */;;
DELIMITER ;;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;;
/*!50003 SET character_set_client  = utf8 */ ;;
/*!50003 SET character_set_results = utf8 */ ;;
/*!50003 SET collation_connection  = utf8_general_ci */ ;;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;;
/*!50003 SET sql_mode              = '' */ ;;
/*!50003 SET @saved_time_zone      = @@time_zone */ ;;
/*!50003 SET time_zone             = 'SYSTEM' */ ;;
/*!50106 CREATE*/ /*!50117 DEFINER=`test`@`%`*/ /*!50106 EVENT `SplitDataXTimer` ON SCHEDULE EVERY 2 HOUR STARTS '2012-03-22 16:16:51' ON COMPLETION PRESERVE DISABLE COMMENT 'Split StoprdX Data' DO call DeleteDataStopRdX( ) */ ;;
/*!50003 SET time_zone             = @saved_time_zone */ ;;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;;
/*!50003 SET character_set_client  = @saved_cs_client */ ;;
/*!50003 SET character_set_results = @saved_cs_results */ ;;
/*!50003 SET collation_connection  = @saved_col_connection */ ;;
DELIMITER ;
/*!50106 SET TIME_ZONE= @save_time_zone */ ;

--
-- Dumping routines for database 'pmshistory'
--
/*!50003 DROP PROCEDURE IF EXISTS `CallSplitStopRD` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
/*!50003 CREATE*/ /*!50020 DEFINER=`test`@`%`*/ /*!50003 PROCEDURE `CallSplitStopRD`()
BEGIN
    call SplitStopRd( 'stoprd0', 'C入' );
    -- call SplitStopRd( 'stoprd1', 'D入' );
    -- call SplitStopRd( 'stoprd2', 'D入' );
    -- call SplitStopRd( 'stoprd3', 'D入' );
    -- call SplitStopRd( 'stoprd4', 'D入' );
    -- call SplitStopRd( 'stoprd5', 'D入' );
    -- call SplitStopRd( 'stoprd6', 'D入' );
    -- call SplitStopRd( 'stoprd7', 'D入' );
    -- call SplitStopRd( 'stoprd8', 'D入' );
    -- call SplitStopRd( 'stoprd9', 'D入' );
END */;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `DeleteDataStopRdX` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
/*!50003 CREATE*/ /*!50020 DEFINER=`test`@`%`*/ /*!50003 PROCEDURE `DeleteDataStopRdX`()
BEGIN
    -- set @curdate = NOW( ) - interval 2 hour;

    declare nCounter int default 0;
    
    while nCounter <= 9 do
        Set @MySQL = concat( 'delete from parkadmin.stoprd', nCounter, ' where MayDelete in ( 1, 3 )' );
        prepare STMT from @MySQL;
        execute STMT;
        deallocate prepare STMT;
        
        set nCounter = nCounter + 1;
    end while;
END */;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `SplitStopRd` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
/*!50003 CREATE*/ /*!50020 DEFINER=`test`@`%`*/ /*!50003 PROCEDURE `SplitStopRd`( in strTableName varchar( 32 ), in strChannelName varchar( 128 ) )
BEGIN
/*
    set @MySQL = concat( 'Insert Into parkadmin.', strTableName, '( cardno,inshebeiname,outshebeiname,invideo1,invideo2,invideo3,invideo4,
           outvideo1,outvideo2,outvideo3,outvideo4,intime,outtime,childrdindx,feebeizhu,
           feenum,feetime,feeoperator,feefactnum,carcp,username,cardselfno,carkind,feekind,
           cardkind,parkid,feezkh,feezkyy,carcpout,MayDelete ) 
           select cardno,inshebeiname,outshebeiname,invideo1,invideo2,invideo3,invideo4,
           outvideo1,outvideo2,outvideo3,outvideo4,intime,outtime,childrdindx,feebeizhu,
           feenum,feetime,feeoperator,feefactnum,carcp,username,cardselfno,carkind,feekind,
           cardkind,parkid,feezkh,feezkyy,carcpout,MayDelete FROM parkadmin.stoprd where ( ( cardno like \'%(%)%\' and MayDelete = 1 ) or ( MayDelete = 3) ) and inshebeiname =\'', strChannelName, '\'' );
           
    prepare STMT from @MySQL;
    execute STMT;
    deallocate prepare STMT;
    */
    
    set @MySQL = concat( 'Insert into parkadmin.stoprdtmpid( id ) select stoprdid FROM parkadmin.stoprd where ( stoprdid not in ( select Max( stoprdid ) from parkadmin.stoprd ) ) and ( ( cardno like \'%(%)%\' and MayDelete = 1 ) or ( MayDelete = 3 ) )' );
    prepare STMT from @MySQL;
    execute STMT;
    deallocate prepare STMT;
    
    delete a,b from parkadmin.stoprdtmpid as a, parkadmin.stoprd as b where b.stoprdid = a.id;
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

-- Dump completed on 2012-04-04 14:44:04
CREATE DATABASE  IF NOT EXISTS `pmsparthistory` /*!40100 DEFAULT CHARACTER SET gb2312 */;
USE `pmsparthistory`;
-- MySQL dump 10.13  Distrib 5.5.16, for Win32 (x86)
--
-- Host: localhost    Database: pmsparthistory
-- ------------------------------------------------------
-- Server version	5.5.21-log

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
/*!40000 ALTER TABLE `parkdongleinfo` ENABLE KEYS */;
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
INSERT INTO `tmpcard` VALUES ('1113554','EMID卡','小型车','未知','启用',0,0,0),('15395143','EMID卡','小型车','未知','启用',0,0,0),('9400338','EMID卡','小型车','','启用',0,0,0);
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
/*!50003 CREATE*/ /*!50017 DEFINER=`root`@`localhost`*/ /*!50003 TRIGGER `pmsparthistory`.`tmpcard_ai`
AFTER INSERT ON `pmsparthistory`.`tmpcard`
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
/*!50003 CREATE*/ /*!50017 DEFINER=`root`@`localhost`*/ /*!50003 TRIGGER `pmsparthistory`.`tmpcard_au`
AFTER UPDATE ON `pmsparthistory`.`tmpcard`
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
/*!50003 CREATE*/ /*!50017 DEFINER=`root`@`localhost`*/ /*!50003 TRIGGER `pmsparthistory`.`tmpcard_ad`
AFTER DELETE ON `pmsparthistory`.`tmpcard`
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
) ENGINE=InnoDB DEFAULT CHARSET=gb2312;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `parkinfo`
--

LOCK TABLES `parkinfo` WRITE;
/*!40000 ALTER TABLE `parkinfo` DISABLE KEYS */;
/*!40000 ALTER TABLE `parkinfo` ENABLE KEYS */;
UNLOCK TABLES;

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
) ENGINE=InnoDB DEFAULT CHARSET=gb2312;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `operator`
--

LOCK TABLES `operator` WRITE;
/*!40000 ALTER TABLE `operator` DISABLE KEYS */;
/*!40000 ALTER TABLE `operator` ENABLE KEYS */;
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
  `firstjstime` int(11) DEFAULT '0'
) ENGINE=InnoDB DEFAULT CHARSET=gb2312;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `feerate1`
--

LOCK TABLES `feerate1` WRITE;
/*!40000 ALTER TABLE `feerate1` DISABLE KEYS */;
/*!40000 ALTER TABLE `feerate1` ENABLE KEYS */;
UNLOCK TABLES;

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
  `intime` datetime NOT NULL,
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
  `MayDelete` tinyint(4) DEFAULT '0',
  PRIMARY KEY (`stoprdid`,`intime`),
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
) ENGINE=InnoDB DEFAULT CHARSET=gb2312
/*!50100 PARTITION BY LINEAR HASH (month( intime ) %31)
PARTITIONS 31 */;
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
/*!50003 CREATE*/ /*!50017 DEFINER=`test`@`%`*/ /*!50003 TRIGGER `pmsparthistory`.`SetDeleteFlag`
BEFORE INSERT ON `pmsparthistory`.`stoprd`
FOR EACH ROW
BEGIN
    set new.MayDelete = 2;
END */;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;

--
-- Table structure for table `log`
--

DROP TABLE IF EXISTS `log`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `log` (
  `idlog` int(11) NOT NULL AUTO_INCREMENT,
  `txt` blob,
  PRIMARY KEY (`idlog`)
) ENGINE=InnoDB DEFAULT CHARSET=gb2312;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `log`
--

LOCK TABLES `log` WRITE;
/*!40000 ALTER TABLE `log` DISABLE KEYS */;
/*!40000 ALTER TABLE `log` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `tmpcardintime`
--

DROP TABLE IF EXISTS `tmpcardintime`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `tmpcardintime` (
  `idtmpcardintime` int(11) NOT NULL AUTO_INCREMENT,
  `cardno` varchar(45) NOT NULL,
  `intime` datetime NOT NULL,
  `invideo1` longblob,
  PRIMARY KEY (`idtmpcardintime`)
) ENGINE=InnoDB DEFAULT CHARSET=gb2312;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `tmpcardintime`
--

LOCK TABLES `tmpcardintime` WRITE;
/*!40000 ALTER TABLE `tmpcardintime` DISABLE KEYS */;
/*!40000 ALTER TABLE `tmpcardintime` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `stoprdtmpid`
--

DROP TABLE IF EXISTS `stoprdtmpid`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `stoprdtmpid` (
  `idstoprdid` bigint(20) NOT NULL AUTO_INCREMENT,
  `id` bigint(20) NOT NULL,
  PRIMARY KEY (`idstoprdid`)
) ENGINE=InnoDB DEFAULT CHARSET=gb2312;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `stoprdtmpid`
--

LOCK TABLES `stoprdtmpid` WRITE;
/*!40000 ALTER TABLE `stoprdtmpid` DISABLE KEYS */;
/*!40000 ALTER TABLE `stoprdtmpid` ENABLE KEYS */;
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
) ENGINE=InnoDB DEFAULT CHARSET=gb2312;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `roadconerinfo`
--

LOCK TABLES `roadconerinfo` WRITE;
/*!40000 ALTER TABLE `roadconerinfo` DISABLE KEYS */;
/*!40000 ALTER TABLE `roadconerinfo` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `stoprd6`
--

DROP TABLE IF EXISTS `stoprd6`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `stoprd6` (
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
  `intime` datetime NOT NULL,
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
  `MayDelete` tinyint(4) DEFAULT '0',
  PRIMARY KEY (`stoprdid`,`intime`),
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
) ENGINE=InnoDB DEFAULT CHARSET=gb2312
/*!50100 PARTITION BY LINEAR HASH (month( intime ) %31)
PARTITIONS 31 */;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `stoprd6`
--

LOCK TABLES `stoprd6` WRITE;
/*!40000 ALTER TABLE `stoprd6` DISABLE KEYS */;
/*!40000 ALTER TABLE `stoprd6` ENABLE KEYS */;
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
) ENGINE=InnoDB DEFAULT CHARSET=gb2312;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `feerate`
--

LOCK TABLES `feerate` WRITE;
/*!40000 ALTER TABLE `feerate` DISABLE KEYS */;
/*!40000 ALTER TABLE `feerate` ENABLE KEYS */;
UNLOCK TABLES;

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
) ENGINE=InnoDB AUTO_INCREMENT=8 DEFAULT CHARSET=gb2312;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `userinfo`
--

LOCK TABLES `userinfo` WRITE;
/*!40000 ALTER TABLE `userinfo` DISABLE KEYS */;
INSERT INTO `userinfo` VALUES (1,'未知','未知','未知','未知','未知','未知',NULL,'1109682',''),(2,'未知','女','未知','未知','未知','未知',NULL,'1105986',''),(3,'','女','','','','',NULL,'',''),(5,'未知','未知','未知','未知','未知','未知',NULL,'222656',''),(6,'','女','','','','',NULL,'',''),(7,'未知','未知','未知','未知','未知','未知',NULL,'1118066','');
/*!40000 ALTER TABLE `userinfo` ENABLE KEYS */;
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
INSERT INTO `monthcard` VALUES ('1105986','2012-01-31 09:39:01','2012-02-29 09:39:01','启用','EMID卡','未知','未知','停车场管理员',1,0,0),('1109682','2012-01-31 09:39:03','2012-02-29 09:39:03','启用','EMID卡','未知','未知','停车场管理员',0,0,0),('1118066','2012-03-07 11:51:40','2012-04-07 11:51:40','启用','EMID卡','','未知','停车场管理员',1,0,0),('1118550','2012-02-06 17:06:24','2012-03-06 17:06:24','启用','EMID卡','未知','未知','停车场管理员',0,0,0);
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
/*!50003 CREATE*/ /*!50017 DEFINER=`root`@`localhost`*/ /*!50003 TRIGGER `pmsparthistory`.`monthcard_ai`
AFTER INSERT ON `pmsparthistory`.`monthcard`
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
/*!50003 CREATE*/ /*!50017 DEFINER=`root`@`localhost`*/ /*!50003 TRIGGER `pmsparthistory`.`monthcard_au`
AFTER UPDATE ON `pmsparthistory`.`monthcard`
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
/*!50003 CREATE*/ /*!50017 DEFINER=`root`@`localhost`*/ /*!50003 TRIGGER `pmsparthistory`.`monthcard_ad`
AFTER DELETE ON `pmsparthistory`.`monthcard`
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
) ENGINE=InnoDB DEFAULT CHARSET=gb2312;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `pmslog`
--

LOCK TABLES `pmslog` WRITE;
/*!40000 ALTER TABLE `pmslog` DISABLE KEYS */;
/*!40000 ALTER TABLE `pmslog` ENABLE KEYS */;
UNLOCK TABLES;

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
) ENGINE=InnoDB DEFAULT CHARSET=gb2312;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `cardright`
--

LOCK TABLES `cardright` WRITE;
/*!40000 ALTER TABLE `cardright` DISABLE KEYS */;
/*!40000 ALTER TABLE `cardright` ENABLE KEYS */;
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
  PRIMARY KEY (`feeindex`),
  KEY `feetime` (`feetime`),
  KEY `cardno` (`cardno`)
) ENGINE=InnoDB DEFAULT CHARSET=gb2312;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `feerd`
--

LOCK TABLES `feerd` WRITE;
/*!40000 ALTER TABLE `feerd` DISABLE KEYS */;
/*!40000 ALTER TABLE `feerd` ENABLE KEYS */;
UNLOCK TABLES;

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
) ENGINE=InnoDB DEFAULT CHARSET=gb2312;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `sysinfo`
--

LOCK TABLES `sysinfo` WRITE;
/*!40000 ALTER TABLE `sysinfo` DISABLE KEYS */;
/*!40000 ALTER TABLE `sysinfo` ENABLE KEYS */;
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
) ENGINE=InnoDB AUTO_INCREMENT=7 DEFAULT CHARSET=gb2312;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `carinfo`
--

LOCK TABLES `carinfo` WRITE;
/*!40000 ALTER TABLE `carinfo` DISABLE KEYS */;
INSERT INTO `carinfo` VALUES (1,'未知','小型车',NULL,'1109682','未知'),(2,'渝F41093','小型车',NULL,'1105986','未知'),(4,'未知','小型车',NULL,'222656','未知'),(5,'未知','未知',NULL,'9400338','未知'),(6,'未知','小型车',NULL,'1118066','未知');
/*!40000 ALTER TABLE `carinfo` ENABLE KEYS */;
UNLOCK TABLES;

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
INSERT INTO `savecard` VALUES ('222656','启用','EMID卡','未知','未知','停车场管理员','小型车',0,0,0,0);
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
/*!50003 CREATE*/ /*!50017 DEFINER=`root`@`localhost`*/ /*!50003 TRIGGER `pmsparthistory`.`savecard_ai`
AFTER INSERT ON `pmsparthistory`.`savecard`
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
/*!50003 CREATE*/ /*!50017 DEFINER=`root`@`localhost`*/ /*!50003 TRIGGER `pmsparthistory`.`savecard_au`
AFTER UPDATE ON `pmsparthistory`.`savecard`
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
/*!50003 CREATE*/ /*!50017 DEFINER=`root`@`localhost`*/ /*!50003 TRIGGER `pmsparthistory`.`savecard_ad`
AFTER DELETE ON `pmsparthistory`.`savecard`
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
/*!40000 ALTER TABLE `feeratebackup` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `stoprd2`
--

DROP TABLE IF EXISTS `stoprd2`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `stoprd2` (
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
  `intime` datetime NOT NULL,
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
  `MayDelete` tinyint(4) DEFAULT '0',
  PRIMARY KEY (`stoprdid`,`intime`),
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
) ENGINE=InnoDB DEFAULT CHARSET=gb2312
/*!50100 PARTITION BY LINEAR HASH (month( intime ) %31)
PARTITIONS 31 */;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `stoprd2`
--

LOCK TABLES `stoprd2` WRITE;
/*!40000 ALTER TABLE `stoprd2` DISABLE KEYS */;
/*!40000 ALTER TABLE `stoprd2` ENABLE KEYS */;
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
/*!40000 ALTER TABLE `license` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `stoprd9`
--

DROP TABLE IF EXISTS `stoprd9`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `stoprd9` (
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
  `intime` datetime NOT NULL,
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
  `MayDelete` tinyint(4) DEFAULT '0',
  PRIMARY KEY (`stoprdid`,`intime`),
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
) ENGINE=InnoDB DEFAULT CHARSET=gb2312
/*!50100 PARTITION BY LINEAR HASH (month( intime ) %31)
PARTITIONS 31 */;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `stoprd9`
--

LOCK TABLES `stoprd9` WRITE;
/*!40000 ALTER TABLE `stoprd9` DISABLE KEYS */;
/*!40000 ALTER TABLE `stoprd9` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `stoprd8`
--

DROP TABLE IF EXISTS `stoprd8`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `stoprd8` (
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
  `intime` datetime NOT NULL,
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
  `MayDelete` tinyint(4) DEFAULT '0',
  PRIMARY KEY (`stoprdid`,`intime`),
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
) ENGINE=InnoDB DEFAULT CHARSET=gb2312
/*!50100 PARTITION BY LINEAR HASH (month( intime ) %31)
PARTITIONS 31 */;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `stoprd8`
--

LOCK TABLES `stoprd8` WRITE;
/*!40000 ALTER TABLE `stoprd8` DISABLE KEYS */;
/*!40000 ALTER TABLE `stoprd8` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `stoprdxtmpid`
--

DROP TABLE IF EXISTS `stoprdxtmpid`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `stoprdxtmpid` (
  `idstoprdid` bigint(20) NOT NULL AUTO_INCREMENT,
  `id` bigint(20) NOT NULL,
  PRIMARY KEY (`idstoprdid`)
) ENGINE=InnoDB DEFAULT CHARSET=gb2312;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `stoprdxtmpid`
--

LOCK TABLES `stoprdxtmpid` WRITE;
/*!40000 ALTER TABLE `stoprdxtmpid` DISABLE KEYS */;
/*!40000 ALTER TABLE `stoprdxtmpid` ENABLE KEYS */;
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
-- Table structure for table `stoprd1`
--

DROP TABLE IF EXISTS `stoprd1`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `stoprd1` (
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
  `intime` datetime NOT NULL,
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
  `MayDelete` tinyint(4) DEFAULT '0',
  PRIMARY KEY (`stoprdid`,`intime`),
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
) ENGINE=InnoDB DEFAULT CHARSET=gb2312
/*!50100 PARTITION BY LINEAR HASH (month( intime ) %31)
PARTITIONS 31 */;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `stoprd1`
--

LOCK TABLES `stoprd1` WRITE;
/*!40000 ALTER TABLE `stoprd1` DISABLE KEYS */;
/*!40000 ALTER TABLE `stoprd1` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `stoprd0`
--

DROP TABLE IF EXISTS `stoprd0`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `stoprd0` (
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
  `intime` datetime NOT NULL,
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
  `MayDelete` tinyint(4) DEFAULT '0',
  PRIMARY KEY (`stoprdid`,`intime`),
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
) ENGINE=InnoDB DEFAULT CHARSET=gb2312
/*!50100 PARTITION BY LINEAR HASH (month( intime ) %31)
PARTITIONS 31 */;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `stoprd0`
--

LOCK TABLES `stoprd0` WRITE;
/*!40000 ALTER TABLE `stoprd0` DISABLE KEYS */;
/*!40000 ALTER TABLE `stoprd0` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `stoprd3`
--

DROP TABLE IF EXISTS `stoprd3`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `stoprd3` (
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
  `intime` datetime NOT NULL,
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
  `MayDelete` tinyint(4) DEFAULT '0',
  PRIMARY KEY (`stoprdid`,`intime`),
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
) ENGINE=InnoDB DEFAULT CHARSET=gb2312
/*!50100 PARTITION BY LINEAR HASH (month( intime ) %31)
PARTITIONS 31 */;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `stoprd3`
--

LOCK TABLES `stoprd3` WRITE;
/*!40000 ALTER TABLE `stoprd3` DISABLE KEYS */;
/*!40000 ALTER TABLE `stoprd3` ENABLE KEYS */;
UNLOCK TABLES;

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
) ENGINE=InnoDB DEFAULT CHARSET=gb2312;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `treeview`
--

LOCK TABLES `treeview` WRITE;
/*!40000 ALTER TABLE `treeview` DISABLE KEYS */;
/*!40000 ALTER TABLE `treeview` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `stoprd5`
--

DROP TABLE IF EXISTS `stoprd5`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `stoprd5` (
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
  `intime` datetime NOT NULL,
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
  `MayDelete` tinyint(4) DEFAULT '0',
  PRIMARY KEY (`stoprdid`,`intime`),
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
) ENGINE=InnoDB DEFAULT CHARSET=gb2312
/*!50100 PARTITION BY LINEAR HASH (month( intime ) %31)
PARTITIONS 31 */;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `stoprd5`
--

LOCK TABLES `stoprd5` WRITE;
/*!40000 ALTER TABLE `stoprd5` DISABLE KEYS */;
/*!40000 ALTER TABLE `stoprd5` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `stoprd4`
--

DROP TABLE IF EXISTS `stoprd4`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `stoprd4` (
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
  `intime` datetime NOT NULL,
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
  `MayDelete` tinyint(4) DEFAULT '0',
  PRIMARY KEY (`stoprdid`,`intime`),
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
) ENGINE=InnoDB DEFAULT CHARSET=gb2312
/*!50100 PARTITION BY LINEAR HASH (month( intime ) %31)
PARTITIONS 31 */;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `stoprd4`
--

LOCK TABLES `stoprd4` WRITE;
/*!40000 ALTER TABLE `stoprd4` DISABLE KEYS */;
/*!40000 ALTER TABLE `stoprd4` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `stoprd7`
--

DROP TABLE IF EXISTS `stoprd7`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `stoprd7` (
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
  `intime` datetime NOT NULL,
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
  `MayDelete` tinyint(4) DEFAULT '0',
  PRIMARY KEY (`stoprdid`,`intime`),
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
) ENGINE=InnoDB DEFAULT CHARSET=gb2312
/*!50100 PARTITION BY LINEAR HASH (month( intime ) %31)
PARTITIONS 31 */;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `stoprd7`
--

LOCK TABLES `stoprd7` WRITE;
/*!40000 ALTER TABLE `stoprd7` DISABLE KEYS */;
/*!40000 ALTER TABLE `stoprd7` ENABLE KEYS */;
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
/*!40000 ALTER TABLE `parkadminset` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Dumping events for database 'pmsparthistory'
--
/*!50106 SET @save_time_zone= @@TIME_ZONE */ ;
/*!50106 DROP EVENT IF EXISTS `DeleteDataSplitTimer` */;
DELIMITER ;;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;;
/*!50003 SET character_set_client  = utf8 */ ;;
/*!50003 SET character_set_results = utf8 */ ;;
/*!50003 SET collation_connection  = utf8_general_ci */ ;;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;;
/*!50003 SET sql_mode              = '' */ ;;
/*!50003 SET @saved_time_zone      = @@time_zone */ ;;
/*!50003 SET time_zone             = 'SYSTEM' */ ;;
/*!50106 CREATE*/ /*!50117 DEFINER=`test`@`%`*/ /*!50106 EVENT `DeleteDataSplitTimer` ON SCHEDULE EVERY 1 DAY STARTS '2012-03-23 01:00:00' ON COMPLETION PRESERVE DISABLE COMMENT 'Delete Stoprd Data Split' DO call DeleteDataSplit( ) */ ;;
/*!50003 SET time_zone             = @saved_time_zone */ ;;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;;
/*!50003 SET character_set_client  = @saved_cs_client */ ;;
/*!50003 SET character_set_results = @saved_cs_results */ ;;
/*!50003 SET collation_connection  = @saved_col_connection */ ;;
/*!50106 DROP EVENT IF EXISTS `DeleteOtherDataTimer` */;;
DELIMITER ;;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;;
/*!50003 SET character_set_client  = utf8 */ ;;
/*!50003 SET character_set_results = utf8 */ ;;
/*!50003 SET collation_connection  = utf8_general_ci */ ;;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;;
/*!50003 SET @saved_time_zone      = @@time_zone */ ;;
/*!50003 SET time_zone             = 'SYSTEM' */ ;;
/*!50106 CREATE*/ /*!50117 DEFINER=`test`@`%`*/ /*!50106 EVENT `DeleteOtherDataTimer` ON SCHEDULE EVERY 5 MINUTE STARTS '2012-03-27 14:59:11' ON COMPLETION PRESERVE DISABLE COMMENT 'Split Stoprd Other Data' DO call DeleteOtherData( ) */ ;;
/*!50003 SET time_zone             = @saved_time_zone */ ;;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;;
/*!50003 SET character_set_client  = @saved_cs_client */ ;;
/*!50003 SET character_set_results = @saved_cs_results */ ;;
/*!50003 SET collation_connection  = @saved_col_connection */ ;;
DELIMITER ;
/*!50106 SET TIME_ZONE= @save_time_zone */ ;

--
-- Dumping routines for database 'pmsparthistory'
--
/*!50003 DROP PROCEDURE IF EXISTS `DeleteDataSplit` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
/*!50003 CREATE*/ /*!50020 DEFINER=`test`@`%`*/ /*!50003 PROCEDURE `DeleteDataSplit`()
BEGIN
    set @curdate = NOW( ) - interval 180 day;
    
    delete from parkadmin.stoprd where intime <= @curdate and ( ( cardno like '%(%)%' and MayDelete = 1 ) or ( MayDelete = 3) );
    delete from parkadmin.garageingarage where DateTime <= @curdate;
END */;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `DeleteOtherData` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
/*!50003 CREATE*/ /*!50020 DEFINER=`test`@`%`*/ /*!50003 PROCEDURE `DeleteOtherData`()
BEGIN
    delete from stoprd where inshebeiname <> 'C入' and ( ( cardno like '%(%)%' and MayDelete = 1 ) or ( MayDelete = 3 )  );
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

-- Dump completed on 2012-04-04 14:44:22
