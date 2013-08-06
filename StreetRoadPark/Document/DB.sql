CREATE DATABASE  IF NOT EXISTS `streetroadpark` /*!40100 DEFAULT CHARACTER SET utf8 */;
USE `streetroadpark`;
-- MySQL dump 10.13  Distrib 5.6.12, for Win32 (x86)
--
-- Host: localhost    Database: streetroadpark
-- ------------------------------------------------------
-- Server version	5.6.12

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
-- Table structure for table `tabadministrativeinfo`
--

DROP TABLE IF EXISTS `tabadministrativeinfo`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `tabadministrativeinfo` (
  `AdministrativeID` varchar(6) NOT NULL,
  `AdministrativeName` varchar(45) NOT NULL,
  `AdministrativeComments` varchar(45) DEFAULT NULL,
  `AdministrativeParentID` varchar(6) NOT NULL,
  `AdministrativeType` enum('Province','City','District') NOT NULL,
  PRIMARY KEY (`AdministrativeID`),
  UNIQUE KEY `AdministrativeName_UNIQUE` (`AdministrativeName`),
  UNIQUE KEY `AdministrativeID_UNIQUE` (`AdministrativeID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `tabadministrativeinfo`
--

LOCK TABLES `tabadministrativeinfo` WRITE;
/*!40000 ALTER TABLE `tabadministrativeinfo` DISABLE KEYS */;
INSERT INTO `tabadministrativeinfo` VALUES ('510000','四川省',NULL,'0','Province'),('510100','成都市',NULL,'510000','City'),('510107','武侯区',NULL,'510100','District');
/*!40000 ALTER TABLE `tabadministrativeinfo` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `tabdetectorinfo`
--

DROP TABLE IF EXISTS `tabdetectorinfo`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `tabdetectorinfo` (
  `ParkReceiverID` varchar(13) NOT NULL,
  `DetectorID` varchar(3) NOT NULL COMMENT '每个接受管理的探测器ID编号唯一，分段管理\nR0 1-30\nR1 31-50\nR2 51-75\nR3 76-99',
  `DetectorChannelID` tinyint(3) unsigned DEFAULT '0',
  `DetectorComments` varchar(45) DEFAULT NULL,
  `Threshold` smallint(5) unsigned DEFAULT '0',
  `DelayTime` smallint(6) DEFAULT '0',
  `DetectorReset` bit(1) NOT NULL DEFAULT b'0',
  `ReceiverDetectorID` varchar(16) NOT NULL COMMENT 'ParkID+ReceiverID+DetectorID\nTrigger==>ParkID ReceiverID DetectorID',
  PRIMARY KEY (`ReceiverDetectorID`),
  UNIQUE KEY `ReceiverDetectorID_UNIQUE` (`ReceiverDetectorID`),
  KEY `ReceiverDetector_idx` (`ParkReceiverID`),
  CONSTRAINT `ReceiverDetector` FOREIGN KEY (`ParkReceiverID`) REFERENCES `tabreceiverinfo` (`ParkReceiverID`) ON DELETE CASCADE ON UPDATE CASCADE
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `tabdetectorinfo`
--

LOCK TABLES `tabdetectorinfo` WRITE;
/*!40000 ALTER TABLE `tabdetectorinfo` DISABLE KEYS */;
INSERT INTO `tabdetectorinfo` VALUES ('5101070001001','006',1,NULL,0,0,'\0','5101070001001006');
/*!40000 ALTER TABLE `tabdetectorinfo` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `tabdeviceregisterinfo`
--

DROP TABLE IF EXISTS `tabdeviceregisterinfo`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `tabdeviceregisterinfo` (
  `DeviceID` varchar(128) NOT NULL,
  `DeviceComments` varchar(45) DEFAULT NULL,
  `StartTime` datetime DEFAULT NULL,
  `EndTime` datetime DEFAULT NULL,
  `DeviceState` enum('Available','Unavailable') NOT NULL DEFAULT 'Available',
  `UnitID` varchar(9) DEFAULT NULL COMMENT 'Company ID==>TabUnitInfo\nhttp://www.nacao.org.cn/ 代码查询',
  `SerialNumber` varchar(1024) DEFAULT NULL,
  `Register` varchar(45) DEFAULT NULL,
  `UnRegister` varchar(45) DEFAULT NULL,
  PRIMARY KEY (`DeviceID`),
  UNIQUE KEY `DeviceID_UNIQUE` (`DeviceID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `tabdeviceregisterinfo`
--

LOCK TABLES `tabdeviceregisterinfo` WRITE;
/*!40000 ALTER TABLE `tabdeviceregisterinfo` DISABLE KEYS */;
INSERT INTO `tabdeviceregisterinfo` VALUES ('359732008920329',NULL,'2013-01-01 00:00:00','2014-01-01 00:00:00','Available','771237583','1234567890',NULL,NULL);
/*!40000 ALTER TABLE `tabdeviceregisterinfo` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `tabfeeinfo`
--

DROP TABLE IF EXISTS `tabfeeinfo`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `tabfeeinfo` (
  `RecordID` bigint(20) unsigned NOT NULL,
  `Prepayment` smallint(5) unsigned NOT NULL DEFAULT '0',
  `Payment` smallint(5) unsigned NOT NULL DEFAULT '0',
  `PrepaymentOperator` varchar(45) NOT NULL,
  `PrepaymentTime` datetime NOT NULL,
  `PaymentTime` datetime NOT NULL DEFAULT CURRENT_TIMESTAMP,
  `PaymentOperator` varchar(45) DEFAULT NULL,
  `PrepaymentUserID` bigint(20) unsigned DEFAULT NULL,
  `PaymentUserID` bigint(20) unsigned DEFAULT NULL,
  PRIMARY KEY (`RecordID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `tabfeeinfo`
--

LOCK TABLES `tabfeeinfo` WRITE;
/*!40000 ALTER TABLE `tabfeeinfo` DISABLE KEYS */;
INSERT INTO `tabfeeinfo` VALUES (7,0,5,'未知','2013-08-06 11:37:58','2013-08-06 11:52:58','未知',1,1);
/*!40000 ALTER TABLE `tabfeeinfo` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `tabgroupinfo`
--

DROP TABLE IF EXISTS `tabgroupinfo`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `tabgroupinfo` (
  `GroupID` bigint(20) unsigned NOT NULL AUTO_INCREMENT,
  `GroupName` varchar(45) NOT NULL,
  `GroupComments` varchar(45) DEFAULT NULL,
  `GroupParentID` bigint(20) NOT NULL,
  `GroupRight` bigint(20) unsigned DEFAULT NULL COMMENT '64 right bits',
  `UnitID` varchar(9) NOT NULL,
  PRIMARY KEY (`GroupID`),
  UNIQUE KEY `GroupName_UNIQUE` (`GroupName`),
  UNIQUE KEY `GroupID_UNIQUE` (`GroupID`),
  KEY `GroupUnit_idx` (`UnitID`),
  CONSTRAINT `GroupUnit` FOREIGN KEY (`UnitID`) REFERENCES `tabunitinfo` (`UnitID`) ON DELETE CASCADE ON UPDATE CASCADE
) ENGINE=InnoDB AUTO_INCREMENT=2 DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `tabgroupinfo`
--

LOCK TABLES `tabgroupinfo` WRITE;
/*!40000 ALTER TABLE `tabgroupinfo` DISABLE KEYS */;
INSERT INTO `tabgroupinfo` VALUES (1,'测试1',NULL,0,NULL,'771237583');
/*!40000 ALTER TABLE `tabgroupinfo` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `tabhistoryfeeinfo`
--

DROP TABLE IF EXISTS `tabhistoryfeeinfo`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `tabhistoryfeeinfo` (
  `RecordID` bigint(20) unsigned NOT NULL,
  `Prepayment` smallint(5) unsigned NOT NULL DEFAULT '0',
  `Payment` smallint(5) unsigned NOT NULL DEFAULT '0',
  `PrepaymentOperator` varchar(45) NOT NULL,
  `PrepaymentTime` datetime NOT NULL,
  `PaymentTime` datetime NOT NULL DEFAULT CURRENT_TIMESTAMP,
  `PaymentOperator` varchar(45) DEFAULT NULL,
  `PrepaymentUserID` bigint(20) unsigned DEFAULT NULL,
  `PaymentUserID` bigint(20) unsigned DEFAULT NULL,
  PRIMARY KEY (`RecordID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `tabhistoryfeeinfo`
--

LOCK TABLES `tabhistoryfeeinfo` WRITE;
/*!40000 ALTER TABLE `tabhistoryfeeinfo` DISABLE KEYS */;
/*!40000 ALTER TABLE `tabhistoryfeeinfo` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `tabhistoryinoutimageinfo`
--

DROP TABLE IF EXISTS `tabhistoryinoutimageinfo`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `tabhistoryinoutimageinfo` (
  `RecordID` bigint(20) unsigned NOT NULL,
  `EnterImage` longblob,
  `LeaveImage` longblob,
  `AddedTime` date NOT NULL,
  PRIMARY KEY (`RecordID`,`AddedTime`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8
/*!50100 PARTITION BY LINEAR HASH (MONTH(AddedTime))
PARTITIONS 12 */;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `tabhistoryinoutimageinfo`
--

LOCK TABLES `tabhistoryinoutimageinfo` WRITE;
/*!40000 ALTER TABLE `tabhistoryinoutimageinfo` DISABLE KEYS */;
/*!40000 ALTER TABLE `tabhistoryinoutimageinfo` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `tabhistoryinoutrecordinfo`
--

DROP TABLE IF EXISTS `tabhistoryinoutrecordinfo`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `tabhistoryinoutrecordinfo` (
  `RecordID` bigint(20) unsigned NOT NULL,
  `LocationID` varchar(16) NOT NULL,
  `EnterTime` datetime NOT NULL,
  `LeaveTime` datetime DEFAULT NULL,
  `EnterPlate` varchar(45) DEFAULT NULL,
  `LeavePlate` varchar(45) DEFAULT NULL,
  PRIMARY KEY (`RecordID`,`EnterTime`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8
/*!50100 PARTITION BY LINEAR HASH (MONTH(EnterTime))
PARTITIONS 12 */;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `tabhistoryinoutrecordinfo`
--

LOCK TABLES `tabhistoryinoutrecordinfo` WRITE;
/*!40000 ALTER TABLE `tabhistoryinoutrecordinfo` DISABLE KEYS */;
/*!40000 ALTER TABLE `tabhistoryinoutrecordinfo` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `tabhistoryloginfo`
--

DROP TABLE IF EXISTS `tabhistoryloginfo`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `tabhistoryloginfo` (
  `LogID` bigint(20) unsigned NOT NULL AUTO_INCREMENT,
  `LogInfo` longtext COMMENT 'IP@ClientID@Serial@Credit@Type@SQL',
  `LogDateTime` datetime NOT NULL,
  PRIMARY KEY (`LogID`,`LogDateTime`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8
/*!50100 PARTITION BY LINEAR HASH (MONTH( LogDateTime ))
PARTITIONS 12 */;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `tabhistoryloginfo`
--

LOCK TABLES `tabhistoryloginfo` WRITE;
/*!40000 ALTER TABLE `tabhistoryloginfo` DISABLE KEYS */;
/*!40000 ALTER TABLE `tabhistoryloginfo` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `tabhistoryuserloginoutinfo`
--

DROP TABLE IF EXISTS `tabhistoryuserloginoutinfo`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `tabhistoryuserloginoutinfo` (
  `LogID` bigint(20) unsigned NOT NULL AUTO_INCREMENT,
  `LogUserID` bigint(20) unsigned DEFAULT NULL,
  `LogTime` datetime NOT NULL DEFAULT CURRENT_TIMESTAMP,
  `LogType` enum('Login','Logout') DEFAULT NULL,
  `LogClientID` varchar(45) DEFAULT NULL,
  `LogIP` varchar(45) DEFAULT NULL,
  PRIMARY KEY (`LogID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `tabhistoryuserloginoutinfo`
--

LOCK TABLES `tabhistoryuserloginoutinfo` WRITE;
/*!40000 ALTER TABLE `tabhistoryuserloginoutinfo` DISABLE KEYS */;
/*!40000 ALTER TABLE `tabhistoryuserloginoutinfo` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `tabinoutimageinfo`
--

DROP TABLE IF EXISTS `tabinoutimageinfo`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `tabinoutimageinfo` (
  `RecordID` bigint(20) unsigned NOT NULL,
  `EnterImage` longblob,
  `LeaveImage` longblob,
  `AddedTime` date NOT NULL,
  PRIMARY KEY (`RecordID`,`AddedTime`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8
/*!50100 PARTITION BY LINEAR HASH (MONTH(AddedTime))
PARTITIONS 12 */;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `tabinoutimageinfo`
--

LOCK TABLES `tabinoutimageinfo` WRITE;
/*!40000 ALTER TABLE `tabinoutimageinfo` DISABLE KEYS */;
INSERT INTO `tabinoutimageinfo` VALUES (7,'����\0JFIF\0\0\0\0\0\0��\0C\0\n\n\n\r\r��\0C		\r\r��\0��\"\0��\0\0\0\0\0\0\0\0\0\0\0	\n��\0�\0\0\0}\0!1AQa\"q2���#B��R��$3br�	\n\Z%&\'()*456789:CDEFGHIJSTUVWXYZcdefghijstuvwxyz���������������������������������������������������������������������������\0\0\0\0\0\0\0\0	\n��\0�\0\0w\0!1AQaq\"2�B����	#3R�br�\n$4�%�\Z&\'()*56789:CDEFGHIJSTUVWXYZcdefghijstuvwxyz��������������������������������������������������������������������������\0\0\0?\0����n8�*�V{�����\0EhEm� r+�I�$�V.\rh[��jx�pNNjݽ�3��+�8�5em��ZQDr)��rE][�㨩��);�r�*�K;l�p+��	��u��ٷ�@\\����d�EwS|�&\r%t@��ܜN�����,.�=A�:�W���ЛL�N�Д��$�Y$YS��V���v�>���^蕶�<��5��\r�3���R�����I��1�wD���[��)l�����	9�H�\nq�@խBI@-��+r\n1#�#>7��W\0�4]�ĩv&,][\rQ����S	�Dx�U���I��T�;�dbz��\0�>�K]����?�H��.�\0j�:R��ֱRcM��R���RE*���UX`Ԉ��;qN\Z�7�8�ܘ�Ks�Y>M���n���}HIs]����g�=+F�T2�n��F�$��~�,���7{�J�7e׻�>�����0�?(����߅=��٥nP�F���\n\'ڮ�ڻǸg��r��T���\\�L�E����\0�:78��4�T܉r�T\rܞ�5��ެ6�7aޝ\rሟ�⳶�]^��w\\1\"(>lhw\0�����~\"\r;�M��n���?���kjW#<�S�d�\r�S��*oC�үn<I�==e�n�����y�\0?���MV����KӘ,`+��,@�������\rIo�ǚ��n�s���\0��Р��}eop�n|�P�;c���6���ǕCO�����\\�c�\'�}k^?���Y$`��E\Z�ߧ�^�Fx�g��G�U��w�U���ֽD�l~&�P\"���}���2>o��VJZo�q[����\ZZ��nNd�͞�5���M�x��[��q�!��p[��\0����ơ+\r�b��`�@��-[DߛVi��A\'�<adF�c�Nu+�!-b89���ڵ-�y�5����)�\'$��Ƈtq�VcM;�mu&6�Т��>��WBJ����#\n29�d�Uմ3\r��v�P>���!V�M�5kW\r�1Lt����n�Ӕu0��z��UI4�\'�=��0*&A����J7��JJ�Ne���6���I-�\r��u/\n��2G\\T/h�\0)j�2�V9VR�֡n��g���@��u�r���[�B���(ǭ�#.z\Z��8涤�6�T�i,$�{֊��d7�A,����d�@�8�y,$��q�U9m��v�9��\'��4f	�֪SNѻm�i=�rq�^*���q�w�2rՋt��ǘ�9Z�u9���%���*xs�������P��M��G\'uf\\ʧ<t����sYWv��5%{\r����E�V^:���ʰ�n�	��+&����6�����0.S ���p�;�\Z��a8|\ZŹ��%�_:a��0.c{\nȼ�>��ynr}�����mu7嶷9˸�}k����������(�;Vն�H�Z\'ʬ;�s7)���Si+];�õd����i��+����U7L�;ִ��ݚ�2`��T�\Z/3�{XGZӆ܀q֢����ҷB��<��t[Aȫ���}=��ne��sە�\r�OMr���s�T�~����OzǒycF�5�w�H洌vd$��\"��r�*��j�����)�޺�����s����3�};��6V*:��9^֜��ԉ�_8��I$�\0�M+h�&�c��Pc�#�@�NF�&>�\n�wrp�\"��Ի�6W�:T@F�+PN�ц9�q��ii�D����Y��7�_�0�\rR��B�ȝ��ϭD]{T@q�Q�+;s�B�$�0A���p�E۷V��;\0�M�iCdg�9����zүJ:��hCiD�#.x���\nM%����Px�qH���J>Q�S��}i�z���6�`�!`3�C(`A��R�I\\v�\0j�9\n��SYy�R� c5IX,�����\rO�K����\r<1����C6\"�PXv�[����d��3R@�7�5���edv�E�GѰ�溝:��3���W=}��Ӥ1Aד]&�(��Ȣ�kPV}OUO���liX�����k��Mw*ji�\nX�4���s�׊[k\\<�pPMnh�4��~�߾a�����+%�b�	��^*{O4Z�G9(m��t�7���\0�S-�\'׊����)to-�C4��~��ֽK@ע!m�F���=���+�n)��-.����E~P�kJ݄Al63��t����� y$�6��1���ֶ�۩g�Q1����W<U�.���Cp	۞*�y9��I�V<���ք�I��9�kBR����=i�9�ޒU�8d�H�Y����и<SrjeU9�ȣ#���in+8�BW$J��0�s������U�WtT�z��±<��WC��Qy_x5i��W�B�Vx��#��a�&�e<��E��A�\nyZ[~K�x�r��M��)B���d<[�\'��-���7�k^xK1����\'��$Я}�-�x�S��6>T[�Ƹn+>X�[?�4�4o�0��#�>�X��M\0������Z��#K�VK�zʹ���W_sf>lƲ�\"�!��qP����Tq� +wJȹӃ��>���\'�k*{~X��]�\\|�8˽?\nW9�K�<� �oso�0#�jƻ�\06\"����+Gc���#\'�uk�����]Z���+�\\@�v�wj\'yg��»� �\Z�nm�#qȬ+�Hq�W`M3����O�um�������\ra�[pF�\ZE3��\0Cq�gM~U�sܐ8���q�ڭ\Z�D[[��ZV�*��d��`��r�ƛs����{�G �Ok��0���[��Yג��Q�����y\07\0ٮ?U���<�*MI��sX2��_?�o��8�^�.nsדY��;��ՇR����&���W*n��>3���ݚ՞آ��Q�����M&�e$�+�����<S�A#�������n-�Ɣ}Ř��7r��k\\dt��<��5w�q�B8�@9?1�բ���qFz���>-����J9S�IB8<t50�dx���eZ�vT�L\r�1��yn]�3�E�$��.�o�\0]>3�~�\\�jk�o�i�*1ޜN�Q沈D]ǑB�3ޒ��\"��	���KIK�\"��XI$.�z\nmQk��iU6�3�ҏ1}i���\0���I�����u�ў1Ih�U���]��z��r>o�ޫ��Ջs���S��!���\'8��س�Ɍ(����\\�Sg��1���RIKS+X�T��_��<�%[-�+�����qҮ-�P@\"���$��=Aׅ����B�z�<khb�T\0O|W����g ���i��m	����\r&��Jj���ZG��L��\"��f� X�����+����v�\\L~V~FFr=��\0���m/�K#Vfl�t�a^�����M��l����\0^��Vmng^�s�\'�p�щ1䁼���u��/Fr���j:n�߅x��ZO�[E�H�r������W�^5�yndQ�ƹ_ce���8%����YV;8��Ų���0��[�S��T�r���Q������F��94<�ӕ��RV��(s?ʻi��T�c�6�UV���T.�1�M�<SJ�n�;�zl4�U1a�=j�j�Xᖢ$��\n\"�M]]r�֪��b[)��P)e�qW{�O�i\n��47�Ԛ��+�B�A$�eJ��U9b,����z�؏�U8�_���GJT�lּ�7�����H9�o�:����9�Y�Z�$��xA�5�,{w~t(�ل}�js�QmS�YsC�\Z�gM��VU�E��R�-���7w����b�G�q�z�nc`��Zȸ�a�3D|�i��9{�wnv��b_@y\0�溛��Mb�D9=��5wj���!�=+\n�C\Z�o\"P�ҹ��99���%k3����H�z¼������!��8�[�99�V�8\\�`�&�&���]5�yTu�;��g#����v>��W�VT�xu���0\"�����t\Z�?�c�w�\0ʀV/<Ð��J�.ա,�\0�����y�n��v9��U`�[���^O��.kү���-��F�7�B\0�oI���I��$��qc���1ޝ�+1�T�ffϠ�V����-no\Z|񷎝�e\\9\nyǭY�L+��t���q��w���z���:q�S?Sҍ�d�Y�.?�Y�*B2��iH�zEj-\'�(JQ�J\\\n0)�0��w�FI� 8$R���!�u��R�T#H�X�A�i	��8�1�W`7�o�IEĕ��(��5�ڒz���0�JBAW\'�=�J��QE\"�P6	T!\\��Ve�WQ��\0O��eo����B�H���֝������Dl���(��2iaC�Qr�l�b��qQāӐ�P���Գo8�H�k\\3u5x�%������JrJ��QR�+ҐjjZ͂@j�K���X�U͉H�INx<եͰ��gck����+����X��a��W�[]7��s���D�$�u;�c������o����X�:`�� ����>��\"�A\n���p3��M|\'�x��u�H�)2�\'�=��t�w�;��<�3� ��\'���r�>빚����]��������I����گ%�d�f?.��\rz����j�̣$f�~f��V���\0@�\\c��G�.A�x�rW$�*7�F7��;P6Fi����_�4���Qpך��S ��h�D	X��i}?:�ŭG�6z\n�[�$�}���/A�@X;O4���%%� ��\Z��}{�͒N8�����{�=Ⱦ���-�Ue]���*ۀr�PJT�Z)m�d��Ʃ̟>s���G�U	��m��I�\\��~�Q�RđW�B3�Ψ�>SJ-�ˋOS>�r[mg�l��+Ve�+>D��v����\"�tc�&T�<񟙁�����Yw��:T��D\'+Z\'=w,{VE�$s]�xgޱ��,j��69���q�Y7���+����󝵕r�)(�TۏC����qޱ.a����$�+�Cz�i^�Q��9�Ȉ\rڰoc��Sy\ra�[�8��J�c����y�c^Dp��zf�{�Hf�/#�쏻I.M�{�;5F���1L�Sj� �X����d6z\n�7���+��Ϋ�y�sV�H��S����e�.&i�9������}e�c8���1�$z�Zz����)0B�FI�YM����ʓ���OzΞq��ܚ���<��:�;���4A�dWy1֪�/�S#��A⠕�q�V쐚�F�nC�j\Z�����	�`%�^�`S�U6��zT�:jW�ݴ��5*!s��ͥr1����Q���J#&�CMUۚ� \'>�-��8�/A�ح��Ӕq�V��A��=t�##8�Vw�(��N)�=y�����\\����6���7$��Y��_�*�\\��\Z����sLm\ZE��x�)_q�َFEG�G+L�~��T�(�):ĦAۊf�������*w��	Q���׊��z��l4+[P�kR�\"4=�N�N>e�i�9�5W�Z�����6��8�\Z3���S�ro`��3��7�zV�h�?�FNM<�QNð3�SW%�����z�;Y�Ð�})��uN��	-����G�y8�nkB�r�?*��4�I�nb�$����ֽW�Z�ă�q�nWϚU��E,~Py�z\'�5��!�Z�qR��J���\rծ�Q\07�z����O=<����z��V�+k��LUpY���ێ���^��Y$\r��`�.z?�����-\\�QG�:]��@u���0#=}���棛tV��1���]<DJ	\rrr;���,�ݽH�hP�\"��y��HFN�sWO��[\\�q`�ED1>�s�>��q�S��R�Ms�(߽���#6�>�GA��R-�Z�R�\r�\Z�F{z֝Y��[�ߟ�jۆo��V\'v���V\'9�5��Jz܄�X�I#���*�P��*	r�8�ޢ,�J<�e\'�sU&���U�F�b;T7)ǽV��KW�����R�d�V���#�S@�8ℒФݬ����l{��M��C�oOU�>��<yC��T�ry]�+���bO���̜k*�nb?ZWOa�ɮS����n�����n9�\0Z觷�d�F0���W5�+������`Gjú���uwq���ȲI�Ɲ�}N^�<�o-�>��{�AVⰯ!�c�T��X�;���mC�A�;��ɮ��6��?��h�etu\Z��F_�F�i.[\'�=����rr=�)d3\0�IF��m�I)�5�$8��=�tڽM.�j�rc�\'h�\r��}�:x���(MW��S�L�\'xS�C��k��}�߅OMD��ހ��zzT2�\Zc:��8=)Ŷʊ��,rI���1��m���@CK�t{y�_zk*�^������6�A<���4����&9��,8Rn�$v��#�ii�<�lUAo^*|�8��^_\r�Z�nv�]����euڤ��Ȯ�A�_-�e�������ltӤ�y$\Zҩ�\rh��;=k�a�hb�$�p���|;C\Z,�Lu�;���a_�<&\n>��S���f�\\a^�k��\0���XS��b?\0DC�)�1S��Ѭ0����v�|�?J���8�s_��z��QHKA�q�O�e�\n�<���x%Y3Z1�e$(8��^�|\"譵A#��7�]rҲx��\\����8ሙ���HU\0�Wxt��j7�e��VI��\Z:]���/�݄��ˍ�f�r}����ˆ�˟�*žQ�j览��Ya�<vȬ�n\0�4b�5�7 ǵRV�0�j�X�B��v<ѴG\'�����;^��(��U��۳��5����a�s���9��@���w���S���Uo���G�h��b���B��f=*�1]�φ�z�˛���g���M�m-Ni��4��6�$@���%��<\Z�3LVqє��Ӟ��S�IZ���\"L� u��R�\0����V\nn4P3AD�\0b���A�\"�ВzԊ�A��Q��ƜG$)���3H��B�>��B�X��ֶ��VK@a�jl�E{��	i�;FVePz�3^נD�x�.���|���E���x�g�`��d�q㉯�F��2~����\0#�W�R��>��ܒK;�\'�6Ы�;1����|%�Z���n��+��ٕ�p\'۽sO��b�VV42Ƕ\r2�c#ҢPB��\nS�v>\\��s�/s�����ӵ��V��\"�1���/��Z��\n`�S��/�\r#���mm�ɨ�3���h�̬G#c�~�A�<Ւ�A�֙��y���X���Ew�8��:�S�c�)����j5{�{���r1-�{U7P21�hJ�����U8 ��م��g�ROj�*n=kM�r�Td�%�j�g���g8��?��\'��G�[]�*�qu=)�3H�8٘7+��Z͞,�[�[|��c�gO�5�L�\r��;t�bqYW1p�s]$Ї-��e\\�T�@��}Ge�s����zV�?y}k����pF\rb^C�f�R��&�-Z�,�°���k����ư��\'wzU�_@ROFr�p�0#&�.`��]5�g��K�S�)Y�����̦@rx�V!s������<�G���#8�z�_����-�t��zc<ִ7���>�\0Z�b$14��H�y46��m]Y/��r�ӁY��2q֛���M������#���*�8�U6��SR#,jp�ZoZ7�\rX�N@��*���T<S⁤�4��\"�HS�K8�=zU�[��v~�mΫwq!!���:�;���Yt��ڱ��~����������\0[t��8�.9n��W�|:�F�/~@�w�,��\0>��Ҿ�I�+��*�_����5��3١�T�ꇂ�?\nc2��ǰ��Ee���]�?�{�^	$f4*���+�h$#~y�\"U&��w:�(%h��J�-�ݳȫC��Y�Nq����v����P7�YG�럞OVoY;4x�xcʌm@�w\\SF���d����T�CV����ǟL���M�l����c+��i���,a�ق;+�eъ�X(5Bm)Ywr+6���C���ӌ(�H�D�\Z���pk�\'�FB�ͺ�2�[���(����hт̨��Yϣ)NQs]�S�ПlVUőQ�8��[�m�)	C�X�WD[�z�S��-�3���m2�w����ukOj�d�����u�����:9o����@��IRq�k)���W����O�8�t`����O��6\0s�k����h�ڠ{3��֑��3�I�)Pr��UW�5��J��Utѕ�\r��֐�g*m��󉴠�I\\Vd�Z6~Q����`e�>��>�6����+UU=���&�G����E$.+\Z�����x��\0��3��T.4�N�;�Ѩ�3	P�W{�Sy�ȅ����=�DH+��ۍ/~p7f��c��Ub�]t�tg��<���V������qYe6�}k�2�Zڧ`��+A�W��8��4)=�P{T�dM7\n҆D��Y(I�jէ�9�QmHk����\0 ���;|��y�;F���zW	g\'�Nu��n�8�P�K]O��x���Kvvw���s��?��\0��?�o��!��c�����_��E-$v��g\06x?O־��C��yg�\\�W��C���j�Rl�k�m�q�R�sӊ�i6��eOz��[��������K���MU8<:�VS����*���M&��J�\"��R�5`���H��������*7�L�*fB��0��2޵Z_s$�1�%=#&�WoҚ�������s��TB�H�XP�Ja���9Zk�\\�+���1�� b{U�Ldf��?���J}*I���B3�کʟ) ���d�ǥU�g\"�m���̩�Uj�\"�ּ�u�O\n�ZI�����Ǟ���V\\�7$\nߖ&�qYӡbr9��Qi��Oo�ج{��b+��أ>��u;�J��i��.�ܬ���d���m�c�Xwq1����3r�����c�jø�r@�uW�cvz��uU��+���1I���C,\0�b�G���{�3���� ��{V��j6����h�PF8��o����\'?�jbI\Z�������z]��`�B]� �_�m�{S(Q3Re���4<ܞ\n�$*WA�s�J�\Z+=F�Y׮K\n\'�,0�\\W--�����}GnRKK30bV����GtzU�|\00+����Ӣl.OE�K��m\n|�ȃ���U�?$��\0���O�	��1��\\=)>|(Yc��,@�����}g�/���-���;���؉U�*=�<#��Rݙ^	�Yƒ4^p���\Z_��E�,:g�+��tx�\0��-l�B��*{{TR÷��q���BQ�\08�j&���y�][Y�J�:�.-B���zV���3�T��?�җ��pv�$����6k\";���H�Z����Aa�\\�ժ�o\"��.x�yӧdz�$��]Zƙ\\e�eͦ���Pr:f���2)-�EB�F���=�ϒ�踨��nX��G�g]ګ7q���[����\Z�{bT���&�&4�N��� ��6z\n�.���fW�Oj�kfL��z�.�2$�r��L�TYZ���M��z�H�l�vMEz���UYGb}��_�,`z���+b�i�Tc��R.�֒���R��榴$m�R�H|��]B[o�E,�����U�%ܾU}8饇ݨI\'�3���dO;O֡� Nj�N�(��i4���g�R&��������G��+ E#�iϥ�4ֈ�o����s7�hS +�{�uxG$�\0�랻�{7kH��S�J�Uvp�\Zq����T��Kƺ��`�Z�-�9���=�%�frrY����y���a5��Fj�i�+ֺ�Q$b��ھ�9�lz�\r��	_��Uш�W�h�D~95�	���}Zm���,6�Ңx�s޵�=5��~�һOj��%%s���� 96j��~���5���?�8���Ť�j�GSOY9��1�?.\n���i���kpA�N}+��/BH���n \n�op�0!��qQa5��?�%�h�q����g���uUQn��#PF9%��z�KH񶥧�#�p0UYx�z�ï���\'�3�#������]&�М�\'�?Dtf����cc��{ָ��^-����v)$��`f\nr���{-������F�2ok��8��F}*E�6A�KQ�v\\}������Ƨ0�g&��{�jުȍ��V?��L�FqWB)�\"�Ni�5��Y�1�E�N*郂3Q�v�z���l��lS���jQ^)6T�n���أ$D!5Y���kI�Il���H�Ө�MݙN��G^�Xō��Z�\"s��ڠ6��r3�N�	���b����n��m}����隫=�(}i�M����Im�/�j��\r��\roIj��S�����ػǩ�L�S��Y��+��t�6ܷz̸�dR:�SSr��rwQV5���}k���1Q�Ƽ��c��֐V\Z�h�/`���ú�`�]uݺpFr1�XJ[�ΥF�J;�շ\rXWPq���]��#,���rXc>�-]�9��9f��Q��-=#f�+�ѽN�6�3��|C��R��⤄4\\���#BO4k��f�Pé�[���n�;a��Y���J�t�##|��\nv��� ��[��\'L\nɻ-�C4M\ZK��gh�G�}���:(S-��߻��|9Т�ԡ�8�/�0>�������~}����	�|�9�Yߕ�\nQ���4>�4�͵��A��ޯb�tյ���\0�F*톆-aUT��U���pF�ج���uf5*�=�q��x��U�G{#|�\'��9A����9���3U.�X��9�<����H�9\'��@�2/-�\0Cw��R�$�e\0yay���]��`:峊Ǹ�%O8�^mx�y��O:մ��,F[�y�Y�u�\ns�J���\0ue��/l��\'�8�z6�n�H�~͸�8��g]A�o\0���2�9��Y7Є�pq�k��t�;jsOvq�����M�������O�Í�5�;�Ү7B�ن# ������_�e��5Ri|�F3W\r��J12g��?�U��9�� �8�WY��x��u����W�îy����y�U��a�jH�\r��jRH�m#0Y���*7�D�N�}kd��\0��$Hs�J���s�Y���s��WI4Dr6���C��=8��RWi�SV՜�/��A�����<f���h��H�����Z냾����i!ʜj���t5�鴕5Z�O˺���ɹ��rŷ�P�@7�h�{��\nkG���t��O\"q1o�V��\\ơ�+����+��ܐ���P��r\0�V��h�a%��y��?�D��z��3n��}�iࣂ���3�N�y\"�>�W}:��t<����<��.x��SBcr�P��+�E3�;��7gӨ�5��bZ)��LsN5���Ol�rݭ�&���l?��(�q������tY��j�S��$��ⵞg����рޠ���������լ�s!a��=~�\\�ϴ�P\"`K|ہ����?v��V�\'a�r����j�2W[���V=Ia݂qӵ!�\r����$�\r������p�19=��h���i����)�JU^����A<\Z�.����1*�\ncT�籨�6�یҺfo]l.�T��Ҩ��R3n�M3p��cV��Q�\0S7�8����zcڠ?95�_�d+�N��L�ޣ\'\nip=y��SR��mЂC�EVy1��U����Cr�Bؙs7��08��\0���Fq���+n<sW��\Z���Q���v��� v�)��ΑI��i���Kߕӎ	���J�s[�ez�d��>�������XF6�X�j_!���!���V-�%���t����v���\n���t���t�����.���u�RqZ��r���#��\r�|�+�������Y,�;��ϙR_zi����5mmd#i����+��=5h���=\0��@r;\n����*@������I�hA�[٫oL�n[�T��3d�5�k8�ϥJѕ��el`u��º7�\n�s���sz�=˄D�O�{��/	\'R��F�U���O�3Zt��{W����#�.�ܝ����9���\ZVV�\0+��	xU4�1_`R@أ�}�{e� w�2�?iQ͛W��c��I��@��ҭPFA�+X�Rfl����Scb��U�\\�*���O��`Վ���̯#�grj\"�`T����HwQ�{K��^Ռ�Cd���� q�֪Kj\Z#��_��Ӷ*-��a�Ea4�**�-�[ya_o�\0Q�\\�偔�z�Wc��&��a��q���mV\\g��է�g�F��L��t�Y�Jʻ����ۚ�-B��PO��;���\\�W�⺞�\'c���EW����k��v�,0k��-I gd�:��u\\�W4-�i����GJ�:|�=kB�6�/ ��2F@9�m��ڲ�ΙO�܊�E�⭻�X���!\n�ܚ9y�u[0D�&�r��H�F�W�x�_\0̀qS��k-���I��2(�*��,�8=�WEie��ݫ�m�*۶@�b=�����qҺ!3�?\Z��[*��dv�O�]�����ot���9�\\���}Ev�Fr�X:��27z茚��rz�G%4A�Z͜��[���w�@�I�W��8�Zzng�)�8��n�K4x-��<L,v���;\"VoZ�$D��[�ޡ��������d�{�m�X\n�u�9$�N6���y�mR�26+[�J:�WL�_���ʀ3�\\��R��k�<W��v�\"���\"����R����q��D��\"|�\rKL�9�+�3+���R)�A��FsJ_jL.k�I\Zǒ2ǥt�>�	H�6�f���n�z�kq�A?-+-�k����]}[R������{����{�`kw.��B�w��o��ox��e ��W�߳\'�$��0��d�������\0>�9+F�΢��Gڞ`���Ȩ��[�Et�+9l9�3S2m�;�͡�lF�p��}�B3H�1��B�r,g9�I����R8\0Qm��Zz=k��*&?)�ꦣ���ާZ7\Z��`)O�O1����<||���!kh�wD_ww58���Ja@�z\ZS�܎��=�Fy�>�\Z��T��;U��fZ�z��5FU���(��Td��y�*�t�&Qv3^3�G&�ʼ�kU�\0��<`��S{2b��.I�Tf@w`V�)��T���+KYhRm+n`��XcYp���5�̃/���X�����+��-��s��X7ql$��5���He<V-�<�E�f����jQ���1��u��B�X���/b�S���zgf�|�\n��֬�bl�q�)�%T��o�eD]�{{W�m.v�j�\0��n5^;F��[P���q��&������-�Ykmml��1���G҆�$sP�B7t�\n�t1�\n��\'���osX�[�tg��V�������\0|\'���ʜ.G>���x�ý�YR8�1�!|����_V|!�k��+���9�}8�\0=��C��\'��B������A]� E\n:\n�����Z���}+b�0��J��\n(��F�f�`3��68�W���ҳq��DFPT���̽A��\\b��L�v��7�c<�z�e*9�\r$�`��Fp�@\'4�a$y\'�\\����J3�	�A��J{@��;b����ʠ��+���3lV3��Ȯ\n��:iM���3�ە����X7 H��k��aia\0A9�`�i��\\0���;=�S�q�9�J��L䂣��7P�>g)�<\Z�)�:3�����+�B�%�3�G�\\�6Gu7�Y�\\Y�����P����|:�����<�j���SN��5�^\\�=EUۻxn{t���I�\'�U$;\\����z;���B2���VR���s�R��>�~���3D��\r���P \n9�hCe���;������RHC`�����F�ϳ����W��\0ykQ�B���6�w�ڣ�Y-#pi�{��A�s��^f�Эm�1�������9<��W�ϖ͜���V\\���G&���F�V|�Ň#>��si��G��3�T�����O��f�m����8��I������Vx�O8=�P�|�7֪:`�Z/t�V��z�����W���OZ�i��V������&���~>��zՉ�iA9澃֭C��Ҽs�VE&����~zn\"��G�`c�H�	�j��.H#�T�l	��z�I�����}=i��qLC��T���ZՂ�Z�$�NL�e;XCW���\r����^i�g�G�⾳���),om�ZA3!\"����k�NM��}��0O�q�q\'�m����\0{�#��e;��ww�����o���S�ۜSl�|jG��:U��W���ɍ��m����{zR��$\n��@�JlJK��iGVRV�+��UP��J���r*4$b����m�b �qL�0}jbM4�s�Uʾ�&�F��sQ0,7g\"��:���$`\Zqo�&ވ��2�\Z\'\\6j����P�(?�ik�r����g5>��*6@rOZok�N�B��\07�]� ��hK��T���N/@M�S>a�f�H�U���9Ԝ�{���,���H̑O^�ֳ�\0d�t�i󒧥gL�d��$�*6z��\rYc!����~n��:�0�%��)�hs����`+\Zx���Gy�0�X7��:��:nc{;������;�����K0=k���V�.��8�m�%�\'КڍSJ�&8��ʼ�3�{��*��.N@���ilv�^��sѶ�+�F�fv%�r3�Z���s�dT:u���n���-Y�ƨB�I�Q-Y��K̗O�Pcp�]����F98��ְ�md\02}kվx*�Q�	Q�$����RJ(�jJZ�z��-�D�ZO-�f\0��:�\0�j���n��;6�`�������W���G�b8翩��|���/0���_J񜽤�Qܠ���am��T�(�1E{P�*��vQT�5�U�p�5hH����sf�$�J����裛8���������Q4bPXUA,k7$iw�)�s�5�b��ǯ�p����8�����W\"�����8����gM5ϳ;+{�0�%p���I�%�4�8�.��.�hT�?���^}jƑ��L�6Cp@S��S]N�Fɳ�%�O%�7$� t�sݖr��U�X|H�D�$FNj��$���D\0t�qEI�:1W7���O��N�����\"����r��#UpW�<�d���b�ٹ8�\n�^�;�����W�%X��A�~�����A�������ܬ�1+�rF3Y����>�����ߩ����u�^+1�>����<�=k1��5J*�:.����Ԡ9=j�b�3Z�۲��*5��4�IQ���ek�V����j��[_�V�H�rj$�����H�8�����Tdv��W��.I\0\0\0�̤.3�Iuele�JJ�t�s��K��tw��2��������暊Ը�$fI�Fs�Ҫ\\9 ���눝c=ꃡ��R�ы����p��:\Z�!=�޵��`�:U	�,�t�vS��i�{�$���P��	�RO�u�Q��	$����Ռ[V�rc\0r��I!�3V��;��j�m�i����^��68�&3�����px�\r	%��V�i�G;fM��e�⼣�v#ҽ���S\'�p4�\r0>ս9(��=t�c¯�++U&�ҷ�{m���Ea2��������Ӏ��E*����v�aU\0�#U�==��19�+N�?�\'�ԠNF׆l�B�vƽX�������lm#g��+�#������=L�GQ����{WԿ�]q=�k\'�)��F=;�n�ىJM4��2���ZKn�!�u�_?J��D�Z\"�u�Z��篥y�42���b2����XnwS������MJ쮄.Â:���qR�(�DJguG.�D+�DO��v�*:�ܳT;~r;V�Y\nQ���O֙�ڞ͐{\nh]���{�7͟zk��#ց��H�Ks�x�u���Bь������V�㹨�=�9J��*��Dnj��Ab~�Yf �PH�\0�kx�A̛�)�0ET�`g�]�~\\�����p�Wi�&n2��|�䞘�����W�G$�c5F�N���Ê�=�p�ٗ7˻ק�fL9�<T�\nϚ=j�w�{��9��Ȭ;��7�5��@�0�>��wa�ҋ�cGnV�b�6��jż�ی\Z�-X��5�whWw<�&�n���������n���L���6@�7f����o>eR�~Q�5��`�dW���fwE��`��[�������M��(B(foS�4�cg&8�88�WM�h�Z@1�P􋹢wܷ�-=��p�#�>�����tq{ �(���L-y�\0ÿ\n���cB�	\0G���_W�8�zf��\\J���=Mx���+-�J4޷��|����S�@:תiv~RF3�NJ��Ζ�֠�Gsֺ�$�cS����kO{h��\'���<t��d���gX6��n�������MQ���KEʴ�s����\0_I�E�.���ε��vLn&W�ʶ�k�?�gR��7�k�Y=�D�!g��	9s��5�e��k$�K���v��u��\0��\0Z���=jZiNч�+�����$����9���p:�;�q#���˰<�Nw���m�=>\r҈?02J1��sS�#����i��I \0n���2�\0\\�o��+[�-��?��땔�m��J*��{���lށ\Z,��r���ǳ��J��n88���\0x�u疑^Gg+2B\0-��4�s�O�F%���ϟʥ��k\nm�=��\\��s��.Ì	a����nFee��.>�����$�;�>Hg���\0�{�g�5�gkmV�	q�T���\'��?,̡x�У���Yo�Vg2mƲ.<P\"bKg��=��.%��f�p�U����,3\\ȑG4�Tn3g�ҹ9.�ڏ:n���\0�H\"����rUK�_�P�~Lu�ڬ��Ɍ�@?/�Z�������8�Cգ$�d�?�眏JB�psQ��\Zi#�\0�h�lU��+���;��S,Fz���_kl���LX��zN2����1��\"X����^\\*�:UeRd*�jݼd�\"���Nz�ĩ�zϐ��ڵLyf�������!�g�&ba�V5�Y���(Ln�dN��4E�l+�dL�����]�H��^�nf݌z�%����uR�9gY-X�ٰO9\\�]��$d��++S�C#�OZ�5R7λ)Q��<ʘ�՛�w�3x��uP3Ȯ^�āi�sy=+.$��nk�8f�F�:�uҹ�Bu�s���Yg?{ w�8_�\r����4M{{h�v	�0��A����4���3^q�0v9���V*�i�g*��c��%��C�W-�_:)8�?C�̊7Z��6�q\\����o���{o&wP�3\\��Wn+�|g��n8��kϤA���f�ZN�<��ԥ��K�	�)����_m>�nb#�s\"� *��N�5��$�Y*q�qZ��	4=$	��N��l��B�A�˹ϮO��5�O��#E��D���a��W�`�\0���3{y�-��gf#n?^�����\0g]S�D�_4�1 ��\rʃ�����\0�����̜[g�:U�Mn�A�PG�:����\Z=�-���\0=x�/�.8��3IhW\'-і\"c�3B��ⴅ�z\ZG�P�qT��\'+i�ASV\"���h�b0qM#�:\nZ��������}�Fn�}kT&3�&�5j-�\r.�[Z��H� �br;։Lб��\n9Q�$�eW���N��h8R�=* �	�i�h.^]�F�֘���\0z�\0H�@ ��ˡ.=.g����pj����ZN9;���P��	+�e4\0��{�W�mp*ѕ~c���I��f��_A�tfM\n��b�^ }kZ�A^9�O�}*T[ܔ����G���fݎ@���\'q�>t�W�t[�C�0#`8�����]������N*,Ӻ!n�9��@ߎ`]&�>��]�*�:�=v0��{\\b��;�N�\0-��*ŵ���_S޺Y, ���\0�K��Gg9���TZi]���C^��]\ZFW�ʲ�Xw\r�?J�|!�o�7Y�ԍ�vosXڇ�+�\r{o�Mn-�U��{��,K��wa��5&�E�q�eHP�Awc�+��;�y{v�\0\n�����@(��z~���H>\\ �_7�Q�٩jj���m��q��Mk�\0^*��b(T��Q}���EF)��Ug�J���Ò��\\���!�6�8-[�j\n�b����XF�#e��\'ڼ�[�u\rB���GC&W���\0�{ym嘌��g�s\Z�P���a�q޼�����S�eg��^�q�B��O͓���h)��!��*�AI#��\0�w3�A���}>�k��x�Y�W���;�Ӵv��g�\r�*o\"5��T5Lx,����΄���T��Kn�i���Y�t�����^���f�	�X�m<-u-$�`ú����_<d¸��⺨��d��օ���G�VN��Q��S���ɓ���\0z\n�y�[{�*cb��	�һXD.��+��kB�(���R�y=�#��۹��|1��y��+c����ޣ_Io\0�&���^M=Hb����)\\+��q�N��F��y��p��u$:���\n���c��W�-���<7F],-�aG�Aֳ��_�k��rV�Ηn�P�l-��77�kF=#l��C�S����q޲��lv|Z�����&W�Uhʹf����dz�6�\0��YE�+�1�Z�񺤌H��~\"�8��{�U@[��4��u�Ꙥ������\0b���#>�nI���{V���Mc�掯b��w��k���V3\'9z�S�2����;��/�3�WT���n�Q1��pʭ�I�pz���[qϠ�j��o#m�خ*��K�X�㰯R�����/��MVG,G>��]�����k�wc�j�i	m����wR��>t�6�s$��	�j���{�^����ۑL>	h�%@Q����-�����Ē*�i�<�q�}9��_	:�)8FoJA&<}qQ\n�{�rG)&dF\0g5_k�pk�������s�]���Պv!���ӵ)-�����	y	��;zVL��ҝ�Z�!���c(�H�JI��_�,w�������\"���u� �}��-^?��˗�K�\Z�N�*[y<{U��)�V=O�:��B1##�w�c�b�hڵ���3��c��B[��w�����q/����G�޳����4~�����r�.:�����V��Gi̒�a���W˾�K=��Y����9\\)^�8�?�}����/ͦ۠!��$�n����Ԝz1�Z���\Z5=@��t��Q4HA5b�ֺ��:g��:R�b�u�\"\'Q�ޔ��_��T�Sv�&J;�̠�qL^��s��z�B~cO�޹�F3a�1��bpOSQ���R}Ƶ܍��1���#n>���Q�i,X֐z�3�]��G�~�=iϐz����NڭH��#`9=j9BY^wP0�\Zwv��)��/�	�Y9R*�)lU9F})��%�Ԡ�\0���փ���\\ǔ�U-�VOC\"p\Z�2�5i΀!�͕7nST��ԋ��˟\0`�9�AB�#��ܼoOjý\\�8���th�Z���nՁx�����\'�Z��@Ԍ�1J֕�	(���Csp��{{\nҺ�[��#7�Z5��VI�Wpʩ<����g\0�{u�bMhTRzZ\r�y��}���K��d����s6�NW��k�?X���\\��}�������\0n�=�xX����p�\'\'��ic�I#�v��dd�\0��U�C��@��0��b�\rG�֭��� T����*=�.j)�ju��h��v��mB��*�/�bO*( `S�LAe�sz��#.�$���pW�އ}*}�j��#yj�c$����ꛁU��O���Vo�c�<�Y�@YIےO��;��h������x�ɬ[��Ie;A���T4)�;�#(\'�*+�	�fp���Χ^[����[�T����S�u��d]%��b�+p}+��ڛ���`�wH�5{����\0�n=\rhYj*F7d\Z�nn��7�<�K�6�pZ�gsk6�=b���3ȭ[+ݜ�\n��e�kќr{We���������!�m#����0ie�������fpM]K�>l���v�CEOs�|q	���\"�A)�\Z��@����VqV�fϗQ�Y\'���0H����iO$u���o\r�pzЗ2�J�+}��T}:�T��y��+��,�?N+\"e;J�?�T��s��NZ����\n�K����-[�%�p��V��PF��Wt�F�%&l�AQ���\Z�����8J�Y�����X:����	7N���ي�½ْ_��\'��:��\\9ϥcM�|�:���j�V��*��nb�X��LH�v��D��7�.���kݴ��$��iX��Y�2��z楎��Ƽ��_��r�ȡ��T�Z���*��Z������\\P�!�`j�K\0A>�7)lf�$�X}&��OұfѲ�8����6�)M�R�/�*����$�+]�=$F灊̿Ҋ�(>_J��o� �l��#�w¬����K	j�H)ɪ_c�$,��]+�.v���S��oz�/�^���h��� c`x��x����ʤtc_Ek6����A��_?��uk����+��½N\n���$@���bN1��{I��ae�w���B�G�޶:�v�X�ž�ُ��^���k��x�J�$Zx�{s�\0�#?�q�\n�)���� oS��>��/ÿ��^�wl�2��9�J����\0\nɹ�E���v=�V�sc/~� �\0U?�玟����,A�v��F0k��ye�­ci�?�K��=kѴ\"��1%��$W�=�\ZFѺ�5��\Zwf�\Z�|\0TwQNRs�QwA�ר��t���w&��j�ٕ}.B����\0����4FI�[���|�>�F�\0|Փ�튯\"��I�^��>�ͼ��R)��$c�=X⭢ �qAUe8敂���U-L���b(��oz��<?�Ի�\0vW{\r�T�95ci��$�M@�B�gw����6{\\�.?��ZQ� ���y�T���+F�N����R���T�Aբ��$��0��Km���>6�5Bo�Z���Ȭ���Z��2�2�#?6z���[�0���;�2=jU�ԝ�+��ߝs�c��k��qϩ�r�\n�{+f��Ob�z{~ڄ˽��s�9�Vl��p_��s�^Glq������C%��ʒH�9?J��}���W�cؾZj��P�|���}{�����+��0!1@r+����I�\0	5�.�hyg�{v�\0?��Zm��������=�#�Ó�M.�h�\'��q�����T`b�\Zj�ǝ)\\`���K����]c�Mg^0�Y����T�1u	#M�s��-�]o��}NRŶ�y�k�ԧE,I��z����{tc�HDӿ���I�t�7���H2z��)�Ӿ�\'�\"%�\0[!}����-��P3�Ml2����b\\\"1��ZB�\0!GJ�����3���]��<*���+�׮<��GE��<�k|L#����x��xŇ\np�\'��W��v鵂>��]�`NF7Z�j��ɒ�x��xm��G�ќ��!���<W3-�B�o֗[�Q�*>m���r����u��[�ߠӲ:{/y~�ֽ�~/Y�۔�Ǩ��\n[���I+�ksEն\\F�F\\NzU:vWh�ZK��}c�����{�Aozq�Ƽ�Cփ( \'ֻ\r?Vs=Ecmt�G�i7>�j��&�c����\Z�y��>S]�r\Zd&�pH��M�d*��R�k�IQ��;ӭJ��� wZ�	#8�}R����\'s����-�=����-���������W��3�Gҹ*��S��N��4��Noc����\0$ןj��7`\0=���l�Z�\"�FW�y�z�MN~_9=\r\\~�c�w�V��6�\n�u��?\ZK����95�$�&��S���s�ص%�rj�\\� ޫ�]����ޠ�U\r���P�`�[H�{�Ɩ���\"���L��cf$�\"��Bm��ZX�:Uճ1ZӴ�B`jt�+�氜�\r�o��޻��c\\�G���/!���;�a����G�kM�X�wF$����R�~��������w�TofP0�� ��k�r9I&���~f���ҭ[I��}+�g6�H8�ջ;�	�M<�#>�gO\\ak>�,�(��r��!z�{�&VkCW��K]�8=\0���]o�}v�B���>��5����e��ۊ���ւ܌̊sۂEv��w<�CJG-l�I5����lW֩E��3S}��e$�V���15��oxv/H��s0RI-�=���K_����;�(N���͎z���>u��N}�\'���u=�zWԟ\r|{i�A\n^��D�H�x�O�\0X�g������X�6� �����n7B��<�~���·Z��*�(�+���p�����F�Ȓ�H�#+�:�?�J��#O[o#%�`s�+����ji�B�|��\Z�nM:�.���T(��}FṦ��� �l�8���%��ݣ����S��@A�5jۉ�����q�Q��Y�c���+�j\'g-����]�&�+(�znq��J�\"�<��ˡ&֣\0�>��)��\0�:�t��Wg\'#<zS7� ��S��=�@�������$4��ޕ�|�a�Z�A�M��m]ersǥSus*��p��Zo[��JRNAU9�`8���.Mg�v�=qDUՆ�c:��\r�?0�Y3��c�ӛ�y�雂;�[6ݙ+�>�V��jܸ9�\'�ZŻ\\��k��-ih`��y?�+�7��J�/��3\\�۫9���K��1E^|��%�M)lrk�~h��8Ԥ;�RR0O\0�ɯ ���dP7`��_D|3�ŝ�����b�!���j4�gR�]Ϫ?e���Wz�E�\0!������>�?Q��A\0`W����\0�_�c��d����A���\0>���k���9�~gf&Wj=�B\0�@���uY�м>�/YC\\]�ݷS�}Mz�ݑū���-^�LC%��p(˶+�<G�A���mBN��������Ei����j�}V��en?/��맶𮑥&-la���Y8�&�vuA�]O�����~F]��=$�vQ�~?�bI�|O�fw]3N��9}�3�_Cꨩ;6���q��-y(9*���u�M�?�3���֎�י��E��[}��1�̀�~��Ƿ=���㫈2�pB��5��nh��+5ڠ}i���O�l����r�ل���}�4��`���˵���9hJY��XԞ��u����¯G��>!^s�\ns���ڽ_��K����)��N���8�ϧ�;���|[�R�z��mm#�\'l�	U0�=0=�흫�r�`��\0\n:��tӜ�o���%���4v�x���3��\0w$�θB�]�vx���e�����/xd��\'2���G�9������\Z���F��q�|�s��R�5�SW�\0	��!=��o4t�����i5�n�1�)׌��\0�Y�ɩڢ	S��A>�m��(<mc��G���J�>��i[;�Y��sZyJ�5�m[���u�H��h�;�s+��O���\0!��ow�ab�3U������W�jk-~�~i$ϱ5��d�Eں�=>gg��4��\n�����z�����Yct�V@ٯ1��iz�B;�k���Ĥ��篭u	�-w8��^h��-��s�}�ȮIڧ�:=�XEs+����̄%��k�4��V� ��^��9�>�\"K���_�[�0�dzo_Üv��m>\"k�E����;o��A�5�����zg	Qv�]�\02%Z2g���=��k�������.�y���\0�>/�[Jԣ�O���l�}��޽;M�2le�9�g\nRRjJ���Wf&�o\"�H@��Q޼��!���=A�+�5;\\ە=�0;W�x��q�Nx�<�\0�c��ɫ:���ݙ�>1��!��aى]������GQ*���w�<� L�*��!�.I�=�Ц��Z�i$�(��rv�j��c�IɪSߙ$b��U�D$�l�tc}Ī-[e�n��@�A1<��W=>�ZVX�ǵKo<��D��<�/oK����Ơ�q�Z��ݜLS�B�d��c��y��\\Bcvܧ�Nk���Z���4Y��$��?\Z�T#v��JX���1���o�$iZX0��3��,\0�Y��j��I��,����cHnٚc����S�5;=>�V�LQ��p��?�_�9�:M����j���\Z2�,���0$B#!��sT&��H�K:��\'��i>��q�\'K�;��H����UY>%�2��3$]8M�ֻ#I�ɧ��RR�Q��Ct#Wc����_j�j����B�?�R���u҆I�)?JԇW��>i��&����?���o�R3KpK+7<��(f����a���\0\Zd��3��$g����˘�jݚ�@��y?�[=kX�x�L\0m\r\'\'ס��}jY���T>�N?>�oOpp1Z�vI.W�q��t��t�E_��\'���A\"J���3�k�>%���R�S��ހ����{o�[��M}���Awi�Dn�����\0��Z|-�׋�.�mt��d\r��#�Y��o~0k��5O��ys����|����B+�]^Z�H����\'�w���W���wN�v�3�ny\'�[��\0?�4�yd�8�a+0P�۟Z�n2�\'+��捇���I��\r�,*K��ߵ{���`�uiy�BT�a���z�\0����e��گ�����b��9�g�=q�f�~X�P����,D2���z��:�4���}�������������\"�2������5��Y�F��u����G�ZхPwW\Zӭ�e>a\0<R������R*p�#ڪ.�]�p��{Td�ӂz�K�R�v�\"�<R�ɤ��(M��ޢv�H�S5(\r�	=�_o�O�Q7J����\0��%q���ZO_x��#�j#�y9�R7SHS�Ng\"�.ndWwd<qQsR�$?��2m��N�E�b�1�G�B��|�;m#�qP�]���L�DA\"|��ERb72��p������M�\"�:h�ݮV�r��Ȭ��K�hNp��3ڨ�FY�(�����p����:�p�\"�f]��%�p�\rW�[�e^r���k�v��@+ֱn���5M&\'{��9��l�=�s�\0叵t��X�1��T����b�v���1�]��Ɇ+�^U%Q�\\W�?	4�u�^Y#S4-��\0�\'��~�}3�`�)b\n��=?��׬�4��<#i�\r\"���\'��ˌ3��x\\�����g�pn���A�9�-V����`����V�q��GJԗP��y��q_$�Ŀ�Gqk��^\"��ka��.�ӷ#��8ϯ�C7�x�C�Q���7wv��K\n0����s�SB�i�F��a%Q�\'��������7�4��۝F�$([hpI=����5�!�����9�bv�\0�?�|��C麅���6���ڳ���=:r8l�������3��Щ�V�9.�v.�$�N��������z�E ڤ�$zT��	V\r\\�G3�@g������iFK�$\"4�5ҽ���}{�����5���@�)���ϯJW��+�{>(�ͮ�k$6���m�c J��ćľ6��	#��*��*B��^�\'�C������)�[b(�ybFj���qz\"ԭ�Ũ»�^r�UN�O�_p�!�<�to��\0��>U�>\0��*��]�d��K�W����랧<o�?ŧ��M���,SO�#e��hb��x㌜w����|M��jk��`+�\0믗?k��\Z�΃�h:�P�ip��r�}O>��[Juc�yd�rU�YIJ����x��/��k��7�6lȕm�����\n���{dW�_�U��\'������T����&��U���ϙ\0I�����ώ]i��R>~��ԓ]����ĩ���d}��X�J����mgO�\0b����\\,���Ƥy�Z�߄�6>�k\\^��Va��_\\�Ϩ�k��i��%\'wc3Q���b��~�d�G���s���ӿ�m/�y|�|��AE��k��<�8�>ϖ�h���n6�����.��q�����\0��kA�2,k�� `���,�ե�,��c�)�k��ЛE\r��=\rsT���Fu�}��< �p���&�#I��X^<���Lűv��s�mz�\Z����V<�r�G�R)��T��|��N�n�h:�yk}B�y�����\'�5���Z��d���`��E��mo!��� ��3�� �Q�E�Ըn��׈�c�7\'ŏ\Zx��D��	k\nK,��fl���zw�8>�������\0���MM�j�����S�Iu�&[fc�ڑ�	�x>�5�_u�7d�5K6uW	ן���	���-��L�g�\"B�}2Ey���\0a���Y��z��#��[ל���;�h�����~��ѥN����\0���^}��`�y�h�p��x<�\0�וkZ��\n���� f�����>��k�v��D�~;����k���WK���G~]�V���9�Ӝu�k��*QW���Z�V��s��5u�Ӯn�ȉ���O\0d��k��/��OX�:5�Ԛ��#�j ��Lq@��X��Q�{�O\'j�M���x� �X\0w61���\0�ߡ��춳��O��h��w/\"�c!��k҄R�G�*��Z0�6w����\0�+�C\Zcb�>��UUʂ��5rRd\n�8+ڛo�ԩ�R(.$�x�������0�Qɬ}oV{f�����Z��jP[���\"d��F{�j��W�t�65ۭf�D��gx�A�\0H	ן��ߚ���4ߊ�\ro. Ԣ��Zp���ܾS`�Q���9$t�<Kwe�/�6�pđ|�tq�\0���OӍ��n�x��A�!��W9�ޣ<�����Z�5iV�wv}:�3����ѝ�:c���\0<���Nd�;���R���B�R�4���)p�������QP	��]��N֑��sN�R�%2 ���֪_�\\hs���	�7�}����t��h�Kq\"��,�{�4�ޥ��J��\n:�yM9X�\n�he�\"\r��SҺ�&�%s�w ���Jx\\�����׊�q��;i���5�V�>���͉�?J���,���{[����zW�8�3i5%dy�ւ��v�@�e�;���\0�q��e���F��v��A*@�Tv?������猼9�OX�z��<Sy�q�I zd~c��^˦��>	��O�?	k���\0f�b��d�����t�*g�:���Ŵ}�o��g�~x���$�i�$Nq\"�2�}��\0���Y�{=^I`�u��>T��R�3����z� ��O�_���)�1�7�:��hP%��pJr�6˝އ��q��ǫ����淸��Q�.V�s!�H/�rH�矽���8/f�g4���:�\0��G�?��x��-��eE1�3�������l,E�\r��z���A��NH�I���7p�K�\"Ep��ßl���6~oѯ���_��׀s�?��?S\\�hʚ���(����\nd��Wmǯ*#+x�x��<�؛>Q��K��)�\\ڑ>s��:�j1z��KJ�MPA>�F��1M#�˚f5H�1��l��H˸:�ʓ��|��b���*��e�O�7���-��x�Ld�~\\cji�4��F2)��Y}��D�3Ң\r7���G�H�����E^�Tu��i�1�+N�3i��3c0 /9�QW����Q�#8�P� ����M\r�em�Y�fl���j%�/]Nm�@������ݎ�f�&\0\03����c.S�[A�9!T�Mg]i/ð_aҽ�Y�Gz���3݅(I��p�9�t�,p��5F],!=�l�A2�㊣$ca\'�^�4���M~M*ݣp����Ef��n��t�z���5�J���=z�)�mc�E(ݫ\\�7k����c�%;Veբ�\n��Et� 2�k&�g=�j����|�9o�?�4/!��i��k��g����>�9�f����v��RD�%f�O���wϣ~��6��c�Y�+��u�sv��\0�ҽ��>��7���G��<ݧ��ǭvVr�8��\'��\n�FU��ht�[(���!\n�W}�tQȎ���z�m�6�=*���&\"H���O٭y�Tw��\'�m&-_�Zż����؅u29�~���=��(�\\|��8�\0wһ�J�i�1wx�0Ey������v���GB	�U��\"�՝\'�����oE����?��\0�=Z�(����[7x��ղ@�U&���/b�{�Y��T�37� �xoZ(\\�ޙ��z��	�j�D�k���\Z-��y%�\nS~�O�����	�_�TK�o�N��s��q��}��cVB��4��Lכ�6w-)E�p{c�ƼJ�3��F\\�咹�׋>F��Y,��T9>�����ז_� ���%�|DJx�����<\'��+��`}���\0�^s�xFP\\��h\0��G�[G(�s*0n�0��<0]y�/�@\0����kt�H�|�8��^�q����VU�T\0��?J�7�KbF��⣚���v���=�xU5\"Fu���­/��[fX^H�Р���������\r��N�҇Y���yt9�\0�^�4�G{5��G���\0{c�����Z�m<Xvx<�5���IUL��ҽ+�� �TvE��泐�>H�����F`�(b=+������K���p�3���c<���4�@#o s\\O�ohV�\n��-��r\0�G7����\09���/V\Z��*r^��1��ab�.gmv��잗����Y�5�a�{�-�G�hCe��r\'��1/��>�v57��J^jr����%��O��B��^�\'�:ׁ����e�Ѭ톭�7d���y9�N}x?�7��/֭`�.�cf�#1���]�����,F}���BJ2�kd�]���k�ʗ�)4�~U�}[��\0˵���U��hƙu�11^O8���T���O^O�&��輦X��\'�A���#�������&^K�&�Z�YU��=�>�ޣ�y?�(�k��\0��d�k�/ �j���	�I�;\n��J��/�ۺc��<H�m$m9��Za�m�^�\\�]5�c�Zj\r�:[�Wfl(�#�8�n~�?����5����B��I R[jH�v�c���\\�3^F�f�,�5�>�7�<\'�5�2��Y������.?!�׽A.T�ǇQ+�_U���K��_F|���<�U��*�/���C���;]�v��9#��:銕�J�JN(鄜�s�Ki.$l�͚|:\"���Z��py,[29ϵ+�ii6%�����N\0�sIs�[}A]��rz����`�ˀq�[VV��h~+	T�vF�˝X�;����G\0a��^[wS#y����C��9�)�j5��X\'�������kF�XT�5�>���K�[�GT	�:⺸t(-��{�6���Y*�Q�\',t��o4|��Z]?K1q�ƺ��A\'�֛������Z�SF���2�B���\"�\r�5R؈Ԋг-,�q�Q)7�%�����\0�ׁ�;�x����J���U�xñ�>���O�}ac�ZX�.+X��j1�\n�g�D�c���p	�z����������@>��I7�<:������Z?�?�{V0,%���~�^��~��x/J�q}����V@]��c���n��=��uHO2j�Tǫ�?���-��O��@AoJGp^���:u��d��h���\0d��n��c\'��W�v�����<p\0�*��;�q+��ki�_�.�ǽ\0�����\Z`����>饌c4�qJ7��n�d\0j���N��L�(����J?/X�]냵�\n�$����\0u�3�B��Fh���<рA�����2p0\rG�~�.	^F*9FF�����K�)�Wp�\"��֝�N:R`xS�V�Ih�ܺ���[ޑi�J�j�v��F��P۽��v�}��>�z�7��Ñ�V�� 08�N+�P�Ԛ�=���<���K֞�h�1ڱ�~s�v�-ܔ��}^�l,��j�.-���mZ@ea�V,�R@8�K�ܬ�o��S�a�*�^�Jr	$UEݙ�롻waY����V����Bu,X�}���]�2nr3���Y�\'\\�Z���������g��N�������Hn&Q#?;��s���O߾\Z�\Zv�cn�#�/�_|�\Z�t���D}��2+�u��\0V�$����SڭR��/���KEWI�T�yg�mWC���a�\ngy>������+ϼR�H����c\\�!c�����\0=E������:���q�=�p(�%;S=���]��LXdgV��Y9r�z�TחEق����b^_�g)�\0¹j��m*wf�O��uo��X�C���FNTc��USS1�\rʃ��QP�v\\��~�{��e;�uƛ�i�gj��2�\0��\\��p$7���vח����O?.�`]<r� �ݟz��m��Jn=�)s\"tn��;yc6%\r��z�W���ј��ñ�zK@��\0�{Vi&���wm�}5�=}��|�)m���o=��r�v�z�k>h��VV�]K���n4����ު�(��W��+YZhT3��f��5�u7��U�~�qJ7�Rn*��2!hݹ?3���^���\n5�)����\n�K��XJ����T������	7H�G\\�:�o��VM�N�<��ɴgJ��P�Cp\0䚚?�\Z��$m{J��c�1*|�=�__Χ���-w�y�U�l�+Ӽ;��e�Cȑ���z�\rJ�ӵ�G5y�\Zi��>���M3��\0��<-��x��a����b�u�:`��䓘�Ai�\0����R[��>��g�c�\0�+�t���>;ռIrTi�R�;Vn��>c�q��x�Jo�>:��$�#|FO@�����:�c��;�\0_�ƹs���-��~ok��7.��P,���!eɀ1���3�-n�����W�z���h�q\Z��q^�Oʌ����}�M�a+:�G�7�teq��z���,�L:p:׸x�m��s�:׏j���q�ý��8�IO$T�u=E[��q�V�L8!��S�]�����\0���R�����?q6�yi�E�,R\0�=T��j�)ϷSíN�k����a+Ƽ8��`�Gqޛw��Aq�I\0`=*[r��D���Rq�E_(�>�\"C�g\"��p�����K`��j��өpOq�i�I�9�;u�����F�=��[&���D��5��g#�گ�.�~�V�2�*����Z�fΨTH���*�#�>l���[gR��d���qZ#&��@��]\Z5 }�W�	�1���:�[b9�+�C��y5�i\n���ηWY�h��+Eki�n6���N�M*�.����ߟ���׃C�/{�\Z7L�o���3[H\0��/=����\Z�z���x��At�Ŕ��,x�\0�WU(�6|�!8T8��wPU?<(������.]��~c�f#�k����\\Q��n#P�q���?����~�:U���.������A![q�2��g�����\"��E��!�b��R:�]w��_���\"�QQ����}zy|��Ӗ<u�S��RG_�A�����mH��4�N?\ns���\'4���j��$�A�Dx�;�INҤu�ITn���O[\n���b�����MoݸST`b��dD�J�Z`R�4�\0��U�q�-Q1Ot0)>���N��M!9=*��`D,����%�����nr=(�D�;�CU\0\'ސ�z�)� t�2s���W���3���tq|�޴�o�R�X�΅���Z��o�\0֭�\0�Ǧ\rT�����I��HHF��ֵ�v\"��e9ǵ`^��ݷg�n��\r��\\Ʒ\'�NrO�Y�ԋ\'��\\���!�zϸ�$�x��p�����k�KT�ZD���L@\'��!��T�Fs�Քn�\Z�V(H��\'Սg\\p��Z2\r���\"�nW!���ą���l�p`z�͖0��Ҵ�F��>X�z��\n2I�G�l��\'�iT����~���М��|��*�Z.�}qn!BB��}IX��ї5i���<~��ִQr�j�:�8�c�\n�\'��?�M�*Z{)��G\r����5�%�2C\"��ԫ)kZrp��*2�4]������\r\'G\r\"(3��nNd¼+X��E�[��N�mK���Ѣ�Ko����׮���m\'Z�>{��e�����\ZuW+r�����Q��k�ꎂ�A���@�ָ=hL�n�1Q�ў��\0?�5ؽ��i`�dV�Eqz��L3�G�����Oe�Rz��vjQ�0�n�@�2d\\�тpOEgMtVF,H\0��*���w{4�ﹳw6�w���s�:�Y�2y`N=@�&��+.3�0kST�2��F��֧{܈.G���&2I;q�g�̫����A۫*��@��N�� �*�m����ͼ\\W,��@���O�$u���.3��⵼\'��\\6�>P��`UE��*:F�3��\r�x�00~�5�>\Z��\Zu�c�c׽Y�t�w����Z��JΉ���Jɻ���&���$�޹R0NZ�`�E��PTt+\r����ں[ku�`/��5��k�I۱��@�F0F=+?��ɡ�&����K��-��p�}���}�GW�F����1�c�Z۩�i����\0�궉���߾����]l1�Z�0��\'\'8��1��^�,<a�o�s�u\\����O_����o��E�[�Sc��\',O�\'\'�<24�86ݬ��@�&�MoYg#tjpA���z���\"�+Β�������ԕ:^��oW�Gwl�l�s^��5\n���v��+�5�K	��H�y�WͲv�\"20+�1QpI9ji�#�_[���8=@����vߑ�:���\ZD�yc��׉kP4k����0��=�Ť���{�[n\'�1��k�\"�a���^�\0]��Z�\0MY���+ק&�g�84�\\��ˡwms�����������}kYc1��?�V��c�X�A�a;��5�n ���>Sc%��5��\0y�D�OٷlG��i\"O<}*Ͷ�-�)%��y����3R��yn��W0�4G�f�Q�*3���R�0q�]�8��PK$p�]����F�����F�6�5w���kW���U\0U�]�2s�X�7Qϒ%B�2HaZ�K�O��\\���-�5�a�h#,=�]C\Zg�������t�e��g&�Qh�T�v8W��#�cey~	�ӯ�s�A6k�Ӿx�Q#��&�>k���O��Ɯ��\nU��Y�\'��F��Uȭ�jI�w�t����b_��C��AIh��yO�63�g�����4�L\ZD:��}ErQ[:[�?��Tc���s�j�ҿC�x��[�_��υ�����J���]Ȍ�)��A���}��\0�5�����s��+�����ڱ�˒pH�N3��{��ڇƟ�\"�6:��|6�I�l�;OQ�h=�}@�\'���5;�\'�5�y�R�s$��Bzzq��]Pp�{�߶�\rJR�/{m?��<�⮝�h���y#��uK��ۉ,���=8��^� ��~��\"�ľ���^�+��8?�|#�L�ͦx~E�3�c����r+��؛��?m�KC=���ÖQ�\'��j�\rף����wS{�TFʁ��ґ��U�w+6~j��1�5����	�@2?J�͎�T��A��4��\"c��:\nh9bE,i�SE95J���C6��\0h�V���Kr�ŀjq�-���ȬE\n��U�m�8��I��VW����SiRC~�ݤ�^	�QQ9<�)8���	�7i��\"܊O%��+HǕ̊��3�i�\n��V�1����l����*ڲ�G��sW ����G���_��;���\'r[oBKHN>��+O�1�Nq��),��\\t�M>�mR���ڣ\"�3�w\n���L�3c�g8���P�$NGn�����$-�f�Z��Ҳ�E���&A\"���>�NG�8��q^˙�z���n�[,OҨ�>f�T�J�Q|��p��g͒OLU��q�Z�1��8��H����̸;w{V\\ߖkF��j�{�g�pI�֑��N��aH��X�)��:���_O�F	�|��2���;��m�#h�?J�n��pFr+Ϧ�+TK�����%/$i����ԋ�Yx�ڥWɯFg��-��3����	\\l�~�\rrZ׀�-U�Yl\"I����v���~���i�\'\'�T��cX��uS�ٞc�x-w�����	;�u׷�&���l�eCxG�M��W��\0;|�1^⹝R�H�B6�nq޼����FֿS��ŏhJ��댖��\'�\"�/�e�EC���l\0�@_;��WO���G͎y�b��)�ehՔ�A��W�&���U7����4�#9���-�T����`x��2�x�L���Y��\03Y�xv���c����V5�Ï�Ct����|��?��j��_�/�cGJ�.fߪ�\0�N����ę��v��77�L��æ۠3x�Gq�.�\n����&\\����ܟåj�|8I���<6]�\0Nj�W������㢳^����ywM���[�����O��l�M�k�y$�,�e���i����\\\0A�7��5���\'��xsMW\0d�U?҅S�Rr)ƵT�����F�����k��kk9N��v��Dh�M м/�-bR03hȇ��{]6�J����	�\0�P(��A�dH�#��i��X<E���v�\0/Թ�&���~	�o�~$�ѫi~��-�q.�xK�\n����X��ں+���S �m4�TB1ݱ���{�Ҏ��#�� ��r�^h.X��o�l�M����~V1ti>;�f ��i�V<�?�����8�p�,�\n�UnQو��M�j���9������-�ۮS�>�r���%�Qb98�Z1br}+�j6H�O�nM�\Z�����c�Q^c�xȳr>�,��+ӵ)U��wN��#\n�Y$|� �,u�>�/M�����1E%��ã����}k�<Egv#�9�{�\0����{���d��s^3�[@�&\0�ʸ���{%��jyu�\0Xc5�<@���k��m\0�T��ĚNs^�6�<ƴԧm\0�����*��#ޑ$�yS||�u��Z^�0�I���٠f�rpj��}�&\\����S#m ~`ԗ6�K�Ң�,�ݐi�IC�	�������E+���זjs��Vş�(�R5?xu�p|�o��q��u�*����i�@�*�WM�4�һ:Y|c��	��s�ܒ9ޥ?�j��ć�~�ng����6Uc2:b��nIz���Jڤ_��Qm�)���[/��\r��$��\0�v�Z���\0�yh촿hĎ\Z��G+���\0]C9��h@���h�-�\0$~��#��O�o�3f��/߱�L���C�3ؑ��\0��k\Z��x�����\'�K�.?�V�ď9㊕�\Z�U�6�������<��:��˜�פ������ome\r�-�`U�ʙo\Z����J# 5_���iI��p���Dg�?NU3a�T�	��Ip���j+	�d$�#=)+;�:�$�#㽰��Э����F�ݶ��z��]���6�mp���[4A |d���������`Ϗ�$�%9�+���+���4y.<W�-B�r�G��C�`�?��A�b��|�i^�oKa�Lu���ls��V�ۆ�hC�V�lW*Oves*;bܞ�4vy�Z��6��\"D�֭��Q��d��O[S�T�U�s�(�OȦQK^\\��A]��b����>��F�V���[���W1�RsL۞�&���o��a֝�ԹG�[g���Ha^�T��q��&��A�G4ՉA�<zT�G\\s�@L3֝�;\"$L=�\n>��\0�9�9W�sE��qD����Ÿ䏥W�<�kF�@**���Vr.[õ	�j��eH�5��H�f\\7\\p=��U-�%��<Kw�!����j��;X�Vְ�}Ӟ��d��?�d����A�RGLv�nv���Z/_�U���sڭj�2v[t3�A��T�;\\�zV�����3��ɼ��J������U� ��5B`pI\0��;�jMP8�s�zVj+[��)�sA��ǵG�l�hAZKi��J�}���ծ$���Ů��m���䋏v�I���~W���+�7���	B� Dg|r��\0����=�\\XA 9%漈����}eh�B-t��7�|d��	��7�{T����<ƋBS���Q����UD���v���i%�]��Wnw�ZyqQ>�q���qV3.b,�����bj�aX��v���d%Y}��� /s��\0�\\�cu��I��q���� u��v�KBX) z���Z�|`�޲/,Z9������N�Z�(��X���6�Pv�����M9^B�Nx�̀\nx�qrGE��-;M�@%q�9 z�ҿ��c�A��?J[X�Ύ�3�=��\0�z����5�.��N�T�sT\'�ڬ���,i��yn�����y�>�p@==�\0Jͻ=Y�8�i��+1s�Cں�\0���)/OƼ���Y�1\0�@^���~�c�����ǀ})+7}��X7�z��2�P �����<?w�����>���>T�s��xY�d|~&�,�|������Y	X����\0λ%\'����z,|��d=\r<�kh�d�9�Ah�f?6>�:���\'�!�H�i�=k���WWW2�\n��&趀z���|�a�M�}v	ASV���\0�<{�SȘS�ª3��]u�Y��6:װx����D��e��⼃[��OV�\Z7��Vn��#y��/S\\ޢ�\\�g޺;�ov�\\����q^�4��y�i���\'\r�V��T@:�@��I#֧K��Ȯ�v9���ҕ��r�Oj�!�:c�U�``@*qVl�9<��7w����\\�1ц3Vc�皂#�\\��lu�O3f���Z�\r�pj���v��Um�y8�h@\nd��b����J\09�}�x�zb���\\�#a\0r;���/�[H�8�����  ��J�!��2è#�[!���nx�X`z�r�MU7\0�aZ�m��1�Wj���W�����\0�?Z�;�94�=�I���\n�S���w)x�I����<�E��U\\H��\0��W��\0�7���o	Yy��wO1�vv9-��?�k�~xB���l34�#�y�Ơ��j����t���E����G\0\0z0��5��T�=F���%\n>n8��l�q�(2� �4��\0�ӎNG�&\n�%ea��s�RI��jl`	����P�����Q����T�\n��\0�H�x�	���ʃ����c5,d�9�Q�1M���i��,M?o�  g4r���*��ޒ���R�������d�$�;d�G�i۩T��ob;�0\n�	�X��Ȇ\'�a���e�C;{�5��|n8?΢N��s���9�5Q�r��Z�#�%���[㧥$���r.I�]�S�g֬JIb	�Uw9��BRZ�4��)I����5Y�U�AI���@^M>��{���mݎ�Y�.3�ք�$�z�Hu<н�*��_�Z�uYA5�81&��\\Χ&V@�D����`۹��F(�)��;e�����N_n+�/_���n����lW�u���n}Β�9L���:�Կ	5h�M��y�וR<�=�ϰ�q�]�V�B��<M�泬&YXm�^L�Eu�m�mi`w\0{�@���IO\0�Z�\Z��ay�����W��1bǃ�Tͱ*�v��ֵpMT�3��d��j��E��K�RQ���{�t�?��t���D�#��P��9�NEpN�Gl\'�9�V��Fx�L��E� g�[����eٶE\'�;d�\rF4�gr��S��5��SGr�3��n́�`��zĿ�ٶ�-��V��4�	�Z�	�͘�p>�;�c�.��Yn�7��\'ֳn%[z�F�p-���5�,�H���W?tt�wgs��-{�V�1}��/={WA�j�hF�B������1�d1�Vm�_*\"�r=GOʲ��庱��V�\rˉ��>���Vn\\�u�8�\Z�Yp�Hd$8����\0�{%���1���KS��$�F���B���f%$�v���Km�Ȉ�\r{����>��>!��WRB*H�M٪W���(o��!��u�B׃��u�)�7NYI;OO_j�\\x%vb\0�x��U^|6�s��LD��ϱ��ܹ�*rVL|���^Q��\\�Q�����T���k�Uo���GlW!�#1c�5�7���k=�6�Oc`I#�;�\'�G����\nK��C�m8�z��[a�ps��z����{�D����5$r6~n��ubw���Yl�C�z�����*���crI=k�}��A����d84�n����KjY��\"��c,NOJ�Ӄ�\"��QB���3v���.ƍ���[�YA���B:\Z�d95��e�ݓ#H�9�p��sLB\ZL�S�&��)�S�u.RqZ�B�\'<})�7s�b���t�d���J�����O��f��b\0ɫ&b�P����U��c�m\nһs���O!]�r{U܆c��]��_	���c�G,[��@�OBG=;�\0��\0=�gfqb$�+�J~�?\r���\Z��\n����d�Q�2H���{�PW���v�B��U\0W��N��I����.1�i6�ӣ_��OBS�15�\'\"�AEQ���:�Wvi�r��A�\"�q�Q��eM<�9�1Ҙ�#_�=�����*��\r7�n��܀7�Xw�[-�)]6���#֥����1(��2p*D\n95v� *�i�5v�v��\n��D�$�]�F��j���u�l�]���,���Z���w*�/�:�Ƹ�NW�嘞\0�]b�G�����AR��+�IzGMʬ�V8��<����5ci�RQKBor��\r�x�Q�|ýX��Uv�O5\rE���T�q�5JQ���rY7n�Q�(-�\"���M�\"�����Q�l���;���J�#o�J��v���7�bN8�j~l�Moj3�7?v�-ZnK1X]�{�-K��ROir\03Dc2�<�I�^z׸�2�=Q�|��aNx�;�v�����[X��-�\"����?��\0���M����Ȱ�\"�����璒�^��{����.Y��{Dn�A�Z��=���\Z������jٳr�JΜ�f����6����\\�%RՀ���i)��.=(E��g��5Mm��d���WSU�0ē�sN:hm�c\Zh�+\r�;W9y2�:��1]-�W���jF8�n¬���t�s���)�Nm���^�Ӛ�/$Rr\0� �m~UG03\0���8�u�\\�m����zW�6��zq|��=�/̃�=+:i���?:�r�\\��#F1YWWX����+;]_��5Z�U[����px<\Z�~\ZL�\'�\r��R#\'�>��b��vӞ���?����\r���М\n�{{P��{׋��v�\r�]�73�V�5���H�}	A͟��o�Ê���Uk�Q��T.��P�p��^��BVy1�9��7J�汧�PO\"�u-h������j�bp�s���b��=|>MJ>0շ)8b��5�\Z��|���]O����;ڸFL#S���+�}�,qڭ�D�.܌��%~2��v\Z�����¸�B6\nr9�5|�p����u4�)��Y;7��j�Gk���Y��B|�b�O�p��5���g��7:_���ki.�w�]��o�;[�E6�ϗ ?���\ZГC[��^3�� r*�5M��qV��z�``�j���2��h+��(]� \\�z�l-˸\'�J�Q4�g(�L괤S[V�k#J������,�\n�m��)nY���^EVL\n�(�F�p�2x�P�Զ�WC��§@N�ZDeF!�}�Q�����Z�L���Jv����c\"Ȍ�ӌ�b7��\0}q�yY��ʵ�Lyf�I>��j���l}j��qT��dd��9����_Q~��e&�s�y�X�=\0�?����&��6��Y���2�\0��<�z�c���M=�6�F��y�{�u(�7{�&2��PGi�]��S�����pjPۖ�YQwCO̬=*\Z�V�%T��ކ�-�\"b���G�X��r6�L.3��֚D;[Ai����x���	]�HC�ƊBp)�g�RE$�sP��Gn��ˆ��ܷZ�i�7��H�@�(]��\0�T�6Ւ!�{�b���T_޻��W�O&�@��h۩,k[\\���]�Q���n\'��ɎȿJ˽�CO��(`���p$��r���X�8�ɩ�\'�#�0$�՜�I99#���Ж��a��U�pzsR3�2N?\n�Y�����7�&6[����i�N޵/��q�ғ�ؒ9\'���K�õJϒMT�@�P�O��%.�w�W���U;��)OLէ}�ưo�!�-��ں��$E�#\'R�����r:��C8����X��k����7s�r>���V3泲4�|J]QKd1As��lo���\0�����,�R�w$�r�&�\0��+\0���Nk޾|j����L�7#_�R9�=G��Ϝ�J����ϴ��Us�gxb��,ع\0���]��r3�+̾x�=SIYJ�瞕���jm�!x��+�Nz��F�ר��V�M�Wӊ���:W|�97�E]���A\\R��R��5��A_Q�g�(RG5%3��w�iP��`Uycح�U��1ڡ������Tv�¼B�P��[Y��0e\\���������8��Ԑ�����p�z�Ӣ�����T����N�ͼ��q]^����7�	��J�<��W��z��)_e��_M�w<�ɸn2zU��h����[�,�3ǥb����+4���$`�$n���Nh	c�sڭ[��9��֦���o�X�V�el?墹�Z�}cXM>݉<���߳_��Z�\0C��H�{vc����ש��\"kGɔ#�9�z\Z�V)��[�q�r�]���l�����SO�ܼ�?�������\0�:���\0����O�Pi0䅚��r9�����1�w�/�.<_��dYg`�JF@������V�\0.�gl�ʬ6���EK��w����\\+��h��mTci?�P��-����Mԣ>M�ws��\0=?�~\0��^*�����ׄL����������q�A��|O�߲����伴F�,gl���ɯ��;[	�qZ�D�bLn�kT��>�l�\0��!V7�E.�->j�E��}�2T2uʷ_Ƹ]f��_8�[�>.��ZCs���2����W9��c.�-�?�J�y���myZ���.�r�py�r^1�m�k?:v�;W�����E���8��OZ�wT}oR���V��$\'�U��J<����:Z�|N��⑺=-V�?�����\0�⚄��4��_]ܳC9�����B�+��]��B?��&0�\rz�\'}�y�(�N�~���\n-_C�Y��[:��y�s���\03���j7�熠mV4�P%27\0���\0��א����dۿo 1��5���,�Ҵ�4��oh	U!O��X��Ek��IS�fw��\"����P�k�tB]-���d֏�?��x�������3�8���\0����!A�����̇4ݎ�C�2`����� yj��)��t���`�I��t+F<���=�Tc��X)��U�S���ްS��WV؋�Ƙb��K$�;��9eɮ�wZI��Ƙ��jH����5\\9�;N���S��L@\'oj�0`��§�@5]H\0�q�\\WDa}�;�zZ�1�`�\0�;�?������j-젌tX��+㿀�wٵk[�O�)�`;~y���r����+�6qH��EG9�	*Òia��hh���w�(��q�խt96ܔ����i�u���)�����sk�������Ҁ�4�ph尐�p�4��Oi�[�a�f��>n��sң=M$D���B��O�Q�\Zym���M\0�Z^�;� 9��E\0�S���������T�MMnpJ��[HϚ�`��@�Zvʡ�\0��\0�\ZӶ!`\'�w�KK�]H�$�>�W=��4Qm\',yڵ矆\'��\\��y�L�o�d:T-tڙ�go\\���1=�K,���_z�3�N;�QKc6��H�I*y����4��r�t��\"���$�Bu��.%��T�=OaR��<�T�Wp �~T$��r��`�j\07r?�����4���Ϝҵ�\'�� �.�B3�;�s����ķ=8���<�#ֹ�뢪̤~5M���v�2u��q���\0�r{kgS�ڤ�9>����w�\0��~$[[um(V⺿O������n�}k����z��&�N=�ҋ{���)��S�_���tf݈v�錏_��\0�?F�>P��_j���N�m�X�dF0�S�\\�\0��t���2:�s^,o\Z�3ӫ��6����3W�����e���b;�k������뎴��K]&Bv�c��<�w�����9���v�I�ګ���������7���]�R�ʺQ$N���_����p+��ev$;�\ra�	�����^}Wfzw��Yv�&��k��&dm�\'����T�ds&�\'�m)	�\0ȯ>m�>�$q��,lŎ@�j�f��`�����t��2�\\s�5OH�3#`CSO�:��(��p[yŘ8g�7�%F	\0���I��r��Cs]V��*eo��B���TՂ#�ǀ����^6��+��?����<M�����P�|ߕ7��@̪�E���B3��C���+��LO8q����tM\Z�櫌T椏��-\"�߱q�r�Z��E\Z�q����@8��<C��N�²±0$�Q��V�b#V�\"Ó�L}�9aV�U,e�3Δa��(�g]�����ڽ��v*�ɹ��;��]O�\"	.r��5��ڹ%NT�Lj�6�\'��5=UZ�Df�\0�^����oa��Ў{�*�$?6I늇-N��Q_c��.�>�4��̪�\0t���O���Y��NA�J��߸eOS�����NV���ե�����G�ù$�pEG6�c\\Z:������sXR��wa^�5̵9�݉�0W\r�s�+Vկ5T1M+��<pkEm�<��l��\0��V�ZV�Lʲ�����9;Et�YU�y��ii�������L�F\nQGO�ʠN+���LgvEpvW	3]N�x0x�jA#�J�C�I���v�rH��I�S��G���Q���y5�oy\Z�k6M#����-WF �*de�����[�h���B�����E8^���sͤ�{��C��2�2t!�\0�s�\ne��i��c�����P����F�?�kݳ�SJ.���h�I�m�h��]�\'�5���u�	U��\Z�[����5\r2T� �@A�x���\0����[�y����r|������N*���7~fw!�$����ɩ�|F}��0E�y��뛗A(��M޴�wn�s�)�z�f�\nL�kK���\n(��\\n��J�n�ˁ�P�)�CK��BNkH���A�&�w�M-�4�TF\\�u1ɤ���>��}��u`���x�\'��Xߓ�­���f����Z\\ѵ@T��]��q\0��T�!�w\nm��������M��\r�:�Ȇ ���f���Ƶ�ۿ�n�ѳ��0��q�k(��b��q��9&�Z%�Ig@:���� @s,���\0\Z�;-8��N�UY��c�V}ǈ��`Zk�\\`�Zǻ��nrn|�:�9��]I�r����MP��ibN3ڹ�:5�%%�E<ےO�k���˧��Ld�%�:��[�ZW�=YZBAɨ��DH���7��В��8��19?�rگ��BT>_�J���/�ʛ��ȯe+�t=���Hͷ8��rږ�\Zy�xa�n=�+µ�����{^�6�� �۞����kn���j6��\r���\0>޼�I_�\Zr%���l��4�g��q\Z���7�B������5Ip\n}�8<�?ƹˍVVb\"Vw$��~��+[@��G��*5��̀�FG�d��<�j���ե�θ�=Q�	�����8���`�O�?������u�R� r;q_������l:0n�y��\0��\0\'���\Z\r������\Z��ڋ椚=V�W��P1ۥe�˺>:��m������\\��N?^ƟUao��T��&�S������;\Zp|c4�0j�-�Y�d�Ү<�k��N:���I��d��ws\\v�f� �Lw�9����s���ޯ�s!��Κ��FZ���B��x�\\n��e\ns���k�֣�nx\"�c�G�y�5ߡ��\\ɶ�B���!��P+gGуm!\n���h\r&6��U��W[��;�3�@?wEODW��D�w��kxcx�ycq=2k��4�e*��G�5n�M�r���[v~[0��*ץJ�ǘ��-��Ĥ��>��n�8��ݨ���(\"���w�$�p�m�E�Rz�;�x%&&MŻ\n�݊��\n%�c��<�4��\\�zb��\")���,ᴄ9ےDc�[\'�^q�{[�����t����v�(�\"�⻷�#��^]��J�mі�O����>��:)so��_@bvV¨9?Lp+�3*�2!�H�;W�x��g�R\n�);F_s^f!x��ن7�����⯩�P���Y\n#[�&�������\n�7$�z����7�%�cҸ�\ZZ8���ߥL ��\'\'�y����N2���]7$��kd|�ƹ��VRS޽\n*�S\Z��dۉ�P3zu�2JU�cq�\n�c�k��KS8��\"դ��q�����b��U�x�Mkp�6P�7l�jl�?oj�Ӧ��nHqϽkY���8�ٺ�fth�\"rq�S[J1ҳ�N��rj�BO,+����ʔ�Ջ�m�i\rӊjΫ�x�n<=kHAȇx�tc���^F\'p�\Z�y�Rɪ��Vx����	&r���Fy�X/m�-�]^Yf;R���8Q�e�3#e��^��5i��^��Ͷ���YdU���z>}=��&��ǉ��q_�O��+~Κ��I��Y���64�Yry=9�\0��;��x\n��?^����U�]���\\j�h��e��e`by�b1��y^��cx��C+D�Hp���\0�Nzj8�K�.��w�}\n�-���Mi�gZ���ơa����a�c��*m4U�\r\'4v>Ԏꁋ:.?��U9�{;ub�1�=Z�2��Ya#�ȬY|g�[�u��$�	>#hq+<��#o��+VTb�:������?�\r?�Xm\'�}B��\'ę�V0����4�;�M�wf�0��OQ^{7�ML�+m`�f�c]|G�rVK�kw��j#w��M^�1��y���I��^+y�HT�֪�����Ⱓ���߱U�o����?J�y������H3���֨��-2w^!>�����P���ุ��rjXu��:̤�f��z|�}	�Tz��\'�4�c����\0d\n�_�:U���P�yCi�&�&?ة�����Ⲣ��5[�\Z\\�\nJƜď��`쩶�RA]3���}� �Z|�{1�;ύwR<��X=�\n�o�>#��}]�.0D(0����*��!���y����gn@&�E%�H�UQ���ȟV�����S,Qv 1#��KT��\"9΢���N0k���]���ᐌ�9���N����GP�MB��a��[����D2���p�\0�������-�&(g�u\n��潚��z5��|$��S\r*��0����&kE\ni�w�O�m^���\0�7���o�\\`pXDs��\0�z�[/^�k=E�=d?�+�W���ϲ��!���h�S����y��G�C�?H�.�c�\r�A�`��[�n�YĖя�x\\v�\0?��w2s�{����#<���8NWQJ�N��i6|�}�T��%ot}�����	�?���WWQ��\nrI�^�{ ]�{swӯ��ю�R�m��9������O�t��.\0�j���_Z�ۧ�\n1�s�+�/�9$�#�]msȨ��[1mZ�\r��SF�7��¤)W�k�Ԭ-S8�F8\\\n�;��{���ꗀ�����幤`�m��ppkBٶ��5�k \0dֽ�z�-=��]7n�Q�^4rpq��?O�\0]}��^7z\Z��o���#5�%��%��<nNq_S~�Z����Xyj^�#��+���˘��?ݴ��4k�2\0���q�ڶQ�\n�4+�F�o��u��c�>���Τz����wҭ+��ҳЅ`OJ���>��Sz]�����#Ԏ��1�5o�S�qZ)[r���j���9&-��ݾe��z�-�oa�:�S)Y]�}\"@�,w�ᙥ\\\r�H��%\09���������\'+����{����*���=G�aC����Tt������c�U�8�m��\\�N�c���fX���9��]��������^�M�ؾy+��@���T~�����s��/[ۄ�T�N���a�g���O-�9 t)�NNYF@���^�l�<��R�X�.�����c軜s���Ev�\\\"��k.����Y+pA�I����$կ�i��p�R����qu;�%�O�! �y��H۵1�͹de�Lm�hX�G�<oe�k�UGL\"���̽J�żN�PPA�\'\'�+��\r����;�$0�A��?g���ɸ�a�\\߈t�H�L�\\�-Έ[s�\\�������\0�yͤ�5� \0�䎙����o�,1gdg�:�EyŜ	z$�<����os�Q�H���t��=����+���?)�\Z��ͩ����Ԑ�ֶu� �ٺ�!ӧ�BN&I����s�vOm1W\'���5�ȸV�+�� ��시�zc�@9���d�͘7# �9����1��Zr��ϥgM\0�J�\n�]�-;�B���p�/�қ��	,�0����V�Tn\'��Q��2�Sj�@��kN�u9���l�Bs�>�E\\�oC�\r�{��OF�����am*�I�-�ʐ���I�;s�8��}y�NSxI�h�7���28�J�\Z���26n�b��V�[��e�y�RI�=�4����>��_ֶR|��[��<��# >ӂ޵��¯/��5ka�-�E1�$�\0�取���k�$����;��9?��������b SV��J�BF���w��>牉���[5�⮫(\"\r���@G�\\^�i�x��[��n���@�����E��P�m��E�c��:���lO�_\\�O��*#�����z%�}��]x�H�X#�b��3�.��#���Q�k�.�g�1����@��� ��s�����օ���=�ޓl���֜���fp�H��i�@�V��s�@w�4Oo�Ŧ�\\��@�ν�\r��0��%�QS������;2����1Zj2��|36\0�<�)�X�A�l��:M������?ʽ�r}�I8��i�j.iGX�Oo��8id���ϟ�W�MZpD��գP�Fc�rj=�u�u��]�g�K��<$6�{!=���=��r�]f�\0C	$-��s�y>�>��NEB��@E���$��q��v�J�����W��֮�	���������+�݀�`�������NI��~�/[�hPL$���t��ĈN�	Q��9��R�j�\\�{��\"W�\'ԊԱ��m�1�+:���kZ<���<hjڐӽ���J�=8�\\o�.D�,i��[��F5vݸ��5	�1�g�z�\'tU���%�p�[���4�͌�U$���r�fv{�:Iz�֩;�w�y����R�_�3�5$��␭*�l��UI�P�\"�y�\r�cT��v��I��f�m�#o����� l�}j$}��+6��f�O�µ��W����W3��\rσ��}v\n0��z�5;�[km#�a%����*j7�,	��_Qz���}}�l��ָ�j��|�M+-{�F�YZ��0���k�կT����=J|��خ3U��n�$�՚BN\'ui6��Ͻl�\\mBޮZ��\rnZM��V�Gz�^�7-n~rq�\Z�π�\"���al����s�g�����mfĘ�9�I�g���YX���}Nx�qQ�&wa��n���O�YUd�eH\0��Wa�ܩ�v��y����-�euһ-�4n7c�zz׍Z��h���rcV#�j�rk\Z���rEh,����s�r8[Bٛ=8�c�2{�j��i�ۅn���l>ir�=+\"D�hlc$�y5�4�i�ֲ�R�Nz����Ί*Ô�S泯e*�=�*�gl�3TuwÂ�he���?vu�IhP��X��f�\r�v����\0Fx�v��<3\08�k�Ĳۻ?�\0������K�Y� �ol��;\Z�M�/̤�J��P�����%B�\r�V�d��/l�[E��$ە�n�q#�[<���U[�ƍ�w��y8�E�y��Č�8����F��\n>x?犙�Ì[[ڂ���1$��t�֪[Nv�-��������m6o>`Cp��էmi�F�x㠬�NecX(��6��.˻<c֭ǒ�	�ݪ@�\r�D=���3����!2\"��MK����Y���� ,Hb0���G��,2�YKc�\0�3Ɵ4m���F������x�������I��1�pN�+\Z��^�;��\Z�^�f������`�烎j�-�*mX���y�.~-[�w$C2H�rN����ݳ�8tU�`}�\'$���z\n���=#�zV�q����;�?Z��o�i����@���W�x����l���ۂ�ܟ�?��&��*��&vZC��y�O�\rNn�<*��-Σź�Z���F6)f\0OZ���6qڹ��Ip��(#<m\\Zu���n<��aJPF9y�F����r*���H<�W\\����>��u�B3]1r9b��o��R�f��n��p3VR?5/�ّ���W\r��������Ւ��2*���9I\nr+K��b������o\nk�Ӷml���X�!�����B�XM��Ijtʡ[p�\0���{T+81�Ҫ�p2��XRV����W��!#p�U\Zl��jh��]����9�~5��z#�rz�A��\Z��eԊf+bP1�������=�H m����|,tA;���\r��z���Z�����C�GN���|�l�G	�i�\r��I\0�w�4�RVF\Z_���AIQ�\"��=������8��ޓ�!H�Q��x�G\\q��Bi�#&�҅��1��\'��B�z�%��$yT�+ǭWY0��hy:��E�(�rkd���q|�1�:�O2�֣�\n�6cO��N�6�*8�9?�V7wdc�מ�;��,��N�BI�g	��c�V ���?\n6�$�csf��pW ��yp�Ƿ?AT��\03H<U{ۿ����C��Q��35��HXݓ��Jk���?SWu�D�p@���	%�`��m�_^D>I�\n��!���*9�6)\'�R��KP��|��&y�+��\\]|�=�*n���5NI�Qk�F���L	\'_j�҃��C5ט��q�9�M]nRvԹ-ª��Ұ/�Uw\0�#�T�ڂ��q��7�ݖ���\r���5�����G�Ns\\���mķcT�`�\\���7g�X�\"�+��b��{�+��\\f��\\nϽ]�5\0��=+�ԯ�ߓ�JkFj�ݒ(�w�R�W�j8��kGUԀߊ�5;�Ķy�Jښ�]���','����\0JFIF\0\0\0\0\0\0��\0C\0\n\n\n\r\r��\0C		\r\r��\0��\"\0��\0\0\0\0\0\0\0\0\0\0\0	\n��\0�\0\0\0}\0!1AQa\"q2���#B��R��$3br�	\n\Z%&\'()*456789:CDEFGHIJSTUVWXYZcdefghijstuvwxyz���������������������������������������������������������������������������\0\0\0\0\0\0\0\0	\n��\0�\0\0w\0!1AQaq\"2�B����	#3R�br�\n$4�%�\Z&\'()*56789:CDEFGHIJSTUVWXYZcdefghijstuvwxyz��������������������������������������������������������������������������\0\0\0?\0����#9�+x�\r�⠵����Z0ş�V<���>�>8\n�`�������J�77v�����T�q��ո�x�W�O�8ym����ׯC�T� `t��m�ۡ���ZBN�½�y�~٬9킆�WKy)�E`]��p��\\��6J��qI�3ڇ-t솢~t2�Z�@����3���N>\\u�wq�[#8�4Ɛ*��s��B�Q����}��O3(�oz��n�d�ҷ/S(�I���Z�:s�Ԣ�$\"��l��g�$18��L\0���{SVAb�=)pOj�T��WM�W�(�W tlpqM�6g֥�jf1T����)�}���hM���K\ZlϭP�̬F�Z�O򏨦����\nw�ŧ�J)bl�Ԩ���(N��k�6�[\r�S��S+��-�G�<����\0�K\0Ǜ�\\t���ܸn+u�٦�w��l�i��X+�UZ�RW����T;��ۉ�M��;Էq������+\Z�z��X*�g���L\n�v��3ܒ�7Ƭ�m�����UZ�x���m��RE�L�Zc��� `	�Z��+�,!$j�ZfHѻ��3Pյ7���>��RŌ\Z�$T��E��J�Ņ�8�W!�2�7޳C�h.z�J�%&t�����̱��1�p)�ks\\͖8S�t�y���Z�vbA�ދ�8���\n�6�e�7<�`	�OJ�]Ŷ3�K?�D@TL_��\0<���<��� v�O�u��BH�0��*�T�vs�F>�l�KMj������Ii��O�Y\"%�h�9�s���`��\0u�\0���h�,��{��[٢!g�ɄlP��>���2����*)c%�4�l��9\Z�ʚ�k6h1�km�o�\"�I�\\�t�4�j�Ś0���Y���/N��,_1��Qh+�:��s������y�*ϸ�\0�WE<k`f�.\"���ڜm�I}��71���!\nI�Μ:w���ԩ4)(�h��s������˵<�g޺+�m��jʞ���V���4�ӝ���Mf\\)d8��X	oZɸ�*�W{nW�9�#�k>���[���b�M�s�֋��-,b�\r���N\\\nג=�GQT��c֛/ə/7T,���W����j��Rjv.6K���h0J�>����X�ڠ���ڮ��G� U_��kQ��9>�j!�☑�8�V�#��z�l�$�D9�����a��S�EW��ێT�О������c`y>��|�z���ڰf�g�BNx���_SD�[��g&�nf]���}j;������EF�>��%h�B]p��	nة&�G=O�IA�O�C;�=�v4�\\�Z�dc&��|�|���j\'~O�$�W�ʊI��y�JI��qU�ɫ��v)ˠ�(��CH�qDcӀ�)�>�qo���|���T��ϭ[��!�T*T�x\"����~�c�>��j\n)\\w<��\0�>��P��;QN(G�&�=��]ƆP���>�i�<�4��Z��7BQK����U,+RȑCsQU�}���c<:3p��\":sS&�	\\ry�8�� ��\nÊKa*��%Ǩ��iʅ�����֖m��է�[�����gx\'��\n�5r1���v;b���5Z��`ǳ<c�l �\0��S$J���Ɩ������\n�QV�\0�d�R.J��ڨ��Wc1�S��8j���\r:5��z��E!�RҖ�5���w��}����g���0������j��Uw?/�26X��@�cV��\0��;��Uۚ�fHf���[��;M>ɢ�@<e�+����4�\0.q{�p����Z�%�=NH���H�dP�n��I���{O�<WQ���IH\0�\0���_B$�`�G5�>��7z+^��$�3C(l�@\'�O}Lgj�}��`Q�Lǒ;�kMHps�ל�Vy.P8!�������㺲���z�\"��$�;�pGj�,9f��5�\"��U(r{�ٵ�J��e\\F��Y�C�w<V��\r��کK�MA$\'����ֳ��=n���x�����Z����=�F�\0�z{�T��ݕ��k���*��=����E�v�=s\Z��]͹$�޺�3���YSG��qUZȨ�+��\0�/J̹�dS�o�+�Ʋ�[�\Z{0�/x槁~lu5�4AY�y�������k2k_��DJzj�9!8���l�	R0*��}��ҩ��k���(V�O*���g�9=����G�5}�]`�J/Z�\n���\\��`�<7\\U�!�\Z�hi�%\n�S���4�o���U.��\\��֚��B�j�d�)��[_��tꞫ}���+\n[�e�[$���I2[����y����\n������һT�oz∇H�W�\"z�KM8�����U`��\n)r�\Z�u�3dp#�ל*��\Z�F�Ċb�\Z��p g\"�v�¤�w\n���۾�*�e�QV*<�F��Ԝ�����/=)�ĥ�5+R/r �zh=AǵO\'�+�}i�)v��u4�з�g�s���ާkaو��^S)+��j!���\ZN@��Wp5 �cS%�����L}�v��֔z{����Z\Z\\��.���=��jJ�c�% �c�G�Ǡ$z��uk�`ـ�3\nٟ�v-\r�p�gڬ\r��\0Z�h�JV�G2��y���b��=�������jB��5�����KS�Ku=�N[\r�����y>�/�,X4��cI5��2@mq��Wtt@�~QY�:;�~�|�[�1���0,\n�p5�6��P2j�鄷̦�-=��[�)bU�J�5�l��M�	U�?\Z9�-�2��3Z�zM6Gy����\Ztc�աfy��MkgN��U��7�[4����\"�hi�<�ds���&��	��e?��~^��z�)���;Sc�\r.yiVV�j�WE6H�A��U���[����rR�F#�B:�wڢ����c��Z1��sH���:ԡB��I�1Z�[���G��oʞ	^�����M�h�o.�9<V���q���zVg �г��<�V�g}�N��m8>ݫ���l�o����#���8��hZ]��\r���es�:�/��\0>ޅ�iZN�*�(K�	�dA�����o[X���u/�G��\ZT�x�A�N8#�\rz��jY�r�?�qZ/��4�k[P��+D������\0=�I�E\0\ZM�=���WWsam���i��q��Z\"����|���������,�����A�im����9-󻌑Z���\Zk��3[�	�\rf�FF���ܶ�-�֨�i��S���rb��̜��ι��z��\'����k:���z�i�/S������f�2ǵu6��1ӡ���r�Kz���n!�F+\"��*}�+����Xv�k2Kr7qǥ$�z����r�������\\�5�][��zʻ�H��Dnb�r�1)��\'�]\rձ\n�Y�c5Q�j��-nbJ�*�ɕoQZ�����~��4\\5S./��DF}��JG\0�c#�.��ڵ��F�kH��_���Y���&,�4ۭCb����v��F�wq�j�����)_Ǉl�\rdȞX$��T�W.���Kn\ZD%���l�dۼ�-���;E�AD1�{�T��V�J���Y�\0��-P�nHB;�]+�\0���,�%���MunC��AsH��FCT�dF�B����J�<�9�Dpy��J�*0i�*!e\'�*Hcc�sV<��#��(�\0#�i%x����dd�#ޟ\0���*_-}*DB���mB)�g�K��x��м/-��P��]΃��I�9��qXN�b�ΨRrv<����ρ�	���J�CI��OJ��ἰHß�����A��ǵy�1K�kҺ<^/� �!�M��81�u��|�͘�#�S�¿6L`}+�Vmhl���<���8�\'��*��1�����}b�b�¥\Z!�ڽ}�%���V�����.B�=��xa����\"���\"?)�ɣ(]�?�ژbn��ƚ�y<��Q����\0tU4PT��6�\"�@�+&�F��\n�lV��3�}Q���<Tri﹂�����\\1��g����@ǿj������\'ֲ���<��&�P���\n�t]�wj�TM��c��I�ˌUf�@�\rwI�c����B/\0��Q-�饺<�m+c��X�<]��Ze������ֵ�F��J���g��j#b\n��ϭu͢�O�@�V���Q�E�q�Ye��j/�\0y5�I��N\\�[G�mh��S���3�:y �\"���U����P��n��\n~�ۂ�[��i�{�IjS>��=��T�ӱ������A�>�0���85\r���E.��H�&�d�t\'�+jsF6�*�n7�=iZ2���Ҋ�Ѕf��>�3��ښ����)���׭E�z�k�G��cz��\0,�\0\Z<���E���&떫\n����}���I�XC��u��շf������D:皒�щ��n�-������#�U^lg���Q�`իS\"���{杓d�+�PxoW�E���D�e9�P��J�3����|={xˆr�1�5�~�d#iK� t�<�WW9�m&��}\n�O��C,\0�h���Q=�Ee-�8=�a�ʱ�nV�&���e�qU^ܜ�+j[~�*��~o�\rZh����)�ݓ��5R[|��n��c��4*w1↔tE;%e���m�OJΚ\"��}�\Z襵$7��gMo����RV���\\�~nx��b%[Һ;�F����\nOF�cut�b�.�����u�pv�γ%�e<U-�b��Z�\0s�t���q�J��!۵e����Qt����jN�{V5�;w�u��溫�r\nȺ��㏭)�9��8ozΞwη�m���+2�A��]�I�z��gu$����%���2mP�bk�V��jjj�لf��0#�f�<��qD�l��o��*� 2�-ǥ\\�1QYFBG\'z�A�g9��-��m�9�;KBI%۠��e����0i/�&���Q��bN�A�Ѱn�v�aEd�.�������f\0OZ:\r�-��<6�F9�V_z��\n�H��x��\"�,\'�:���\0���*	�v�;��I;�w+�ڙ��]g��,�2d,A������R�s	������~|-{�I��+�f�?�^}|Li�N���%�/�]d��\nF3^ǡ�5��L��Tc�^�w�$��F1mf�o���F�s�%#�@��UgY�dz�����&�.�!�w�O4��-�-^0E{��Ӿ H�Ҡ�w>���=k��,鄣��<N\n,jO��F(_����g��X}B�u���gS�#�u�;3h�&�y���5�����O��b�#ڽ2�G�����\0E�)[cy��z�j�RInֱ�\\hK�n��>��8�p+ғH܍��*�MT.\nk8��ʄ�O7�IA�T$�Z2w�k�O)ؕ�����)���J)�q�Vg.Vs�|��q]���sP\\�k��r;�[B���2����s�N��I��V�֜���\"��Ͱ�3[s7�Q���脕�3�1F�\r��.,�q�kP�ֈ��L���g&��`�uغ���uR�\"�dd�m󝣎տ?Ct�x@0j� \0���D�����g���M��RVf\0�<�HTGJ�9\0��-��E)�y���N+N}m9���o�~^=@��i���i�ŻVu֚��&�;����qi�s��U9,�d�u�[H���m�x�i�Z(�$�S���T��W\"�{�Q����f��&�O�0�;��p��`Ur=�{vP���;�d<~5���n���	����M����B���ٸ�MzWD���Q�U�6�ۏ�B����4{�,�5E=6�^���	Rm��2�*Em�]Y9��T�v��j�h�4m8$~5z�%�&bGz�Y\n�+WJ��	3(wZ��G[������p3^��m��|��\"H����^e���*���z�����wxN���#S�*�<t���\0\Z���U}���5o���)���:��޷Z�x���[[çI1�\0�����]=�?�4���Y��\'��<札Ј�69^*���q�}\rl���c^IeH������t���Ou�UI,:�z���2x�͞����� ���0&�*�Y�Y���s[��s�\"���6Z�E5�.v�c�NcYR���3]�(�f\\(\0�c�O�K[�O�{��jw�ֱn����N��\\�s�Ȝnvb8.6)��箬B��b�[&�{�MxU�ֱ\'���Ѳeߩ�][��d�@�[ϥt7`1=�.�3�S�C�V�9��`?��Y3ۨ�]�c�}�ƜH�D_6��W���$�*2ri�r�j6lw�J�ڴWr�Ԫ�A5V��61�,G?rg��5\"�H�\rU���\"J$��S�Ŧ�G�8!�Dȣ�\r��r)��;�N��1�m��֜����9Wr�mM��zS�A7b�q�Z�ћڤ��%�W��i�8&�z!�_C&�J27��w��)�p�v<\0sS�k�B�t�8�Wџ\r�=��V�gvu{�z�]S:��Rۡ7¿��,�+�\\�	\0G����|#���#Cc*�0��գ����:T�?r���R}+�4m4;�`Q��q^;^�M��U9����V`\'e���Y�0�&��b#����]v�b5��p��!��m+2�A뎵֨#Q�p�@�Vya\\�Yێ}G�R�t��\"RM�u���W�.1f2�?^}�+��-��ً$�8�}k	S�7�U7d�7�EH��ϧZ���e�;s�F1]ֹ�n�%��_-���������	\n��(Gם/q�w�M�����~_L�F\"��V�ՠ���� U4$$����OqY=v:ޏ���:�Q��:p�G5��h_s�Ⲯ,�-��Ң\n��#�����?W;}l���=봾�\06F~�����F+H�j7fӉͅX�a�P«&��*ҹ�!}�v�2��Gj�)K�2�2n��bX���],bTq�������80��p�\0�ڵ����ҋ��L�`�|�����y?�+p����ҪJŘ�M��s;4�̯졂��Pɤ*�+�[����ғ��8�U�M�K�V�zb� ��\Z$ewt>��l����\'�UR�wU��k���D�H�%#�\n��`�q�VL��CDȇ&���d�b��ˆ\n0+\Z��nnr\rmN�ny�9� �y��g?��;�_�Yo\0�z�\0�mN�ꄑ�bz�駵�mj�fKm�-֪}�\0�z�˂��*.��7G>����`���KN�������Kl�+q��.ڇ#��\Z����\"�$��,3ȯO���w|�W��[A \Z�4q8[c�u��͞­<aX�Z����r]Q�������RR*�m�!\nic������ڸ-	�L/����O��j�lJ�\"�$�5��浭������þ#�K��1����넌�y�V�.Dgړ]I�n}S�?��V�$L�w�/^q���#@���f5(�FON+���l&�e۷p�������i���&�-v0qG�{g�t�dT�z�y��an�;�R�8��Z�w�ہa��@��l�5VQ\\�t�9���v�8�k]�8 �Ҩ�G��;;�Y�S2d��85�w�|�ה1n�S��6*�h�ޫ�1$���ֳf@���I!:�����I����.^����3Ys��A<WE<3�q!�]�����b��c������zȻ�s�+��@�d\\��?J=ۊ	+��Ͱ;���d���åt�1m$;�Ǹ�6��t���X审ʐ�Ɱ-��k��=ă��Y7P��(�!���Kgp4�(���ܕ�ZR}�q��J��SF��♟,���V-�*�<w��CVm����iE����D���&�D���Oދ�)�hO�APV�J=iC0�(��˸�Z�e��)-���+�Ѵ�Ѕ+�ГF�I܂��cS����4�Ө	�\'qSZX�K����w���p�H��?	\\��q\\�&��4��V4~x���$�����ٿ\n~-����*@��^�v��o�e��\"Ib2c9-�\\��������E\Z,j���u��I��ԣ�iqGl���g\'\n��<V�V�K���\0ʎ���\0=jk{U$7���1���j�xR�FAz�ֻ#I@�nۓ%��q��ˀ��R�`$�J�9�a�P��B���Ԛt�>�����V��|�m݌��]�<�����s`.�Dg���~ﱭ�9��kI��`��c5^!a��\0$1dW<���t�9CO�����@V�<���At�~f�\\���W����\r���X�O=k��4���7�)\\<e�y��MX��OG��Z��I �6�Q�B9ϵc^�:+FV\'�v7\Z{��뵔���r���\Z����YѺ�z��9e���8n�J�̩\'8��[�\"�8�ֳ�1�b�Rm݋����_F#-��ϖмe��kj��nA�\\�#:�*\rm��Q�,L�u���VSD�\"�.�U�k&y�e��M��1nV�L��|՝s\0|�5�3(��Qʰ8\'\"�,�%;�I��f��#�.�\n��`i\"p��qO�ɴ�5mv�ɧ�2�m�l�ِ~aޝ�A$T6�ɢ�KnP{7@@���[Мp*����f�2�Pܒ%+]7Qc .1Yw.c�ہ޺S\nͻ�\\�e��s�J�3wI��5vr��B\"�$���[�PA��X�!z�[�Wz����<Yv�C�m�<zV���N��q޻`�Vf�wԢcURO>�TŜ�ү��[�U���y�P��s�Ȯ�Ԏ\n�5t\"� �o�kH��qfD�	����½�r$~��ba��R�������N���G����f��k���ҽCZ���&�7j��CO0H�F9��\\\'}IE�����i��5+Ŵv���m��s٭Ƭ��۔�Ȧ7�4�ր�[u9_4\n*S��,F�Cz{R�\09�})-�3����<-6�9����L��~U�ʺ��Q���p�^���5i�㹵3B���\0q�@O��~x�O���\06�\\`��H��z��	�VR�D���_���$�F2���=���%�S���]�1���\r}n�l0ª#Q��u��v�7\'<�mٴs�����x�[&�K�3ɭw���Z�*\r�I�ڦ7�^�T���z�t8=k\\�N��U�L�\0f��Ե%i��2[���	�)�ֶ�R���E�T�)���秋�\'+�˺�n8���,��{VU�1�j�I\r��&s7@|r=k*�	@�t7Py{������qF��)r�}�j�>B�w�\0q]-�c1Ȭk������\\���@k.�N{WCw*{�ƚ-��ڡ�-ʃW�g��?\n���� ���jM�x�])4v�b:��fs��{SR�&������;\Zh!QAmۿ٩K�>�f\0�[4������C�V�I!\"@	\"�[�<����f�qZ��#�S��[Ҵն�.\'�lA�LzUK\0eb�=NO3�[>��y����=��UIbk�O�����1�\Z�F�|��\\���<��5�{��\\�y�g��.���}�k��o� ���hc�Tp����I5�֟<�m���*Rh�<ᄵ���+�pR5^���M8\\�U��XsW�-$E��cJ���U�gw�uP���U�g;�-�p,H:��>���H�$���@Fۚ�4!ÂČzV\\�r lD?Q��%ʴ5�������r�e�qϵ-�&͕�ɏ�Rw��/��F\'��EVw�~�09��W5��5���A3#!fp�߫zRY��)_x�*U�e	g��l(\0�=��^Fc���@$/Mߕe��w�~ͤ�f�E�Q\r���\'��ڱ�.cy��a��C=�^p�U�#�|�7�{���2�9:�\\u���N�o�p:չ�<\0G^sֹ��f�v��6��)_������kی#��w��i;�S���Q�}�6�O!I��خ�1�͸������Xs>���c�����t�wR��فENr=1�Mwڍ�;@�+���8b�\\d����;���&+�˃�Y�b>J��[:���e w���!I�Jꅶ3�I��%Š�wAT��\0�kFY	���!ۑ�o��ȵ��3䃨ݓM�ٲppOz�����S#��T��.񒵈m�Cd�*a2�.��=�$��˶u$.k5�MY�\r36��T���@�B�f;�N?*׷��g���(�5di@p�i�@$�kj+e�|��-��\'�ƹ�l�2�u��˜}k���0}+�����p=k6xT�v5��1�����XȬ�sT���r�]%�~[0�Me��c��ݬ�9\'�@Ts߽@�I\\�ք�m<dT<cڷ�Z�Ms����\\c�|aNx��22@��I(�+�Z��\"J�\nѮ\0�����,@c�c��ڈ�9X�1\\��b�\'��=/~\\{עΞ`n9�wW�ތ1[���g��R�cr*!�k[T�d�.	!�7f+�-5�q^ۑS��!�^���(���\Z����ns֘�k��	����e��ɭ[��d����8<��ݱ[�a�Z����D-Iǜ�����ίq�L����N��E\'#�z\n�)���T��|���0# �J�2��v����,��60[}�js�Db��I<�ν��ڤ�_%��2��K(m�<z�?�j���s<:��|��a8������^�U^\"	�kL����	5��r��3��\0N�Z��ps�+ZA�q��U�gf�ДL����=����ϵf�lQ�[s#.z�YWQ�-��I4k%��[S\"xՔ�?Jɹ�-�LVԱ�$zqTn0��\"��b���`l�sX�0d��]��{\ZŹ�7�+�;��� ���<@��+���Mґ{�4�1iI���Ű�s�c�M�����0��\Z�\"��J1]77�b�<y�~�,c����E=���.%�>���������4RK������_QK{��V���n4+35y�BFp)��U�z�G���\n��gUJ�i�4�s�8�pZ�<����\"��Tgw|��k�kM�����zU�d�[�1`��b�tm:��;ۨ�jN��>���� ���3�>�� �\0\\���sz<\r<�`����(⽫ᎉvn���;�n�?�\0�-Ihѵ>]Q��O X��1&��M/�:�ɯ��K?�¢%\"<l�\Z�������69���Y��H�^���3(��A�Ҽ�q���ޤܒl۳��\\��\\d���^�6<Ҵ��\'�f���PJ�v5j�E����5ʣNl�=\rc��5�!�d�>�:{���T3*�^�s�zӒ}���*�\0���\\�)�S���ɹ�	�۽3�TFA.�?S�V��a�\0����Ȓ+���%\rntS�m̵��\'�N�*���Y��2O\\֫$a�)��8��)�E;�gA�\0��$ԙ�;^��5;v��D��B��?\ZȚ\\���خ���&<���z�ú�7�ca\"q���:�7k���w���Z�(�����qo�98�5��\Zpu.H�Es3�U8��#�ݳ���ZZ��\\��j�VM�}��*��kX����{�h�dTtz�w���C�FJ�.-7��\0�����+��\rs����ǭ]9\nQ��r�6�v15�wj�3Oj�f`�T+/Q��n���ȴ0\n��G4�-�1�j�,[�44bE�Fj�rZ	.�d��d��Al���V�Yl��HmV0���b�^���_y��@S�}kV���Ҵ-��;�51�E=)I��F���w��+�v�i�	�0�EhL��Z��P�c�b�JIlU�ݎN��W���e�i���+��	�ZȾtu$�Z�\ZW]Nk6��寠�6F@�;ȎJ�k��p2	�n�R�Z�+hD�������OҪ�r[+��[G�s�{�sjv����=nq8롓�R?��4 L��O#qP�������8�	F�⫢l�[xr:�(1���Rq���۔ep�\n3�Y��nG$sZ2G��t���挩�I��j�H�X#8^}k��69��ݚ�H���4�m������I�\Z���O��ܣv>�8�M��ҵoS=z	�?Z6|��րʹ�1��E։��i����ґ1�J��9#9�[1��t>���ř����*�L��>_z��ݮ���J/V�����J���դ0\\��,P%©�ݱGL����z���%d�VE#p���5��~�M��:R��Py���A��t�+`\n�+9=�r/��6s�U̓��u$�U	ӓS{�(ţ>E%I*�ɵ3�փ��H\"�K�ړ�R�\r�ۗ<��5�>\0�;�Mk\\[;o�+�Y�h�[�ƅ}�y\'��rx��j��\0��l�fX�Ѫ��d)=�A�v����B;�5Ҁ�����,Y��A��N����1r�f����n}+���T����}j���Ts7Д��9۬d�Zź\0���]\r�Q�Y��\Zi��5N7������籧l�n��]J�s�})\n����X��@;�*j�W.2�V����a�_d]I�g*�jC��{f����O�[�P����[ץ=�pj:����g=*͹l���>8��s�Gj�ih�9��~t5h�ն:�p�1�]���h�n�$�Vn��a�H>Z�4�X�\r�S��k\'��a++#��ݽ� �Ӣȗ���O��~��_	�#�����g��[�L�}��>}���-��R>�RA��k�߆�/~�ÂH�3^}i;Z;�ݛI���Kcn��3H2d#�{^��[���+��f��h��9�����/-h��3���L(�E߱�W��f�⣑�`ҭ��\Z�I�d��sR�{�FFt�*��ܞ�WɃ*�p=�F�&U$��&��&�k�*m�;NqX�f�J����e8�=*���D,K��g�H�i-����c��b�W�/1�*8�\'�iv7�k�]����Rh��g���q�I\0������$��6yle�����\"��\"��w�ER�~hہ����\\��ٝ\nK���-�s�7A����?ֳaӾ����T\'���뻀�R��	��ނ��o����(�5ېz��5`������3\"�HYX�`�/os\\��iS,;b����B*�\0���F`�\'�N�t�Ϝ.�=\nS�n���U .@��q*��t��$�YKyj��ϭr:�y[���5���;i��\\�kq:��#��_�d$�ǥw\Z����.�9�KR����.]�,�G/~�:J�d�95�j	c���HX��\rtAY]�.�+����^�U���\\�GLV���+�⢎3�\nq�;;hDWA�;d�֝��3��),m���V�G��/>����ئ�c~ϔ%x\"�ҪFC1���u�$7�]�)�rhi�`�I��pNq��E�ȍ\\���o��5��1U#���-��w��`��n�tl��X���*�V=���L\"�g��P�@sY��KƵ.�<�c>�N8��v��m4�%rME,Ga�Yu��*�C�Vɾ��i��F��j��!l.3WZN��/��3��Zݵ��f��	mYW8�fb#�\0�[D\0�ҩ���I��%s!�*0:��Xm�zV��¶�T�V�qKQ5ecR���\"��_��f|�װ\\\"�o�s�\0ׯ=�E�72����&r�WZ~����*���w_<��=NH�3����y��s�kar�ʤ��R*0;i��u=�jbs�Y;��:+V\',8����.���J���?JǶ\"V�U5���WPI�H��R1�_}�=?Z��D}�?^�6�5�7��\0�h0A�����;t��Śn\r��x��/d!V�O.��ac���=? +ش�\ZHq�8�`��3�����s�QI\0\nA\0�U�1ҡc�&�u3����9ҩ�p��(�?Z��@5q��.)=�,;U��:XW�kV���r\r�^����Z��ƚ�9#�z͞,��ڷ.��ӵe�r�������f-�j����&���������p0��\Z���S�S��-�ԊĽ�G����]�w��V�>y�����4ݑ��A�I�Xw2���/8G�aݯ\n���Z��������F�9&��f��c\0t�Q�o�s���n�m�U�}?G%K1�K��Ԗ)��Km�E�̒C��i%dB}L�(N㞕a�`c��X0�U��ԃ��j֋�kj�lm�g/��;D�q��=j��d�s�Ȋ3�޵\"�]ʠ,O��e��еb��\'��𾊚����[�8�a�\Z{�!�_J�υ^3\0>�W8C��U\'���\'W�/y���Op�lb^:u\'���_V|=���@$0�dq\Z�_�p~�R�I�\\&>S����ʾ�𞒶���Fy���ԛ��:��궱�x~�a�|�T}�r������ƯW�AZ��¡��G�U2?�����G�C��2[��Qܱ�WJ!q�=�&I��PNJ�O��j�$��#�yv�%�6���5�x���m}��{v�*g�9�\'`��+˯�&�}���pSn~�(���z���2>h�6Po���/D-^k۩n��<��\0��E�E�i�K*G�~5�է��i���{Ec���3�����&���)�#��L3�5��Td�:W;�Tl{V��k&�%�ݎ�	�X��bѢ�*�È�{��+��]4������dpON�#�tQ���\0���?*H���w������vR��{�I�/��喺���[v���x�������\'���!em����|O�=�<�V����1� ����|@����O�p���p�{	q�J����(�P�h�;�Z�A\"��t#�:�]mc�eY�G;W��x�-��k�I��x8=7+گi�;�֝��ܤ+��D\0?J�|ֻ\nu ���1���N�~�����j~{�F�\0,=y��:�R��,.��1��z�T/�V�H\\�wHA��\\�=N�u����^_�j�I��%���%i>��ҳǈ����fdK\ZK�� \r�&�������Ϣ#���[��od����������:汧}��M�v}ȶ�kc6��L���j̖���ъܕI�ݨC��i;�w�`���$�)�nH�1��sZ����M=-C���7A�{��cn��(�{�XU֭�A]�jǕ�sNV��I�D�9�y%r	�=�TrjϺ�7Z�[\"�R�3%�9r;�?�Bň��.s�kP�l�3R�wf)I#���\'=��f\\��p~�twP?�����t�j�%oʎ~hCn#�⫵�s�ִ��7+\Zϗ�hMm3�R�Β��<\n̕\n3`��9%���X׷A	淄[�8%$�� �A<Ա3���k�g���V]P����Q��R�ZR:( ��*��n1X��g�ԇZp�Z�g%�8�M��9c���m�H���X�<��`�R]�q�7�a��.�&�OY�\"b0Eu��Q��g�b���E�_��LS�D;4�x��#�5����ut:�\"�������zW�x\\��yY\\�\rI\Z}����t�3�\Z�F�Б	�54p��B���ۻ\0�Úks;Y���C{WO��$�Q�8#�S��֨xz�;�n�z��o�77(���kidÈ�\0ן|T�$�Fm�fz�����f�t�i0�do2B�ےq��޾�Ґ�d�0q��,�Um�}.8`Ѭ�v��P�>��?��^�<���ݭ���$�d�	i*y�dL�⬔\n�#5�(v���z�A�F{��n�J�S�W�!Ǹ�3tj��R�(<y\'֪J��x�+M�\0>Oݪ3)*�t��ݬ\\��s*h�)5�2V��\'S��|�e±$\rK�q-:��1\\c�{��\\�n	O��f\\�$㞔4�K��o!¾OZĹ@�G�j��[�Ú#�����kqI(;���Lo+�y+�����������R�oaFWգ�>�(l�8�U�or�l���R���֢��FO-�^�V;mY���Vm�q��c���v�U��ZG�\"���L_.�t�Ѓp�V��\'�r�\Z�?�T��J�c�0��ԗ�E�u#.;{f��и�I��*m&��x���i/+1�)-l���hS��:�i��f2��ڱ��3X�|+��32�$sߧ���\0\n�=GR�#6�b��[�>��q�\r<&o��ȳ�&>fނ���m��cg#2\0I /_��/U��Ge*r�䎯��[k��������5��&�rz\r�W=�]!\"��rT���;X��$��YЋ��&u�bh��\\��q�(�ȡ��c�^�U��2�\0P�c)fYI�G8D�\0\Z��rG5��x_Z���9\n���;��^�sl��Q����K���	n�^��>P�8���.r��x���\r��ա�ſ1E;�\0��ʯ��O=�p7\'Q���H,� �p��E��c�Ӿy���W�������]�\\��L�����k��o��ش�����I!2�S�\\Ķޗ:�S��}R��ITڠ�[�f���j�\0�D럓�=3�y����6�vd�����\\F�<���9�jv&Y��^7l��b�O��A�x���+k���m:;���x���.���U�d����7��R_���Ѧ�t���}F٘���⇏}��ץrZ�\0��Y�����\\�Ϻ�U��x��;qߞ[S�<e6�E��o�C�s5ז[#�W�Ͻl�\n� �3k~���}ǳXnʎz��y\'�S�V�!�ɯ���b���ן@�l4�y\'��S��]1���G�s�\'v^�:����5����.�*g�^?|\09�5��\0Dwq��Y�\\�J<��?�����4߇ֿj�@����:�\0�j%8�ջ��.4�Ǫ^l���%\\R�{�:}�ū\"3c�`�g�����U��h2��m���VS�|;�ָۧ���iz��H5M4���SD��\0h�q��+>�\0�O��2D�N���8�e��zd��#���.��b��zA�^�ck,��\\[�{k���\0�\'?���t>3�֡Ͷ�g+����\0pPq����\r5/���R�m5��FS�T�0u����˧As����)�uNLq�U��n��ךͨE��iN�/�\'��nj���Rү�%�\0�$d�#���zg�&���j���H�\0<W;�[ܲ�\r�x�r�*Þ+R+d�.#-�Y�v,�p���_�y�i=,v��eʺ�$�څ���4�dy�J�h�yb��#�>�7H��\\�r���R�*��}�3�҇�!O�ZP�6E:yi�+%)7g�q|�ochLϰ�� ��U�!v�⢊<��*om\r �1���C�@U�E������&Ɠq���b�0�޴W�\\�Ҳ#��{�?7^��{K��V����qڪM�~\\�}�n�1b#�N�B�?���Z�e8\"�\'FEm�+5m]�}uhȻ�2�:��K�L}N�l�!�s�r�΢���$��U8��H�s�VD7w�����%��ǭg_�\rpq�k�Եy�8�ӡ��y�+�-V��޼�!�a�ꥋ���~�Ru�7�5Ʃ\"�;ȯB4�\\�I�Y�=�;��fϨ��͟�s\r��I�6~��u��Mj���\\��΀��t�����+ұ���dT��R0\r7n��幵��O�%��Q�$�Y��;MR���zդ���;�?W�pOv���$��j!_k63�t�W[Ք�}+	ӹ�e��C�v�LϏ��\Z�U���_ۖ��ڼ�a�\Z���lsIY�(���GZU�~��ҁ���e��EI䊚J�l2	l���K�=�-:���#p����^*Ԥ�XE̱��%o���>��H��I�n�lpv���{��x�+��[CafZ\\�	��<u�hI\'v�c9�;���߂w�,q���7���p����������Ӑy��4}`�-�SǗ\' `u��5�� ��cR���O�+���c�����ȫ2(9�%��3ޱ��m\"��nn��\n�S\0�*���8Z����3�BA�Q�8�i��\\U	������	�Ff�ÂH_�f\\G��mN�R*ʹ�hb:UG����s��Y\n�:�����<��\0:Ο�M_fM6���n�!I�k���]���v���X7nV��m{��S��R@�s׀���Ow�Zº��7jt����G\r��\"\\ei,�خg\'�ع�޺MDF���P\009��6+$���d��;WV��n��i �55�����9��O��y�P�m�ߎ�c֬[Z\rE�0!��>��=�k��y���2�����aK��0$����޿���s�4)`s�:�Gi\'�\\��T���q\\�ˡ�o[F�c]Ǆ<9.��en��?,���զ����i�o��F��]@$��}k��q^gE(���|1����K\"T\'���k���-QB���sҸ��`�U\0��W�h�c\0W\'��دnSg�ӊ՛z\r���Vl3��ֺKd�=G�T4��|t�Eiǒq۽z�ch��L��j9�F��\n��HNMe�;���oA]h�*�[�ǔ6~H}�\0���\0�p>/�l:R�Q����KJ�Ԧ��R�9�:,}s�:\\\n�UU�y$�I�k��U�N�t�<��{��<0y��9i�j���Zû������!��>?*�mjc�d�ש渻��O0;e��k���w��J�Z#��DX�d���o�����^���v�H�M�X��g�y�us�;�H��23���j:M���qmadgn�v�Շ?���5\\o��F1R�b����%I|Cz�6s%������T6�\0\ntŜ�k�^�6:J@�粁�]�/�̶G\0�#`q׹�g,��\Z!=���f�ݮG�*1��c|\'<LUo�ǁ�%�r�ǵh	��\"E,,8)�1��鬮�3�c?�+B��7��y������%E�ٯO��/�xU���@�n����\0ǧ��֣芠5�M�^�s�=k��b`at`\05�k6�r��*�zȖ��-<c�\r�Rx[�$@6����\0�g�����h�@��e#$zLר����D���рj�*r�>��!:|�����7�f82\r��c )�Z�YK��e��w�i��Q��ά:�J�6��G,r �;F9}�Nf�ΈA-c�牣;3�H��4���A�;Wn�;���aP�,\'����}\rck�c��T�\Z�yj����ģ�u�;TS��b�v����%$�qҫ:R��n;r�f��������Ʊ�n�Xʋ��U���QK	�<Ԗ��4�����]�T��j���q�J�����m�&��i�a&�gܐ��c����H�a�j�����<���.ݚ�F�C	{�L}J�m�\'�J��i\ZD\'q�t���{�?�O�F�\Z�݉���ZS��8�^v����땺39=k��Ly]��b}j��F�ס\Z�+3�t��g�߬��泥��`�5��3�a��Lƒ|��|�J�V�Wrw��cM%NFi��lč�J��\0�E�G�ʢOd�\'5���E:��z�[��H�˧�����^�?�$(I\n��d�)��)�i­֬�E���������ͥ8V&���m�����n4¹��-h��%R�u8��Ef�i���JBH��J�I}�8�Um7l�2c�W���\\�}i�̓���JDϑ�k���1�Ƚ�ּ��\0+3{�����2��Tq�KR�犅I��hX���]�n,Q*�W{��{V��E�W,�-�d)��0G��]_�,-�q�>c�J�Aǹ���]:K(`\ZH�7\n�OX��!]*>��C���Tm��&\"�h�Kh݂�\'��=?���G���SQ������a��O���ަ.�hw�\0	����+.-�(8`s�߯��{\r���r��м<t�8-�x9���+����&��,Ʋ�H��؜�N�$��#4�R��^b�h��S��ǥB����aW�9�$\\ⷋ��_\"� ��5V|l#�^~r*�ꤜ6M9&Мt�ɸRr;Vm�dd�ҵ�$n�QYғ �R�l�;���yV��p�������7rEb�J�/�W˹��^�5�|��c^���\0z�o󎢰�#!���f���مz�kg��ús��Az_�Յr�n�w�g���s�����S].�`tL��8V/�h�pW�z�4[h-���\né=O�;X��Խwv�Ywڈq����K[�ai\'��X���%�������2jؐ�1���:U����V_ӡk�g+���_:B���p�`�4�\n����k>{�\'���ޚ\ZE�6��������?:�C�\'�̍lNB�zZ���6�urJ��wn�\0��_`�\n��1��̗p`Ǒ�rq�zו���c����w���h�$��aB���ע���(��\0�	��]4��nI��Z��h�I�*oVkZ��L��P�t&�E`���\"~���^��8e�|�	8���z�D�FVm��@�W5Nfu�\0d+���ʒ����X֫ʴ6�ʷQ��d���T�9|�\n:�;��;��z��2G6�?���+��/4��;g�\0�\n��;��*rv�W[�\"&%H\\>s���\0��%r�z;.2y\"�/m������X��X_f!�CE$��q\\��l��9:�ڥ��\0��^�?(�b��,�`sw(�^�J�-�l�RA��MƏ9��p9�P�}�M�&gH\n)��H0�\0�U\Z�����=�/l$\n������r�$�q�ԥ̴e�7����SFl�#�iZ_&��^g����]��QS�8<SP�r���=f��\0=��Գ�ץy��u��g�#�t�^��P�#�j�I��B�o��������0��b�mǑ\\u����ȫ�q�6E\r���Q��yG-TX`�Wk�\\���2�\\�̽�U���l\ZV�b1�j�ls��#���ܼy����[<dU��3q��1�-+eqۥe�D�\"�����]ڌ�٬+�&P�\0�9�7�J�ZG#w�9\0��ʕ�J\'�t3�x\'\'�V���[�5.��KMv�v���k��Z�VF��CYf�#9jwoK�I�N�j!I���GQ\\�~�f�rBk\"�R�N��������k=Hu+��#���*[uQ��w;�k<�<���Tl���R~C�%�wZɺ���ԓ^}�k\"��\0�ɭ�&�����\"��E�9J�qxđ�\nb6Asɭb����\r���=��z&�\0���P�5b&r�k4�ي)+�b�`g�{z��k	�����!�M�Z�I��ҵ��V(����+,,s�w�a����1�֬Z�r7`�Pb|�?\n�-\'c��\'siq�#8j�w�1ʩ�v���Y�$���Һ�s6��Fb�y<8����q��x�kl�Kp���Cq�I.{��2OVȔ4��?X���ܑ��\n�mD����\r{f�n��C��+�5�ڦ8ۇ5�E��=����8�[H��=\rBNj嵱(XEuE�s�]�B�՞��ۢ=�,�\03.��9�9�����?�f�����do	2�^x��ȯ\"�o.�땖epzvoc^�����qIm�X=͜�\0���>����{VmIkg�������GĚt�Jڤ�3��\\=�G��+�|\r�M2�D�D7�7js������pϭr_�!�W�5�ؗ�8b��\'Fy�$pG}3����\Z��ku�\"�|q�����g)s|VB�wK��i��xB���CVU�#T6���7��u�*���VI�ŭ$A+��q���\n�=��ٚG���T�&\'�s�Z���S�^�O.zUyFs��o��J�Y���^��P�\\���.?��7/R��VG;/\nv��ڨ�HS���K�h7r9���i��kK�+&\rn�9����|��[oZ���	89>�[�\r7�f`qK��jDl��\\��c�X�Q0�ě�n?SU&��9��z��K��p��<��7\0�O5�u;�g�?\Z��|?o�(�$�\03Y�:,*��R���qU��GCǯ`��E��c�)�a]YJ�)��-��{|�T,N#\0��A��3\'�+56�Hq�fxIV�D�ԓ�\0\n�qr�ۘI��u�X�6i��^AsYg7S�ض�Mzp��f�:�t�72|�:V��Y\\$���P�#t�������\'i����rH�r��5[�ȺwL���\r���(#`�Q��0\0��f\0�Ĩ����{�V1��S�_d��Cc��R,p�F`�\r�\'?N������-	L{�(�+��:_ڵk	�Y��¡r	�_��_�^��I��$��n>��b�����;ӧswN�\\cj�ߗ�hA	8�ˊ��B.\0�=��\'���#ec�M�U ����qS�r;��iŏ��B}���H�=k��U;�������Q��W�r\Z��`v�	�;י^V��h�Mhs��FU��8w5�����Q|�#����Τ\ZGm�ҥ�|;>���@8.G?��)%צ�4��-���Q�/��^G�Z�l�8�I9\n�\0���3�+���3&1{�-��[wV��[��@�S]��7y=O:x��dy]τ �V�C\r��W!�x~d�\Z�>�W���Q�N����:W�k7,�9����B0v�wa��vyO���<n�מj�l2q�W���`$�2d��y��g�2�3ڰ����;���jW���)57W�[뚟X��`Xd�?Z�����5���rm�v�?���@�m��]�r�� w�5��Z�G�%\Z���P�H�\0�5�ި��Ϣ�u1��u��ze���ڼ�C�đ#,�En��e��!��`㺐m��Ax�\\�&�,�z�z�҆8=k����쓃ұt�\"ZGFt�Ї��3�Z�V�#���\Z��Bg�z߷�U���޳�Ilb��{�w�g�r���{�0Q��� �\"�6�gP����w��\'ۨ�ڲХQ�dy��f�(d\\H�&���B��z�`\n�Q�#=k��f4~��T��;�qŹw�\\��l�J�צp+���l5kO�=!�m@�[��Y�z�|��Z�vN����f,	�ֺ�,�K��e���[�4�r��]a�݁�U%�;�ZF�H朔U������gH[��Ƥo�n�}�#���Z-V�s�e��\\�֬$+��R�G;Td��x�z��)Y�RF0*خ�qZ�@�;x5JhX��*ڠ���sp�1Y�9�_ZӖ\0I��%�|�G�\r�K�B.䍷+\Z�k��	g�g�R� z�G\\�5�,ݬc͹�.�Py������\0+dVm��W\'�\0�W-��dq����یM�w�0=�o�4D:�ު[�㞕��\Z=��8���!���+����&8�֓��nW!�k�B4h$	�A�x����_��B�R}1]TU�pTI-4��\rɫvs���5�c�4��\Z�Z�3��Ѽ?�i����\"��	+g�>��ۓ�ͻ>b�c̍w����xoR�I�I{�`Y��_C�WY���ݾ�5Λ>V8Y�����ӯ�G$��1O����>ִVG��f1g&ۅB1�s�?�k���~�\r�ɤ�\00Pp��ǧ�~y�\r�֙�9�I\rˍ�;G����\0��X���4�T�yV\\��3�qXʥ�%��ed��9?��sb\0%����|�2)b�bPj�y�ck�Т�В�\0���[Z|�Ulm����h1��G��[a��>T�m�`A�����=�+V��vX��+yI�(\\�钽�`�wi8�5��	�ZgX�Ҡ`I$���S�2�Ц��zUVLZ�k�\0*��~`X���J��̃,:�z�$`g\"�p@;��T�������!\'ͱ�<9$��d�����e���0j[46�v1\Z\"��T+f�\ZE#�V�A��硨�`Dʧ�:��^�{�����n�������v^3��\r�N�+�v\0�Ͱ��C�{ק���n�M��8`�v���\"��ۜ�q�J���ZF�C�\'9p9�cQ��\r�ٺ�OG�.����ϐ(���|!�6�*\"G�	��7@;ן[�]�P2=k�~�c��gr^y�\0|��lP�gb�V=��z�M�-bh�2�08�~��/^~��-Q�?졡�=�� fW;#\'����?��5�~X��^KW�����F=�1�>�<``�ޣ(qҤ�{�DV�+�V�Ij��\0y>��ːӵe��\n���T�b������J��W}r�Y��t\Z���s�8�7To7y��=y%v�z�v�yJ���W[YF2	稯G�ޒn�$��LS���\'����D�G�Ga��S��F�FB/cU��3�Bq5l�b�!H�F�������mj���?�kP&��v�n�R����QCz��a+GC˄�z�}�_�y#�P�bd��?�J��\0_�!�Π���]׏o�%���q��?��׋k:�-�Ҵcч8�|�xsM�}&�.T�Ռ_�H��Ƀ�p9�0�.�\Z�ᔎ��?�<��⁕�$^q���!u`Xg���\nT.���TV�r=_V\r+�zq��5wx�\Z�_js�}���vԋ�	 W�\Z:hss��3[�AI�+F��7C\\�\\\0y�+K�\0��oZ>M��v�Q���\0�\Z.v㰯B����i;��^�����-\Z�\0�@C�G�Rw7挵���Y�~c����;�WB� +̬nw�A���рp����k+F[0�V=oO��JGJ���,B�\n�t�En=0k��#rrq\\�-�q�;3b�Nq�v��x.LQ��;��]5��ȋ��j���>lv�gN�\n�;\\�}n�e���y��J��{��k�p��h�w*@⼃�P4I88v�ڹn��zߺ�<���5�$\\M��w`�]\'�nȕ�9��勒�\n�/�.��W�E+�=k\Z�|tJ�}u���.�-�&�TO>�Z	=�BCU$$�����$���gH�khSKc�J�M���?5_��I�8\\��z�\r���ܟZN�j�s+�oB�݁�R�o$qYqއ�\n*a|��������+�_1Em폥R���I�ڨ�z~f-�������>�0�&�ί�r{�ʶ�nSYϨ��\r�z�S_D3�����TY��YՃ`��iufM��f�\'H��\"�\"�V1�  ��jI\n��ʏE&��O[��~x�\\ӹ����;�m�;xo�����A��;�L�UM�n@5��z�g*���:�)g�ⵠ�m;y�^=f�|f�,��9\"�n�_��-b�ތ��uk�g���Z�?��M��v-8�����-�Kl�6�q^[�J�:�7J����>���~�g5F���\"�ĳ\r܊��\0�VGDx���\095������w���K�D�\0s��{��Ԯ�=�\"���k���@�Ļ�����}��o���G�� ��pA��n#�<�-�0㿿n�>�i���c<�o,q���#%pNz���Һ;��v�[��\\��FdY��i�s�c�}����ܓ���I8�\\��xf��E9�$a�`~��W]mhȠ<�F�+�Z%ž��{��&1(Y\0��q]U�_\'&��R�S��=��ȡ!N~�>H�JH�=*��G(Qs��˹n�ߜ�A]I�Z3�SӭI v�׌6��J��ٍt�-��sZ��is�_��t7ΑC#�Aҹ	\\���׵(r�q%��fQ�ӊ��X�ҧ�y��TlsZ�����zUfV\0�zխ�\'⢔��w��Z\n/R�88��)��i�	5Y��J�z���#�<�?#xa�MiJ��5v��3�֟/+����F�-��=���\nzWC{����s��$u��kB\"����v��TWd���4�-��MGs��W=�k�\r�ҕ4���r��[yk���38-ɮ�k2!v�ֹi�arT��޺��2]�^�ݴsޢ�p����_Gx7KhvnD%�v���Fy�>����֬�v;����s�|�kso�<}��-�� �Go�\0_|���\Z҇5E����u���W�a��rW?�3���\0��^��h=��ZXҼ=g\0\0m�\nݮ\nI���˫.i�1�p3�M�t�S��~+|fԴ�lxK�\Zz��$|	�o�6���=�۷z�\\ݑ��Evz���6�;�2D�址\0~5�^-����=�]���O�Di؜��~�ָؿf��B���^_3��b�!\"Ns���A�\\�����\rƾN�mr�����=r~��O�Iӧ5Q���	֕:p���>��%���v\Z��x3\\�Õ�����g���W-�?��)v}�]����Iu��s�h��_d��i�Df;[ �ʱ�ʲuiݓc�8��M�F	���_��\Z�IJ��{ٯ���v?���_3S�t��b�����Z���|q��)���V�\n��.����d���^E�۳��4Nx=��\"��$R�&W����#ǵo���X��ĩ��\0_%���\\��f�_�MO⮠��\'���\'��ڻ�\0�?�\n�M�n�J�,��[�=?埞|Y���,�T�\\��3\"�g�ӟ�6�\0X����|��NT��Z_u̟~˺~�+5��}B�����?���\0�Z�[��i#0�f���G����W��)�\"��R�x�ڥ�����s�\0�ϐ�������RH��\'�%��Ϯ�;�^M�dV�A>X��z$l^�B!��r����]�t���9�lq�\0	E�C�4@�\0*���.%�fy˝�eo�>��U��$g�dl�@�Q�z�{^�g���6$E�ky��Y��R�T�|\'pX%���<��e�hs�\0}��6��>�j�,��=�\0�w��X�&�0���JI�\\�3x8�E\'��7�u��W�Ά�O_�^�6?�̞������5H02wY�(�T\Z�]*Y��5B�T���֫���z�վ\0��f���9�j�~��V׌����9�o��LVk���\0�ٌ�M��/��L�؂��\'�L�3�������X��uH��j�f�cq�q����Mo���+����{(\\��t��?��<�\0��\'�&���zuiǚɯ����M�8���+��T��^��;��|�^3�~�~��i<+�xn�����Y��z�׌翹��K�O����6��x����bv\\�0}�Ӹ9�\Z2�����x��_O_���3ECq\Z���ڻ��ON�_5iu�~�ƞ\nԴ�O�Z�]	�e=zg�y��K{��߉~��6��[_H�a� >�y��\Z�T\'ɭ�v��W�#WP��pj��*�(?�\'�V�#r��0{V��|�J ����e�Qi�}F���3�M��o�<�G�x����rO ��{��~-��J��_>�A\"�	^L�\0����y5i�Tv=������R�N�Wp��k��t�m��㟥qZ����y�z�wSJ�Vq];��iX�޳�gڇ�Sne>k�\rS�l�s����]Цy��{����u�Ru��{T �0��[IN2خ�R���b��V+Ԃ<���묇f�N*8�cE&W,=0�\n��Rl_��O�U8��m)k���棫O�{\r>{��\0*�g�ָ�u�9��-�m���I=�+�}a�H�C��oO�W�\\���ԟ�R�O�ZNڴ����;���POY6�}\0���*��~�;����GS�5���Z׋,uI�.�kL�C�%��^{�;�^�ϙgy��b��#��8Iˢ9=��]�\0]�tӾ!E�K#�k��rq�4`��ێj\rkǯ�D�h0)PlD��5�~k��:t�Ml�eP[��i**J��\\j��׿S�V�-ʑRڴXg��\\����n|�0�A�U���O�1{��>ϕX�5%�;�q;{Ԑ�[λZ5�:�ֱ��Q�z��e�����kB].k��Zm�\"��&$�}�\Zѷ�ݍ�N�D!^ʤ��4��V���;�Μ�{��0�8ű��5�tۅu�F�Z W�s�Z�#�	�����M&�;�j�&�H�+�8�I\'�ç�Xzo���o�Aj@��ٱ�- ������<��&]bu�\0k��s��s���P?��z�����f��>�g_�L.��쑰b`$���?7�����^��jf/�SY���]�ʥ�@�G�{�#?��v�]̫,1�v�뜚��!|�<c�\\�4�/�Ki*\r�\'�8�0��+��ц�Y?����K��^Ӯ�V��[5D���z~�q]���g���ƎI���x`�x�:��/�x�!,�K�E��Ls��3�?Sߦ}_����d\n��Ғ�{�M��\"8�@�4�ktǥ[�!��[{`���Y�.��7��\'ozԳ�9��})���9�sO���f��ӱ-�b͍��>s�T�}+b�F#�+�����.>�=*��Dz�����NӜ��X;��;�˹���>p	��UJp���M��Ҙ����T���ژb�<֞�B��Ef\\1�J�рX\n�$[	��Q?�J)�d��/�x��n9=}������z���tȭb�)�����f,[��Cf���sS��y�$dS5dʎ�<�ɺ�9�E��_z�o	��G5�_`��5��)R����ح6<J�ld�����Wl�늷k2����v�<��z���^���w9;�Wh4B+�����<\Z�i좷�Y�`�*d�`S�+�~���玼?�5Y������+؜���=k�3�ݘ{7����O3l$q_W~�\Z,\Z����r����r�q�z�s�^�M�]��^��Z��]2UH�\'1�3����2>�����;\r����zv�.������\ZY\n�b�[�v��=�n9�t=�)8�_��u5�s�\0�����i�m�$A@��8ּ�⧋��\0�>�UҬ��`�_�[��\"���T|�L~}+�?��Ǌ&ߢ�+{@2ɹ}�=q�#�����C\n��$�wc�$ےO�>���W��KuB����+��C�xt�G�ǻP�Qu{p�f~Bg�����>?���4}j�����0Z)\\嶝�=2x�N3��O�i�$�o�p����D�\0w��۱��(����>�ξ��*r2)i�d��dq�:���b8�c�\0,�����EtMi�Ď?\Z��jn��s��q��ec��ģMG���������\\�����d��T��[+� N��؟��� ��&����6�ɭ9����J�k%-�b�*N�ֽ�>X���)�!y�,��ͤݟ&K�t�w7�����[k��4�-4��;�-��<`e��w���=��F��������V�a^�m&����}&i�_	2Td�����IS�I\n剓旽�_��=�f�i�����Y�����?�����o���:��eŬ�����) �W>�6Gל澯�>\"躍������t���x\r�c_\n�V�>��/\Z��ّ��K�tg_ݣ�#���\0$�템*ɩ6pա:o�ɴq?\Zt\Z^��$M�#���a��ǹ��\0��h���\"�+��q,���s��l{UV��HYz�C��liN��-ʑ�(ذ�^��H:�w�A�꣎�?�����nI�9�?��\'��%�|�2�`S��\\U$��;)AE����.(�D�dEm�pT����Q��!��������+!=	�U�đϑ\"�`rH�Wi�����n\n�cm�C{��1�tz�����k���aeb��ZA���8���{��?��E�C{jU��#O�\\���g�ڥ�i��(�\'U��L��z�g1Ȧ6������6Ѭ��V �q���\09�F� �\\�R0Eeu�5l�Oc�4+�y��Ayo�4s(pG�\\g��\0e\nx�vռ9$��27����_�����}Mu�fc!*���W��n���;�V��$��O.�)�/#��\0g��:Ρ�j���-��4Q��8K�:$�Ӝz~8�WЖ��@�OC_��\Z�����\Z�n[�[<���XK�J��[�^�c8\0��a����� ���Szސ\\�8��^�p���ZI���|��\'�m�_�?�_#�����.�#��r0x���Ń��F8S�/��~�Z��ǩ��$�����.c����8����q}?��m����<��6�N������W��I��E[�:���Z[�~)�KȪ@Px�R���a��VR�V���1پ6����PƩ�/L{�[�zѬ�UޱHb�5�<1�?��)�Qj�~����ۉ��%��|>�ǆ.<7�x�˸���:v��I;/�u�#BV��Abz�44��M&鯬Y�w#�q���\0֬\r���)w�4�41Hw*3p̠�\'$zV�����/�������P�qwOM��󵟓f��,��v�n_�1����#��[<�Vemi�ˡ����9�+�d���l��¯jS��\0�d��i�GfRO�5�liϧ��X��|�d\n������.�K��1�������o����R�R1��ֺ����q\Z^��r+�&�=�����ѿ.��ڴ5o��j�+7W/�D��\\(\0c�ϦI�3U��G�W�y5��]�gڷO[����נ˫qn0�ҡ��ss��W\n�.����O��Q�o6h�Q�\Z�����;i��c�\0B��X-�)���kK��~��\0��Q�̒ᙤ,I��r|�gM:*1�g-a�0=k��X���j��K\'�]ңu�����*��t�s����kǨl�$������C��~F��;D���\0�w��\0�;_k�-��E-���D��C���}FA��|=�f|��G���If3c9���kÿg?��\n���b���Lz�[��o+ǵNr~Rw�}x�\\���Z��G�DGn-��G�߭�Ȣ�4�\Zq����bK�l��O�M\Za�s�q�\'��j�����&ϱ|Mv��\\�:|s�\'ed]�\0�=��B�a��͂�7�H�\0��V��L�\"D�t�����-���]��xo\n\n�3����h��]5\n��O���ڿI}[�r���9�j�W��v2�dWV`;68��J��@��&�T�����ip�	e`��l��]<\r�1xgEK���mmc��-�������������\0	ޫ-��ui3+yI>n�{�\01�����%xt��l/g)B<��y��\0�>�����-z�8%��N��\02��\'\0��9#�w�RGwo��	a�����\"�\'�\Z��ꚾ�a��wQ�jvMm�e�� `\03��2@o��\nXKe��&��v\\Air���UR�cd�&jTݤ�nYۂG���2�ʨ�Y�6��Ҷ�!�o|t�h�a��7G;�}�r�%����9溉�� }k���w�88��VOK���$���Spzե���\0�бn�BO�T���\'�m$���rբ�c�j�����Wd7e�GnGN)�_��kA��4E�B��gΞ�i��Z�제kP�1�\'���,��p:�l�����>��9��mA�\'�{WE��B@�ڹ{�\r���=o�*;��+�����X7��T�V��d7�\0\rb��y$p+;h8�KTx5�s��Z���?�d[gw�kRظn\Z��}%�gy�N�^���6x�Ki���7B������~�i�?��\"�lT�#�����6��@�s��>�\0�k��^$ռ\r�I�Y�Y��eD�\\�>��?׊�IB�\Z=a�סȝ�w�_�.��������g�OAvCm_5\\���=A��k�{���k:�t��2�{K���.�|W �]Â1�����C>�uw}wq��z�f3d�:v^��\0B��+�xGF���l��p3_Q,T�Ӆ8���}�\n�\\)J�mj���k�h�O���_����pG}t����H\'������C��cgk���a4�K`c<\n�&HRT*�O�Rk&�����#Q����5��s���X�7���xs�~�5��nlV�	6L�awtӶ;��?�j�z�NYg��q����|1yG߶�f�0\Z�O���M��1廬��B������$�M���_gٿ��Ǡ�@9QPp�Ws�Ȥ�X�>�2��֑Q*��7��H����a��*k�n�F0O��Ai;F��1��w��sQ5Q�����~a�v\"�X�-���2p23����O>?-������\'D�A#��Wz��:��JW�����Q]n᭦&:7�y\'�>���9>�jɉ#�@`�������5�`�ixЩ�Z���r�y���ï�}k�U���TjEs���|O�GM�y\ZE.A?�7rA���k���Mcl�ę�>��+��s�16��w��pH8ϧ��\\���X���\'lz���5�S^�z�Ҷ����X|�+\0=1S�C\rҽV��2s����g]�n%A�X��~���r�Fױ�)�)bO#�W��3�S�Eu��, �I����c�z^�j��4�vg+a�����s�5�~��Јa>X=Tt?�aZ7��]��L�[o�~\\��Jr��͝�N�D���(\'+���Da�[�T1�l���a�~l��W�h��`��\\��롅Mz�߄��`�\'��}�;?_�6<���Ҵv�v��`�K2��2I+�|Y�]kᯄ��]χ�]��Fssg!_fpA pFFG���O���k�ھ�<�#�����?�씂U��J��|��k��`�8�Y-<��\0�<z�RTں�\0���y���T�|Y���!��Y�j�orr��/BT��G���P^Ecsk�8���\0c��^+�[c���:�ٷZ�]���ќ��U�(�\r��Q#<6��b:\0��Zc�rBKk���EF������ɯ��ǎ�A區8#p8���\0?Ҿm��x�l� -�|�O�\0�����K��	 !OP�y�+ļS�Qy�$��O�_5^r�R��*<��d����!ۢ_H@�y�����M>��C\r���A�#�J���n|��ďּ�{���Y��dm���fIi!b`�{i��x���fhP����u���ax�¯�y4��p�rnm�r��� ���<�)�\"���6�Bɱӱ��Q���R�-ĩw�Wq.b���z��ֽJNM���\0V�O���	E���\0��l\\G4~bc���\ZA��g5�j��A�ܤse�r�U�C�Vń�5���C�=��\\U����z������+?�=C��[�X���Y�OsIG�T\\U�Dij��*�i�Ω��iVM�g��fF\\}�U(Ĩ���o�@bjo��J��(�U��$�ҵ�m!v9SYJnƑ�Z�9vҡ-��Of-0v�vi���SE��`�\rs��u:Ti���b�Y��>�~�H$�W@bHx��)e\'#�����ǑXğKTSީ%����b�|�p\0�hyb+H��a���X��c+N&\n1Y1���1Vl���P��+�F�=��q�\n�S�|W�!��6��22�ӿ>��_��mB_;�R�w�;<9xt��n��\r�����\0?���\0�v��?j�#yj� �%\"������*��sw:�8���4�A�J�\0s�Zγ�A7��t��<p�摐~f�n�9�}� ���I��~s����kw�7�8u8�C`�\ZӲ�4�(�YivV��w$\n	��V?�tu���\n45]�a��VQ�@R�O�u�\0r�WEEhGM��_��SH�>_�9�U0�@�H��\'�U���Z�P�\'�s(��k�4��|����S]��Ke�`s܌qU\'?)���	\\��.��g���``� Q>n2s޵���5�(�4�Fz�Y�X�\"���Bl��3L#�5(\\s���>\\\Z����dG� �SB\0NO�N6�k��7tg�����O��j� �֚qGA�Z�*��ӿzX��ʕ��RZ��-!�z��V;�\ZQ�FI��W�1c�޹�I��g�t׼���\0��]L��R��Tn��0.d9>��|����G u�k����J�j�_{#j7�{֬�\0��i(8\0�V��H�qg��z���R1n=;�\0��ҽ��O���Ƒ�D\"#0�<�?��\0�+���8ݳ)\">�����Je�- M���I\'5Tp��N2��R��E���J7>*��Tn�nV3�IQ��;���>1�q(�U���ǧW�|\r.���vG_�?���=�>���%*�]]rR�\Z���\0�bZ(���9O�\Z?�߁u�U\\��c��5�����~�n�?��\Z�h�C�������ܤ�Q��^�VFѼK�i�;����p��_Ԟ��>���%����N��gO���}x�Pzq\\� ��|�`�l�j�qv��d�=�k�e����Vs|����P���,�G1��D�}��ϵ#�c��ՋD1����F���x�6g�=�Y���}��P�#�ø�>O]��f�t\'����Q&�]xO�X���<e��y`y�j������So�X7�J�L/?�Ю9�czm�Z�V�����\"�{�V$���Y�t<n|�����D��`3��p��;���f֨�u	唹��G��?z�ʜ��w���#��ްo4��IǶj�����+����DĶEdM��Ew�\ZZ\0�ҳ�NP��ҵ�*�IS��8�쭁���%���{⺫�-��@`U-.ŵFe�w����m�\r�(�^�%����Fq��\0�?½k��NT�*\'�Ɲ�?�)���Mz����:�;���55\'w�qN���S��0�F=Rzf�6���6��RG]�P�s�@#�tzO�%})�\ZX[��%�1]�d/u[d��Y��Ȭ�&�S�SVrl���-�w�{-]�M:-�[�:3(�5���*G����S�~�>Ү�&M�D������^�2�\'|��\0�������}��\rצ=��?hMJ/|,�����UԐYA� \r$ҝ��~O��_OI��z�����aeJj\nҩ��e�i��z�w<��vԅͧ��Q,3o�>�s5��snʙ#�9aϥh�E���X\\�zJ�a�\0�n���^��\0:��|�\0\n��lX���`Ti��Ԗ\'���?i��İ$������ڎu��E����-:t��^�i/���V�����E_�w�>զ�y���z�\"��\r%��n��{7��\0Z�_Ǻ(��T�Ur�}x��^o5�����ǡ亻��Z��tWr:�W��j`W� ����0���S��KEgG���v���,\'��{ֵ�{%��U5�Ut�c�$Cx�p:�һ�K�cŭb���٦�bԢ�b�x�JW��$���\0���j5�vֶ�p��<D��p�k=�q�*�Q�v�B�T.�+Kn�+��*�ۃ�7�1Z�\Z�q�a���JV�<����;��U�b�I�S�=�ƭ�l+�Vɮ]L�l�n����ZV�	T��Va��|��cn�줔t��oy��y�c�ݹ��E�U�\"`��,���E��	+��3Uf���\Z��k�y���v�T�%�1����/u�zl����~�ua*�1��Tf2�^µ��Iqw�*��@a�ZVQnO^�P!Vy�d�qM;�K�[\Z֑n@�|Ď��_h��7����EF3ЂG�־9�b�����������x~�Y�3\Z�ݘ\0�q��?�uҒI�yX��MC�V�	b�Z��T�j�qtPL����O�Z�~�m?����Z�����\0==k��s���ھ���6�����\0x(���\0�\0<�`��{hr�;��x����?�A�}Ud�o�i�iQ89���O�]�.W���P��z��e\nn<A�\\^�Py]�W9�����I���*�R���f�n�5�����-ZF�>��l`f\'9�gZ¡H���\"�\'q�޳����a��(�mR��ֲ98 `V��f��5��wFY�3�oz�+�A��,��\'�!Q�����H<�(���~ZQV��\0��.1�w���3�q�\"�����3V\0�l�sH#Ի쌔Y�(�ia�\r���ҜFZ�i������$��V���|��V���kZ��*:c\0V%�p�Lv�]�2���+�������t3�1#��k��0ar���֕�\"�Z�q�Ψ�I氮�ߓ����̉#Xr��֦.ɓ�3���n�[6#��[=����&�z�ҥ�w��Ŧ�syo-Y\0��Z͵��;�8#�=��6O_³��f�J��\n��q����F���>����&��Z��R�;h�s듚�*�3�_)��P�/uk���\0\0`rk�hd+_�p���G~-;�y\"��*Z�N�����x7����{�E�7��v�l�ul6^��㞙?7���y������i�x�5%,.U.0?��g��z�����~\'N\Zj5�����[��q\nH�*�cO�Gᾼ����y�d��al�+�O�]c>+�����pp����).3��rr\\�H�;r~��߿��\Z�50G��Ǌ������SV֮��de�q���\0�MA��k���P�\\3H���$u����c��v�NW�{*�Ւ4��J3�c9v=Fj�����@#�#�f���3d�u�V�yrW<�T\'{�J�H}���{c��ƾgd�}�y�9�%�uݿ׃�C��-;;=��ܗ9��Mܻ�t\0c�ԋu��s�\Z�q��94�-Mi;+.�u�df���U	q;�{��&e`T����s7\0\'J�R_q�m�>�|:C�.nb}:WW��V\"��͵yj�4���@�ZBrĜcڽ�:Ri.&	�B6�oO��`����6��d�F;q\nĹ���xSAe��]�@Ƿ�&�f����*��y�]��XA(��0+z4����%R���!@2����;,�����[\nT��k��?��w�\nci+2�����z.��G,+Y5.��{��4_0oּkƶ��>4�\n��/�)����L�����2p9��>��j6�����]����&����;�x\0{�#�C���/��^/+\\�fk����\r�.?�\n�c�=z���(7/���\0�aM���7��z���_�[�q�\0�D%����m�N��t�_��\0�0�:���2����e\0d��Yq�x�ŷ7302C�r3�����4M�J��c*2{��=��Y���bjC\rF4!������4dkQ�D`�0�}J���&�Y�}���qۚ���(��s��z���J\"5�mv���j�MS���6��>\\����+���oj�.gk�<b����yv�+���\\�Pzr�s��=�OP��=�>�<D�y�o�ݫ5�����)�c̜9QK�֗6��x�`eI88�1�V�!��^Ց�ZM�k\r1�\0S6#q������{@73����9�I.f��d�S䝴��_c�V�\"c��ֳm/C�3V�*����G�y[��TL7�N���Mج��W!�x9��tm��\"�	v�\0�i����4I�¯[&���@�(�ϵXT#��TN*�-6�1,�s��SJrEJ��qM\0�\'95�k-K��p�RO�\\ԅ�.,O$� �ӊ����V���Y��*v��R�Dy��h��ܚ֚��nOn��Z�nk��\0g�\0�������!��o(���6z��\r���`��?d�A4߇��q`S�drX@�Gֻ(���dy��h��{���#��*���eZr2��׿�Y�\0��_��\0/�߳W�\n�B��-+`�ע���=MSźn���;�}ö?�v��+ͷ������?i��\0i���yҙ�<!�I�\0��{�I�#�Wi�u��pxsI��8�7\n�ѫ��������}1��%tOX�ۅ�)y�O>��[[���YV!Q�%�@\n�����=�&��9��\ZVQl�?�k�<�B���>�_L�����֖�B��8�jqM-J[׷F�|�����BF��1c�\'�k���o0n�0p+����51Z�+!iݖ�N\n9�f>�0���6��EE�#l\0�Ӷd�\rǭ(\n�4��v�J���i!�.\n�~�\0JL�҄M��{I�MZ�Bg��q��[��+�a���~�n[3~���ː�9��De���W2������M܄nm�zg�pޕ�;�\Z��_��˺�Ě��C�a[Wm��=	�\rNE!�N:T���7�p\Z�+��ay��n~j��;,��\\���r*��ť���Iv�:�ͣeFx�cB�NI���m\\�t�=Z0{��͌��VO��3O;)Q;9�S�9���;)�*�>�e���5��K�������h�#�J���r~��?Z���E|��%\\�:���F�U}A ���d2��|5$�F���cD6\"�������VPaq]g�Յ�_�n�kPҧP�s �c���\'4��3ڶ�Q+�O����P�?�f����um;�pn��u�R8�}%����\\�Y-���x �+����KH��o˻����m�[�!�������)�4,�Y���c���n|���N��ԏ���^i���qj���]t�\0�>��>j8�q�ͳ�g�޼�A���m�����ep�<:�-��Ӄ�}��g��������d�����\0�,��5�U���ڔ7O��ÿ�9gkw�N��t�Uԁ�j믞b>Y�#�F+���i�2k��V��ª��g/vN=g����V���[����v��{RP�vKCH5Qz\n�ͼ��}*��_)\"�y�BZ�!.�`�Y��n�d��u>W�\"#�	nO�?�\\��ys��[��\"���-�J�������:B��f9���2�N;�G9�uZ>������d�=����r������RCҶ����!C��+27Ͳ�\Z�G\\�z��$wr��|���]�-�����q�2;.vs�<�����#��:���9-��/�#�h˭i�Lfk��-ui�\n?S^��MI����V�+�����H��q^[��������>�~�4�ZO~�t�r=Gr3�|H��1����Hu�z�잙���ڍ�I����)\'%��O�I�9#���8|9k��;�L�:���]��>]�8��?3`��V��TZ[T�$`*�1�x#AM;J�[kh�l�ǖf=�<�\\�ݙ�u�Wt1��?���\0??;C�_��o#��?3~�H��U?�S��c�»�dH�V#����~�l�6����U	;K!;��\np�P����r{5�Sc�Y�;�q���,RX�f0]�����Ű�7À{W�x���`�n2}3^>.nrס�88r�I?����Ɔ8��\\��=�+�5kr<��2N+ڼmd�����Ҽ�\\���`�U��m��{$�yޡ��rkO�����k��-��cҹ۫p$8����VVd�x\'���EW�o;�pHۊõ_-�n�δ��6���N��$�g��y4y���/����:�T���q����8�On����+����r�����V�^9�-B��6ڔx��m��(�㊵�g�<�_:_#��Y�!�9�<���[�~\Z�wGw�[X���6�H�g���{�&�����h�K\'���㖀%ʃ��>������xCY_��\03Ϛ\"��jh-�\'�5�����`���f����!G�D~�������m���2O�B���\0�4u�?��z?�9>`H8�a��J�{WX�\n��a%�%�Þ\"lΟ��H3|P���$�h͑���v��-%���\0��af�c�դB�+���~	�,n~)B�x�\0E������5�i�3x��Z����k�_�\'��t��fR��~����K\Ztw6�Yd�5��\r�����	l�m<�_\\���p(����:�������1��D�&Q�ϨJ�>�A���W\nkV5�R�0���� ����fEM;K�/��f���|��w�\0#>���\r�]�+-ݵ��h^MFuV�3�=�>m���F�#H5�7ö�\0d�-F���Kg۞߇<��\0�u���x��:��ρ�iH�񳁏��yaM�u���u�s$�W����!�H|Y�T�%��N���9BI�������uz�L�m��4�4�c��8��`w\'�%��w��>д,�Q8.7��?S���M�q+t��jE�Ɏ4���\0M�oı���=��|q�\\kl���e�y�p��{q�N��������9cA[Hcu�����ͱ�(8$�&�_�GJ�_%�\'y{�\'X�s�c��\'96�<�M���c�]8���&\0��+���-ӊ�\"��\'���&@�\\{���I_5�)�������� �sֳ�g(���Q�U˹6�8��\\��s��V� zsU�����S5Ďz���rv�ޜoJ�I݊9m����im�ƤB;�El&?����r�EnB�H�@t�Q�@9SڢE�����8��>����W[��89Q׽KkbT��P��u=kF�D1������?n�&�\nFp=�.i2��3�1���ʖ�����*)O*� }���ɟ�\0�֬�JHߏj˹�j�E���k��ڍ�H��n�^���7*��sֹ�뢀�1�\ZW��q�.�-�Ø�Z�QmQܰ����]�A\r��I�1�Gz��ƞ9{[���o0��{W,gi5�y�:��*ո(�j���6ᔐG��w(��:�\Zc�u\'�+;E�7)�&T۞�\"�}��Ř?��l�s�ڄ�FiJ���*�`a!�]�����W�vo���	����k3Oa`Q�%�!��23�ξ��n��:�C(5��56����)�����c�#��U��r9�ߕ$sZE�Y�Ms�Lfv��@�\0{zI&\'p}kE2X��c��/�Nj�W�FI<�6Q�9xÞ,��cD�Ԕ�@�GБ�xg��d�_�5Ε>����$>�>�2rp=�~��\0y����|����;�B�ܤ}�X9�I��];Z��|�?���d�h_/g�:A�����-QI}�Ñ�־�k�LR�o��W�Z�~[20$\0H�sWЫ�P��+������R_}��\Z�\0\Z�i�G�\0o�By�S������o�k����2��kW=|����wv?1 �{��$�{[�T����*~�����%��;ɯF��C�����#�>!�lr>͟�<Ա|Z�i:o��wr3j���F��-�VT=�P����[yC��2������I�~D<<�������7ዝ��k��\0ھ���a����̣G6�#��.�]�����-i���b���p��}�.x!\0�W�(u��	��MJnަ|_\Z�!\'��$����n<T���CXȲ🈯;\"��멶�)h�f9\n3ZK$q�,�ǰM�0���C�R����\0�)�9���0Ҿ\Z>�ѯ�[߰LU�/\Z�f�f	m�h:R�{)휟_n+���ٮ	gb�9]�V��߼���1�r�Xӏ����T��;����w9�7��ŏ�k���\r�ziH��x�\n=����=��?f?$�w�\\j\Z��q�\\F�Q���z}Nz?�)���rI�8��M��X�]�q���������֞�;�g����~�G�iv�J�0>�}kv��R���RO95���w\'vy���*�,LL�y�X�\Z`�F �R+N��\0xG���sM)3�p��R{�F��P��HЕP���Ҩ�ީ�0#E��`xe�V��+�ӝ���@�T|�sڼ�^Q2�+��\Z�oY& �wJ�/儛�#�J�|L��Տ��YA�\r5Q爨�~d����$R1�^������p	��׋x�}�)^X�t�wc��RW{�i�}k�����:W]tL�����ܹbz��+���in�(C����6휃ږ ���<>GO�Z�4d��q/���|\Zϑ7}*�ϱH\'�j�eO9�WW%�k���_z�\n(g������9�H�\\g��g�F*j�ȵ+�2O$x�cK�z���������1�4�Щ��*\\��e*0j����MB��yP����,�RJ�s����d!s��#��B�J�Q��	d\03q�\n�\'b��*2\Z�[�Y0G�\0^�����c�<vQ���T�1�sڜ�p�G-��n��(rw�Z���[x1�z/5}~e�A��>�\rV�dE��C�<�S&�*���<�/9oǭP����\n�7kC)A��Q���V�) ��?������..�ĭi�E�w�r@�����Y��T�auY1���}Y�6�ZO���ݗ[�޲�9c�_�;�Z1�<,C��?Ꮲb��	*2s޺=:!�c���^b��K6�;�^�����?��P���7��.������.Y��j7f��F���\\���|d�x$O��!�bL��f���٢��󩂕�EE��c����F1��۟���m�[��}x�U��l$kY��iԶ����MpI��`q�4�\0=UK3��Y���$��fM��(8����<g5�Y,5�p��:iMn��m��}&�f���@��9�w>+Ӡ����va�5��:��a��\Z#��1Uu�/�Z�Ne*1��<���_�m��oc�?�dx~՗̽ ��s�����gЂ���+�?pF�x}�¯���L�D�g��Ec�;ƺ�4��Z\0J}��?��tT��u��4��G�_|w�Z���~3��o~>�.�YE^A/�\'�ڰ��ϫ˟���ePpv(U��_�d�����o$�a�\n�8�+�8�-�\\�վ>�*2쵌�i$�\\����S�Y\0ԣEA��&��k�_٧�q\'7w�%�?�)��/��Ӽ���ĶZQ�]nR�5��x���R���.��RM��\\f��O�4�L�������I�k��c�a�l�u�e�:����>\0���(���n�3�����|�w�;��eu�m��\0=w=�\\������㞕�~4����S\n�	\0��w��+:v�济�^���q�qڦVU��Z:ղ�G����m��Θ��SCN����X���%皣�;}Oa[Vs�q��UmZ�=Bс���H�Eݕ�zG��{��-�`J�lz���W؞���[H���i���gFM=u+uu�6��$����\0��_^|�ۭ�`c�������\0�rW��]�J/�\r��� \Z��Q��tc���Va�0�gts(�<��*6G=�7��C���n�\r$օ��� �G��􄀤��#��(M�\re]�\n������\0���+:�ܐ�A�\'����;�[	\0\'\'�5�\\�,�r3һ;�5u!��ޱo��d���)GC���]�,�p>��e柅ݐ{]��D���+��a�p\rbҌN�msY���3�T��wIn��_���;���� �˜�T�ކ�I5�PD�H-V�6�`ґ���5jx���<uQ�U�vV���a%˹���M\Z`ܑ�j#�mʃ���������Ug���\regܺp���iv�\"�7�������>�x� ��3�p��H��:������͞��O��tI;h�Qҵ\0����Oz�6O.��z{W�h��G�8�؀=�c^�����ѥ�x�OJ�Q�yX�:�Hʠ��)L�RҨ[\\$m��5y i�:W�M�#�qQ܁ٙ����>ǥBm�_=����� �I�)5cEzUMLj�U���ީ�<�\\�ʺ�h�妽�y�ui��,1��U��_��O���|��\"�#u$��s��q��:�֚d `��}1_#YsTrG�R�&����d�8\'��^#a����g�U�P�/�`W�j����]�q�J޼�*��S���C��d���Z�r:��FhS�\'��V>�8���r�Q�sQ}�*�s��X����������RMjq�ivt�݇�9�J�K&@9��\r�P�c���^H�e���6ٻ�֟\Z��5W��sϵ[���/��U�ɒ%*r��LJ� sB�n =jռ;���5�즵�R+Q#r1V�ӎ��5f(��Lɀ@�R�+�WH�l��*�1��8�H���6ІǜQ�Itl6�qV����W�J�8�U�I�T?�BZwvd�L��S�Ң�_>�;Rá�[F\nJ�~[�w\n���~�)�*q�*���3}��U\r��95��x\'�7�.դ����a*e���\0<v�{������Cooiek\0�qa�s�Nh��<&�M�ʻ����}Ч�������,T�ʁ�����[&x3��ܺ#������i����F>`��=���\0�9��g�[W�>�q����Ơ��9��Ӝ�$ȶ�̡F[�`�B�	67t��nw�X�rwў�{+\Zu�J����ғO��3������K���ץH��b;�nFq���Z��v%٫3�t��^����L�c�7d�Mi�������Ǫ��x���O��ۭi�5�)tF}��t�r�4�uc����V�60FIX�8 ⥁[-����q�_J����i��2Wj��a���O�ٚH�E�G&���&����m�h�J���YGM��>fW�j� �`�GJ����Ω�&qM-n-�)R��NH��0�Z�q(9��V]̘,3��C�@���B�NO�a]�g+ڵ.�J7=k�������dDU�Z��|��^=�?��@7� ���+��E����pd�־y��ח2�u$��u_\"zu:�/#���O�OZ�n%*�GJտo���5�y0,Gj�.]��=Vԅ���ܠt�;;�\"�k^�Ӻv=y\"�pA=*��I$U8�A��\"QJ������|:�𱅷��	*��6R`{_U|\"��\0�����VI$;�����+�/�r���?��By�?�}Q<o��t���<6�@�{��Jq��臻ˮ��v/�����i �I�h�}�[̜\r��oZK�A��+h�iD����a8���)��9�t���]�x�<a��\0jB<�h-r��Ul�;�iT2�ޮm[=MUd%��5\":jg�\0�ֳ�-ʠ��[rA�<U�o��$��3���G9-���sY7VVcӎ�+��C;����|��1�U\rN�>Ws�H�p%y#�3X�V���Hh�������@ݎI�+��Y��ɬg��o%�#�����0��v�ir�����# 8�<W7|K��u�}T���:nS�u/��*��ꅁ;�JI��#ӭf]?-��z%f���l�h�$�M\\���M�����W&�K�����WUb2\n�gch_�z~����w��@��}k�|\Z~�om$u-ۥ|����\0�jP���p������]�\n)N@5��c���F�;�2��#�W\Z���0g��nH�52K�}+܄�U��2����4��ɧ�9>��hKg ⬬{r\0�l����Z\"A\'ˑ��F�߻��֟�g�X���Y�*��*���<�_��@$���ӽy��w����\"��9�b+�5�J� ���KF}��n�<��Ae����?ʼ�\\��Y����?��n&p`&�=m���9>�P�^��JZ��uy���ye�\nջ�����~Q�y�����%t���Mb=��:W4��_�N��B��Xc �)5��喺\\��c�Qw�S/� ��dd$zV���6�#ڨ�@ab@�5qnډE+�li�\n�Ҷ �����ٛ���l�f횆l�Z��`�9�V�~�Th�]�rjT[��Z��	5\'ؚ8��a���#�	*�1�u$ds�jW���)-t\"D�p�����Cn�$��VFM8\'�%h��\rǎ��E=H�~\\�ޫ�|���\rnD���	���{��ݡ�9\'�Q�aH�T�[�d��c�5V���,���UT�I8��\0\'�z�)R�5u	43�o�\Z%���!�e�PHϧ8��\0>���\Z�QM�Kg|%����\0�t�\0>hbϫw?��z^��W;{V�f��(�1���[ۍ�Z�mjx]\ZAwr2rr{J�5��2��r�$kr��ˆIˁ�Ws1�Vn��SX��>[\0Oz�.�jU<�\"��bI���M�s��\"\\|�℘w���.-r���r=i����jpPg���>�=�-�\"嚈���;Sf�vN=�A`����=�\n@�񫲱��b)d\0�<�	���%�U�����ܭ�G�N�!_]nn����q*�a���M���n�<�\0:R���-ʗsF3�X\Z��[B��kJ�s\Z�\'�^C�;Ŭ-䶋h\\��Y�|�M�b���q>=�L���,���pz����y�����=kOU�\ZB�q���f�� �՝;E[�w��/%��wV%�n&�^N[�5�5�[5�}I���;�Z!�����W�z�����WC��l��ޭ�V���am��A�F����� �m��p9��Ͷ����t��Uc%dz�������%�Y �l�sۯ�;�q�L��!B�G��p@��+�=�;\"�	$d26q�3�\r}7�w�i�ފ��LQ�������_�����;z�%��H���X\nF0�]u�����\'��E�����pp	��^�o�$+��z�Q#N&8��Ե�H,C�+�WL^�9ֈq@	��<�8�\ZJ��r�q�Ҡd�7c+V�1�J����*�ʵ�]��N� ē�V��t��3�\"��C(;3!�BHq���Vh@q�z�x�g�we#vӟZ�qG�uc��# 3!8T�?{>P�\\�瓊�/x1�+�+	cwc\\�V��ޚ��>�o�{W?�0\0�\'�����n�\\���7Ì�\"Ѷθ=va�L0�Yo��Z�G��OJ»�v�P*\"��:`�)]\\�J���Xs]�0��K���Mg��$��ۙ��v�S��e��� ���\0?�}��u��.1�G�&�*�����@N�N�����?+�zl�2�F��=?J����r�^>n\\�]�-?�q�j�;5N�59p:���(���|w4�L��b���8�d�\0�YW:��Y�{b��X�n]:R�.\\�a<�%�ȕe�m���C[X���5�u��	e�9⼊���H��a�W0�_t��k�r�:�}�!�Bk��%�2��t9�\\�t�ϊ���Er�jy���7ۤ�|�Nz��n��3��ҽW�=\0��+Pp�y�k~�sr��u+�\n8�fP�J��k��[�m���1<`�\rֺ�%k�Պ&�#9�\0f�g���Q�����P;w�v��0$��N1��QV�g�+�>��}�|�1^�4�x�E �qYW�[�N5���[WmE!\\c�gַ��pFsU�}<Y^�S�1S��sZ��Q-4f͙=z�V�\"Ĝ�Q�ǈ�uh[ð95�c̵4N��x�r��h⑁^=�Z�0Ip;T�C��?�q��Z(X����#ƪ0JkH�Xg5\rԡ�\0։��L宋�\"�A^�P8�)mؕ ��\0W,�\0��V�n*��A<�mќ�hv����&��ӔNy��U�x�z\Z���#� ���H	i]!��B=?�\'�\"6��1\n�8ξ��\r��<\r�ړ�[,rMv�یd���e��={Hf�r:V��\0�=�3K�ˌ���7*�䟔v�i/#�[\\�ׯ��D���!)��׋ss#���W���v-k�*���5<M�A��y�jd*���E��,)���:2rq���9��*��l� qG6�fi�k7�3ޮZ�3\'�Q���qW\Z`��Κ��oP�@Āj��~`9��I1��ϕ#��F��d:�k6y�=�j�i�g�.f��x[]\'h�A<��\0�̺��A\'֝5�	>����v�m����FpI���j�\Z��s�6�h�dϸ��¨�>��|��I���C#��޺�x�����\"�TPx��W�j9g�x�zp��kˢ3�e<��K�0�3V.f,_�Ļ��qֺyz����V��a�z�-��r3V.�v���5�	�H�ݝ=��`sں-2���.x���f�,J��{�t�́d�:V�_IҒO�=M�I��\"��o?-q��w��?Q��W_���˕��IŎ��{��\nx���z�W��	T�b��=�e����f�tT��z�$�fj���s��\0��Y��nB���:���~�L�Ui1xD|�PA���\0�����Z巔nr=��\0����T\Z���gܧr��J���\\���꭛}H��9&�#%0@��+������{2m�J����\0g��>�n%�\ZW�:�+vcS1ɣa���i�Q!*�Z�x���\0=*T����Z���Q�YFXB���}�rwq����Z̻��5��V:(�����o���h�gq����u��LM���k�ԁ�9��޸*;3Ԧr���X�:W-�ʐ)��WK��*��:��+�DZ.}k��;)�����P@l��+�~�5~�r[�)e`��\n�DtӶ�産�7J�x���I�31���f�i���륦�H��@c����U�%����;I(0�k�\n������ܸ��_m|�4Z��=&E|�yL;�?��\0\\���5�����\\��uO��F��),s��/|oil���:�#��x��p��\'==����O����i:u춖����`z���®*s�-#,.Z�i�\\x����\'��c�x�O������8��9�?�����)|a\Z��g��/���_�7>{�e5Ďw3�f������s��\r�nK�>��b��%�ɛ�J\ZS�����f��WÞ4�ˢ��O�##!a�B,縭k������1>���^��퍑�+\"m�#�_��d7ݞ7\Z-��s�Iv�ĭ�cޱ�N0���C�Z�^O��okӻ�\0nEq7������7��`�m����G�2 ����\\KG�Ԙ�I����&\r�g5��[�1�Jй�gn����E���4�,q�1�]+a+Ӗ�;��a[,��\0�^,���\r\\I\r��d����qS��oZ��v�q����c���׏k�iݣ�n�ׯ�]�iGW&sԨҴ�����Y���G���.�N7�}��\0>���G�2\\�]nGV<�¥�X��\0�\\���~	�@T�w���E/��0�����Z�M��Cİ:jV���>YS��3�v�\0>�����۳�>�r~zU�$q�\0\Z��_��N�]�v6��X�\n�I���dck��<�ƒG�cG�G8=��*��C0���Ϫͨ�Kq1Gm�A�V��xP�zP�,,�9���A��R3��\0R�\Z�Ү�2x�lZ.A�r��ڕ�,T\\��B�ilU��H��H���ϭ8�^�� �l�*6M�R*]�AҐ��[&���!M�2A�{P����)?0��S�U�1�[-ٔ�\\%M���U�?Z�+�\0��=����R��FU�[��ѿ��]�Xm܍0���j�s�8��Ͽ���[{x�Np8�_+~ͺC_���Q�x��ڱ��{�\0��~��`��;\Z�l�G��n����F�s;r}sX����U;���]]H\'�;�%�_�X�Vq��0W[�ݹ��brX�J�_,q�T�˷�2Mo/\"Zܺ���Fj��\'��*1]�vO�f���Wn�R�9�z�䞦�$���R�9w��ޮ:�WM�ӄ��<\ZS&�pr\rW�P��s�U�A�<�(�ȋ�RI&�ORYJ�sQ���֩�t܌�N��q�Wk��O�e�(�����n.2OҲ/n��cۭTR{��� ��ib8�5��b��\0��*�!���+�񏉣�4�#�+��_:�ڳ�O4��g$�z�<���gLRJ�L�R�����k���%�6=����*NqX�a��cd�)	.Wr����:Vԣ,�wwD��°��F�\'�Jw�;ݕ/J��k\Z�@�Չ���=�2�BX�Ѫ\Z��׽���-��k�𶠷v�#�^3Y�����]͊w����K�4��NOQ]��/}Q�S��֧g�]9��\0���i�be5�Ghd`ǂ+�ҙ�@��+���L��^gFem��s�V�El[��n*ծ�͹���Sk�W��淁u��9�x	���G��\0&�B�k��>��&@�d��;Útv��X��Z���}�A��������	�$��;;F ʟCW-e=�f�̯\0�nČ;w5z�$�F�C�jE�!��/��WN�w����.�ǚZEP�0��zR��Ɇbn�����B�ɹ\\�D����=�h`� �[�ޤ���f��T4����s����+��0���ֺ�F1���r\Z�{�/���+�zP���7R��Ȯb��+���v߸�3\\��N85����+DqZ�.�p��^�ʎ�����Q�}���%�r�\r��ƪ1ە�S|��$q�2�T�X4��Z:I������l�vdu��J���h�d��2=�z�\0��z�@�����1̑��c����}�=��7�v\\���u>���KH#bA�����ivW��7���\0L�<k<��~bU��_>x�����y����l�󟥎����WI�Y�?�^�Oj6-���!:t���\0?�r�(�:�x|dT\\[���\0b��N=jY|?�}œ�Q�u��M\Z�anQy�$c�Y�o�䬠 ��S�qW%�U$�+&3J�=s\noZ�q��\\����/�L���ǭa:�U��V8g����m�aE�\Z�g�n��1��`q��Z:����FEp�T�J��al�Tx��:�95���/S)ǝ�\Z���������y�\'�g�%է-���Eu����H#v9�+��[��?\Z�P�v�9�ti�}΢��Z�����Y�^�Yd���^7L�~��V	Z�9_�����+`���|K\n.�T�\\��G��~K�n:U�+Y�d�u��$�\r�6q��\\u��ƣre�̮	+��~�Ԅ����܁��J���SoQm�\0I�ҷ4ߗ�b�`��_��o8⩥+�8���iwes��lf�ų\\N�z#a�u7�$��sH�[�\Z3ӎ�Y�0H��9nDN��I��󚈕{]�[i�$f�JYN8�fbOC�T���RK�3w�y���y������9�8����]Y�Iǘo���߭Q�Rwt�Xv�}=j�ȑ�s����Ѓr9\\�O��g�y��h�G�B�1,~����^�e7�����\0���h��<�v��I��@�]{+���7Q�A)݂F�a�.Kt\'�M��(��98�Y�L����S��ϢEՐ���O2)�T#|V#`Q���U-X4�ږ����U7�����K�S�KM��w�E�\'<u����ˋ$���2�AW$�%qޞ���Is���U�v�����?r*	e��-[VL�+&\n��ҩ]NC��R\\\0��g\\\\@<��Tc���]|����mCP���I$}���Kqs�<�q^a�+��o�۾�`D��J��$�k]�;��-�UԮXJ�v�8\0w�:��߻-�U���۲���I�s�sN\rT ��q�\r��;�5�yp\0 �j{����{���\r��[a�݊�w!w�Ƹ�ܯ�c�Ʀ����<�ɹ�p>�6{��hT���5�q19犳q(;�*�u\n�1���g\n��lZ�^��md\nr\ri[6��ޅ��}nk¥�L}+R�2�汬�� �`֬.�pN)�(��۵PW���c��:��dc5�m.9�\\P�u�:�\"�k����k�u�P�Șm\'=[#��\0�~n���f�KᎬ�~��K�H���\0��媛�7���r����<AG<u�E8<W-��ߵZ��3�m���&��y��FtOCN����Vu�ݫk?��1]��79om	�#�9���hc��*/���R`��֛�۰*�Vԣ,x%�ک��8��DX��h�R�23��YOsH;�楄����q��8,[rH�v���a�A�=9�Z��rs���4=\nR��#|<��ǥr:���9Q����-E��BOs���5iV�b���{z�4�Q�]��j����tƖQ��<�j��4w�\\@<gwN���4 �\0�4S�Y��\'\"=DIa@�\0n��Yi,�\r\Z�z��V�m\'�F2+����\0G\\/=�����RodT�ѣXU���t=�t:6�����8q�Ғ��*$���L��;�[��D4��S�V�~��&i6�[���o4�y�kgEd#aV,�0�(�֮C�2�2Xt����qJ���X�-��ڄr�\'�W?�x�d�414�td\"��Rv����J+x�?\Z�mF�D��cH�\'��7��#(��ǵp:χ��op�l�Aד�{��hPX���y�+��i$v�wl�U���3XNK��U�vl�@�+�w�=Y��?S]�	\r,c��s�녿�C��w5����*sGB�P�n�u�ol��ۇ5������Z��*J���峱���+H��m@Oj�lJ���^���n���F@�0�+xk���)l`,;s�4�zՉr�Hn���#=+�M���n2HT+TP�!��M+���oj˷v��� �P�a+7tk\"�sO\0�U���+��nMBm!6��6lD���4��!9�[M����ֽ��Fk��&�ч2�\'��p�k\"��2zj�k!�rk8�lt�{���rr�`\n;�R.й5�Rݲo���\0�$��094��sL��L�����B�֧�tӨ���e�I�;{VC˅8����f����I��\'<d�ꢛ��p�j0�O�<=��#� �����V�/��*���F���ֲ5k�AA����\\͞���s\\�$.z����@$�-T�q�����	��g�R�и�%�_I�:�~:�=+(JY��S���j���^�����n=@�#H�g	s�U�Y�b[�BWfI�y�q0�A������t[q�5\\�e�&��{��[�����}*��.SUZ�`9 ��-Ҩ#<�vй+2{��8��d�ܒz�qL�����o�Dq���R�����F��O������\"���J��W�e���I@�������\0��L���X���WߐMy����FMa���3K�X��r��Ļ�ڻA�S]]����ú�\r��ַ�{$$�Ў�}�$�E��Py�:��bMc\\O�#<�wj但\\�d��5�s>��?�I<����sp\089����7܂�m���f���q>�\'<v���)�DZ^�q��y�l�������>浬%N��U���V�܂Ls�֕������\r�� t�u�k.��F���Ee8\n~l�Vʹ�\0���YK���ݫ�zT?\"�6��M���o\n_{�0����N�(��t��Ex�r��r=)�7�˖I�x�-�Eޑ�с���VS�\"�?*���^�����Ձ�x�?J�m&��<\Z�>����cz6���eN5J#�<Ո\\�����q�#��8�v�\n��R��	��Td�Й�_��N`�F�`��D}�%d�\"���`c!�k6|F�j�K�����-������P�2u(\0����s�+�9`c�u\Z��%��n[C\\��b�~`y5�;=��J�8�R�|��x玵�Kao����}^0V\n��+i�KJNN:��o��s@��Ki<Ñ�Fjm6�K�j�������_j�gb7�F1ӎ�B/d�oK\\n�j�.ќc�Gf��p�q֫�[���Z�0~Q�V�]0r{��U�J�?ʴ��둎�>��w�9e`�m֕�3q������Qw�юV��\n܎p:����G������Y	,T\nS���X�M�1����S֮>Lū��kw�o\nD�$l�@���\nA嬆<(�sz�9���aS UWҡ��R�tQ�8�A�-U\'wk���X��N��\0�\ru�P�iÑ���Z���Һ�V���w^\"�u���\0�Q�\rp�����W�5�v��4���\0�<�İ�F�H��s�}+ͮ��3d��\'ĥ�Y7�k�5)���ֱ��]3x^Z�����s�w��i�%�1^H�k3��!�����Py�~U��*�x�J�<G^���b01ǭy��\n3f�cĖ��\'˃޼�Z�����5�NVV\n��id���1Օ��}kW�R6���pA��2�8���\"��NqLKr��T�UH=�G%ҁ�ZZ�A9+]\r��C(�r+NԂ����a&�+N�`�(pV���/B��Gzҷ*�����{i\0\'�֕�<��dӑi�6m��@�v�vR	�%����گZ̡���a(�lm���Y3m;O�jhf��*�����O\Z(ݸw�m[jU���c{�$r���.*C0۷����`��>mlD�ށ\'<�^��;idүo]F�e�n9�?��\0^��V-��/rk�χ:H���mb��P68�?��J1l�1n���ߝ��V\r�ߚ����\0QQ$�+\\�ǒMm�y�$�h��r@l�L{7�YK �\r�T�:Ǟj�f	��/���\n<�PN�+8O�8 ���1��e{�m٫�!?7�*�2yhwV5��-�sҬ�����(��݈��E��,d���ve�:�0�E1��6�\0qYj�We�.�\r����R]u�\n�%���\"�\'�88?�RM�IJ7.�vNNr?�y��-�Mk�,�u>�J���F�b�!S�[�k�|G����21%��i�VF���s(j�����n���X7yS��>��8 �V%�ʜ�x��ik+!9XK���?�b�\\�ks�N���۞dKp���)۳W6���� �k:�q�<\nuԠ�Y�L�[��+�X-І��!�+&��@?�>��*��,��:Е��Vo�}*��M8��4ڦ�c՟��','2013-08-06');
/*!40000 ALTER TABLE `tabinoutimageinfo` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `tabinoutrecordinfo`
--

DROP TABLE IF EXISTS `tabinoutrecordinfo`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `tabinoutrecordinfo` (
  `RecordID` bigint(20) unsigned NOT NULL AUTO_INCREMENT,
  `LocationID` varchar(16) NOT NULL,
  `EnterTime` datetime NOT NULL,
  `LeaveTime` datetime DEFAULT NULL,
  `EnterPlate` varchar(45) DEFAULT NULL,
  `LeavePlate` varchar(45) DEFAULT NULL,
  PRIMARY KEY (`RecordID`,`EnterTime`)
) ENGINE=InnoDB AUTO_INCREMENT=12 DEFAULT CHARSET=utf8
/*!50100 PARTITION BY LINEAR HASH (MONTH(EnterTime))
PARTITIONS 12 */;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `tabinoutrecordinfo`
--

LOCK TABLES `tabinoutrecordinfo` WRITE;
/*!40000 ALTER TABLE `tabinoutrecordinfo` DISABLE KEYS */;
INSERT INTO `tabinoutrecordinfo` VALUES (7,'5101070001001006','2013-08-06 11:37:58','2013-08-06 11:51:41','川A88888','川A88888'),(10,'5101070001001007','2013-08-06 11:58:55',NULL,NULL,NULL),(11,'5101070001001006','2013-08-06 12:01:37','2013-08-06 14:55:15',NULL,NULL);
/*!40000 ALTER TABLE `tabinoutrecordinfo` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `tablocationhavecarinfo`
--

DROP TABLE IF EXISTS `tablocationhavecarinfo`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `tablocationhavecarinfo` (
  `LocationID` varchar(16) NOT NULL COMMENT '510107+0001+001+001\nAdministrativeID+SelfNumber+ReceiverID+DetectorID',
  `EnterTime` datetime NOT NULL,
  `EnterImage` longblob,
  `RecordID` bigint(20) unsigned NOT NULL,
  `LeaveTime` datetime DEFAULT NULL,
  `Prepayment` smallint(6) DEFAULT '0',
  PRIMARY KEY (`LocationID`),
  UNIQUE KEY `StateDataID_UNIQUE` (`LocationID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `tablocationhavecarinfo`
--

LOCK TABLES `tablocationhavecarinfo` WRITE;
/*!40000 ALTER TABLE `tablocationhavecarinfo` DISABLE KEYS */;
INSERT INTO `tablocationhavecarinfo` VALUES ('5101070001001006','2013-08-06 12:01:37',NULL,11,'2013-08-06 14:55:15',0),('5101070001001007','2013-08-06 11:58:55',NULL,10,NULL,0);
/*!40000 ALTER TABLE `tablocationhavecarinfo` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `tabloginfo`
--

DROP TABLE IF EXISTS `tabloginfo`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `tabloginfo` (
  `LogID` bigint(20) unsigned NOT NULL AUTO_INCREMENT,
  `LogInfo` longtext COMMENT 'IP@ClientID@Serial@Credit@Type@SQL',
  `LogDateTime` datetime NOT NULL,
  PRIMARY KEY (`LogID`,`LogDateTime`)
) ENGINE=InnoDB AUTO_INCREMENT=28 DEFAULT CHARSET=utf8
/*!50100 PARTITION BY LINEAR HASH (MONTH( LogDateTime ))
PARTITIONS 12 */;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `tabloginfo`
--

LOCK TABLES `tabloginfo` WRITE;
/*!40000 ALTER TABLE `tabloginfo` DISABLE KEYS */;
INSERT INTO `tabloginfo` VALUES (1,'<Data><LocationID>5101070001001006</LocationID>                                            <DateTime>2013-08-06 09:45:04</DateTime>                                            <Accessor>Localhost</Accessor></Data> SP:SensorRecord','2013-08-06 09:45:04'),(2,'<Data><LocationID>5101070001001006</LocationID>                                            <DateTime>2013-08-06 09:47:26</DateTime>                                            <Accessor>Localhost</Accessor></Data> SP:SensorRecord','2013-08-06 09:47:26'),(3,'<Data><LocationID>5101070001001007</LocationID>                                            <DateTime>2013-08-06 09:47:58</DateTime>                                            <Accessor>Localhost</Accessor></Data> SP:SensorRecord','2013-08-06 09:47:58'),(4,'<Data><LocationID>5101070001001006</LocationID>                                            <DateTime>2013-08-06 09:48:42</DateTime>                                            <Accessor>Localhost</Accessor></Data> SP:SensorRecord','2013-08-06 09:48:42'),(5,'<Data><LocationID>5101070001001006</LocationID>                                            <DateTime>2013-08-06 09:48:58</DateTime>                                            <Accessor>Localhost</Accessor></Data> SP:SensorRecord','2013-08-06 09:48:58'),(6,'{\"Message\":\"用户登录失败。\n原密码错误。。\"} SP:UserRecord','2013-08-06 10:36:51'),(7,'{\"Message\":\"用户登录成功。\"} SP:UserRecord','2013-08-06 10:37:45'),(8,'{\"Message\":\"用户登录成功。\"} SP:UserRecord','2013-08-06 11:21:17'),(9,'{\"Message\":\"用户登录成功。\"} SP:UserRecord','2013-08-06 11:25:53'),(10,'<Data><DeviceID>359732008920329</DeviceID><Accessor><IP>192.168.1.109</IP><ClientID>359732008920329</ClientID><TypeCode>ConfigInfo</TypeCode><UserID></UserID></Accessor></Data> SP:QueryConfigRecord','2013-08-06 11:27:57'),(11,'<Data><LocationID>5101070001001006</LocationID>                                            <DateTime>2013-08-06 11:28:21</DateTime>                                            <Accessor>Localhost</Accessor></Data> SP:SensorRecord','2013-08-06 11:28:21'),(12,'<Data><LocationID>5101070001001006</LocationID>                                            <DateTime>2013-08-06 11:28:27</DateTime>                                            <Accessor>Localhost</Accessor></Data> SP:SensorRecord','2013-08-06 11:28:27'),(13,'<Data><LocationID>5101070001001007</LocationID>                                            <DateTime>2013-08-06 11:28:42</DateTime>                                            <Accessor>Localhost</Accessor></Data> SP:SensorRecord','2013-08-06 11:28:42'),(14,'<Data><DeviceID>359732008920329</DeviceID><Accessor><IP>192.168.1.109</IP><ClientID>359732008920329</ClientID><TypeCode>ConfigInfo</TypeCode><UserID></UserID></Accessor></Data> SP:QueryConfigRecord','2013-08-06 11:34:44'),(15,'{\"Message\":\"用户登录成功。\"} SP:UserRecord','2013-08-06 11:34:57'),(16,'<Data><LocationID>5101070001001006</LocationID>                                            <DateTime>2013-08-06 11:36:04</DateTime>                                            <Accessor>Localhost</Accessor></Data> SP:SensorRecord','2013-08-06 11:36:04'),(17,'<Data><LocationID>5101070001001006</LocationID>                                            <DateTime>2013-08-06 11:37:58</DateTime>                                            <Accessor>Localhost</Accessor></Data> SP:SensorRecord','2013-08-06 11:37:58'),(18,'<Data><LocationID>5101070001###006</LocationID>                                            <Plate>川A88888</Plate>                                            <Pay>0</Pay>                                            <Operator>未知</Operator>                                            <Time>2013-08-06 11:37:58</Time>                                            <Image/>                                            <Accessor><IP>192.168.1.109</IP><ClientID>359732008920329</ClientID><TypeCode>TabletNormalData</TypeCode><UserID>1</UserID></Accessor>                                            <UserID>1</UserID></Data> SP:TabletNormalRecord','2013-08-06 11:38:37'),(19,'<Data><LocationID>5101070001001007</LocationID>                                            <DateTime>2013-08-06 11:38:46</DateTime>                                            <Accessor>Localhost</Accessor></Data> SP:SensorRecord','2013-08-06 11:38:46'),(20,'<Data><LocationID>5101070001001006</LocationID>                                            <DateTime>2013-08-06 11:51:41</DateTime>                                            <Accessor>Localhost</Accessor></Data> SP:SensorRecord','2013-08-06 11:51:41'),(21,'<Data><LocationID>5101070001###006</LocationID>                                            <Plate>川A88888</Plate>                                            <Pay>5</Pay>                                            <Operator>未知</Operator>                                            <Time>2013-08-06 11:52:58</Time>                                            <Image/>                                            <Accessor><IP>192.168.1.109</IP><ClientID>359732008920329</ClientID><TypeCode>TabletNormalData</TypeCode><UserID>1</UserID></Accessor>                                            <UserID>1</UserID></Data> SP:TabletNormalRecord','2013-08-06 11:53:12'),(22,'{\"Message\":\"用户登录成功。\"} SP:UserRecord','2013-08-06 11:56:13'),(23,'<Data><DeviceID>359732008920329</DeviceID><Accessor><IP>192.168.1.109</IP><ClientID>359732008920329</ClientID><TypeCode>ConfigInfo</TypeCode><UserID></UserID></Accessor></Data> SP:QueryConfigRecord','2013-08-06 11:56:40'),(24,'<Data><LocationID>5101070001001006</LocationID>                                            <DateTime>2013-08-06 11:56:41</DateTime>                                            <Accessor>Localhost</Accessor></Data> SP:SensorRecord','2013-08-06 11:56:41'),(25,'<Data><LocationID>5101070001001007</LocationID>                                            <DateTime>2013-08-06 11:58:55</DateTime>                                            <Accessor>Localhost</Accessor></Data> SP:SensorRecord','2013-08-06 11:58:55'),(26,'<Data><LocationID>5101070001001006</LocationID>                                            <DateTime>2013-08-06 12:01:37</DateTime>                                            <Accessor>Localhost</Accessor></Data> SP:SensorRecord','2013-08-06 12:01:37'),(27,'<Data><LocationID>5101070001001006</LocationID>                                            <DateTime>2013-08-06 14:55:15</DateTime>                                            <Accessor>Localhost</Accessor></Data> SP:SensorRecord','2013-08-06 14:55:16');
/*!40000 ALTER TABLE `tabloginfo` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `tabparkinfo`
--

DROP TABLE IF EXISTS `tabparkinfo`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `tabparkinfo` (
  `ParkID` varchar(10) NOT NULL COMMENT 'AdministrativeID + SelfNumber\n510107 0001\n510107 + 0001\n\nTrigger==>AdministrativeID + ParkSelfNumber',
  `ParkName` varchar(45) NOT NULL,
  `ParkSpace` smallint(5) unsigned NOT NULL DEFAULT '0',
  `UsedSpace` smallint(5) unsigned DEFAULT '0',
  `ParkSelfNumber` varchar(4) NOT NULL DEFAULT '0',
  `ParkComments` varchar(45) DEFAULT NULL,
  `ParkParentID` varchar(10) NOT NULL,
  `UnitID` varchar(9) NOT NULL,
  PRIMARY KEY (`ParkID`),
  UNIQUE KEY `ParkID_UNIQUE` (`ParkID`),
  UNIQUE KEY `ParkName_UNIQUE` (`ParkName`),
  KEY `ParkUnit_idx` (`UnitID`),
  CONSTRAINT `ParkUnit` FOREIGN KEY (`UnitID`) REFERENCES `tabunitinfo` (`UnitID`) ON DELETE CASCADE ON UPDATE CASCADE
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `tabparkinfo`
--

LOCK TABLES `tabparkinfo` WRITE;
/*!40000 ALTER TABLE `tabparkinfo` DISABLE KEYS */;
INSERT INTO `tabparkinfo` VALUES ('5101070001','肿瘤医院',2000,0,'0001',NULL,'0','771237583');
/*!40000 ALTER TABLE `tabparkinfo` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `tabreceiverinfo`
--

DROP TABLE IF EXISTS `tabreceiverinfo`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `tabreceiverinfo` (
  `ParkID` varchar(10) NOT NULL,
  `ReceiverName` varchar(45) DEFAULT NULL,
  `ReceiverID` varchar(3) NOT NULL,
  `ReceiverChannelID` tinyint(3) unsigned NOT NULL DEFAULT '0',
  `ReceiverComments` varchar(45) DEFAULT NULL,
  `ParkReceiverID` varchar(13) NOT NULL COMMENT 'ParkID+ ReceiverID \nTrigger==>ParkID ReceiverID',
  PRIMARY KEY (`ParkReceiverID`),
  UNIQUE KEY `AIID_UNIQUE` (`ParkReceiverID`),
  UNIQUE KEY `ReceiverName_UNIQUE` (`ReceiverName`),
  KEY `ParkReceiver_idx` (`ParkID`),
  CONSTRAINT `ParkReceiver` FOREIGN KEY (`ParkID`) REFERENCES `tabparkinfo` (`ParkID`) ON DELETE NO ACTION ON UPDATE NO ACTION
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `tabreceiverinfo`
--

LOCK TABLES `tabreceiverinfo` WRITE;
/*!40000 ALTER TABLE `tabreceiverinfo` DISABLE KEYS */;
INSERT INTO `tabreceiverinfo` VALUES ('5101070001','西门','001',1,NULL,'5101070001001');
/*!40000 ALTER TABLE `tabreceiverinfo` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `tabtmpfeeinfo`
--

DROP TABLE IF EXISTS `tabtmpfeeinfo`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `tabtmpfeeinfo` (
  `RecordID` bigint(20) unsigned NOT NULL,
  `Prepayment` smallint(5) unsigned NOT NULL DEFAULT '0',
  `Payment` smallint(5) unsigned NOT NULL DEFAULT '0',
  `PrepaymentOperator` varchar(45) NOT NULL,
  `PrepaymentTime` datetime NOT NULL,
  `PaymentTime` datetime NOT NULL DEFAULT CURRENT_TIMESTAMP,
  `PaymentOperator` varchar(45) DEFAULT NULL,
  `PrepaymentUserID` bigint(20) unsigned DEFAULT NULL,
  `PaymentUserID` bigint(20) unsigned DEFAULT NULL,
  PRIMARY KEY (`RecordID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `tabtmpfeeinfo`
--

LOCK TABLES `tabtmpfeeinfo` WRITE;
/*!40000 ALTER TABLE `tabtmpfeeinfo` DISABLE KEYS */;
/*!40000 ALTER TABLE `tabtmpfeeinfo` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `tabtmpinoutimageinfo`
--

DROP TABLE IF EXISTS `tabtmpinoutimageinfo`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `tabtmpinoutimageinfo` (
  `RecordID` bigint(20) unsigned NOT NULL,
  `EnterImage` longblob,
  `LeaveImage` longblob,
  `AddedTime` date NOT NULL,
  PRIMARY KEY (`RecordID`,`AddedTime`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8
/*!50100 PARTITION BY LINEAR HASH (MONTH(AddedTime))
PARTITIONS 12 */;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `tabtmpinoutimageinfo`
--

LOCK TABLES `tabtmpinoutimageinfo` WRITE;
/*!40000 ALTER TABLE `tabtmpinoutimageinfo` DISABLE KEYS */;
/*!40000 ALTER TABLE `tabtmpinoutimageinfo` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `tabtmpinoutrecordinfo`
--

DROP TABLE IF EXISTS `tabtmpinoutrecordinfo`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `tabtmpinoutrecordinfo` (
  `RecordID` bigint(20) unsigned NOT NULL,
  `LocationID` varchar(16) NOT NULL,
  `EnterTime` datetime NOT NULL,
  `LeaveTime` datetime DEFAULT NULL,
  `EnterPlate` varchar(45) DEFAULT NULL,
  `LeavePlate` varchar(45) DEFAULT NULL,
  PRIMARY KEY (`RecordID`,`EnterTime`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8
/*!50100 PARTITION BY LINEAR HASH (MONTH(EnterTime))
PARTITIONS 12 */;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `tabtmpinoutrecordinfo`
--

LOCK TABLES `tabtmpinoutrecordinfo` WRITE;
/*!40000 ALTER TABLE `tabtmpinoutrecordinfo` DISABLE KEYS */;
/*!40000 ALTER TABLE `tabtmpinoutrecordinfo` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `tabtmploginfo`
--

DROP TABLE IF EXISTS `tabtmploginfo`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `tabtmploginfo` (
  `LogID` bigint(20) unsigned NOT NULL AUTO_INCREMENT,
  `LogInfo` longtext COMMENT 'IP@ClientID@Serial@Credit@Type@SQL',
  `LogDateTime` datetime NOT NULL,
  PRIMARY KEY (`LogID`,`LogDateTime`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8
/*!50100 PARTITION BY LINEAR HASH (MONTH( LogDateTime ))
PARTITIONS 12 */;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `tabtmploginfo`
--

LOCK TABLES `tabtmploginfo` WRITE;
/*!40000 ALTER TABLE `tabtmploginfo` DISABLE KEYS */;
/*!40000 ALTER TABLE `tabtmploginfo` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `tabtmpuserloginoutinfo`
--

DROP TABLE IF EXISTS `tabtmpuserloginoutinfo`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `tabtmpuserloginoutinfo` (
  `LogID` bigint(20) unsigned NOT NULL AUTO_INCREMENT,
  `LogUserID` bigint(20) unsigned DEFAULT NULL,
  `LogTime` datetime NOT NULL DEFAULT CURRENT_TIMESTAMP,
  `LogType` enum('Login','Logout') DEFAULT NULL,
  `LogClientID` varchar(45) DEFAULT NULL,
  `LogIP` varchar(45) DEFAULT NULL,
  PRIMARY KEY (`LogID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `tabtmpuserloginoutinfo`
--

LOCK TABLES `tabtmpuserloginoutinfo` WRITE;
/*!40000 ALTER TABLE `tabtmpuserloginoutinfo` DISABLE KEYS */;
/*!40000 ALTER TABLE `tabtmpuserloginoutinfo` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `tabunitinfo`
--

DROP TABLE IF EXISTS `tabunitinfo`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `tabunitinfo` (
  `UnitID` varchar(9) NOT NULL,
  `UnitName` varchar(45) NOT NULL,
  `UnitComments` varchar(45) DEFAULT NULL,
  `AdministrativeID` varchar(6) NOT NULL,
  `UnitAddress` varchar(500) NOT NULL,
  PRIMARY KEY (`UnitID`),
  UNIQUE KEY `UnitID_UNIQUE` (`UnitID`),
  UNIQUE KEY `UnitName_UNIQUE` (`UnitName`),
  KEY `UnitAdministrative_idx` (`AdministrativeID`),
  CONSTRAINT `UnitAdministrative` FOREIGN KEY (`AdministrativeID`) REFERENCES `tabadministrativeinfo` (`AdministrativeID`) ON DELETE CASCADE ON UPDATE CASCADE
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `tabunitinfo`
--

LOCK TABLES `tabunitinfo` WRITE;
/*!40000 ALTER TABLE `tabunitinfo` DISABLE KEYS */;
INSERT INTO `tabunitinfo` VALUES ('771237583','四川前途高科',NULL,'510107','测试地址');
/*!40000 ALTER TABLE `tabunitinfo` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `tabuserinfo`
--

DROP TABLE IF EXISTS `tabuserinfo`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `tabuserinfo` (
  `UserID` bigint(20) unsigned NOT NULL AUTO_INCREMENT,
  `UserName` varchar(45) NOT NULL,
  `UserComments` varchar(45) DEFAULT NULL,
  `GroupID` bigint(20) unsigned NOT NULL,
  `UserPwd` varchar(128) NOT NULL,
  `UserAddress` varchar(512) DEFAULT NULL,
  `UserImage` longblob,
  `UserTelephone` varchar(45) DEFAULT NULL,
  `UserIdentity` varchar(18) DEFAULT NULL,
  `UserState` enum('Login','Logout') DEFAULT 'Logout',
  `UserJobNumber` varchar(45) DEFAULT NULL,
  PRIMARY KEY (`UserID`),
  UNIQUE KEY `UserID_UNIQUE` (`UserID`),
  UNIQUE KEY `UserName_UNIQUE` (`UserName`),
  KEY `UserGroup_idx` (`GroupID`),
  CONSTRAINT `UserGroup` FOREIGN KEY (`GroupID`) REFERENCES `tabgroupinfo` (`GroupID`) ON DELETE CASCADE ON UPDATE CASCADE
) ENGINE=InnoDB AUTO_INCREMENT=2 DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `tabuserinfo`
--

LOCK TABLES `tabuserinfo` WRITE;
/*!40000 ALTER TABLE `tabuserinfo` DISABLE KEYS */;
INSERT INTO `tabuserinfo` VALUES (1,'Test',NULL,1,'dGVzdDEyMw==','人民南路',NULL,NULL,NULL,'Login','12345');
/*!40000 ALTER TABLE `tabuserinfo` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `tabuserloginoutinfo`
--

DROP TABLE IF EXISTS `tabuserloginoutinfo`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `tabuserloginoutinfo` (
  `LogID` bigint(20) unsigned NOT NULL AUTO_INCREMENT,
  `LogUserID` bigint(20) unsigned DEFAULT NULL,
  `LogTime` datetime NOT NULL DEFAULT CURRENT_TIMESTAMP,
  `LogType` enum('Login','Logout') DEFAULT NULL,
  `LogClientID` varchar(45) DEFAULT NULL,
  `LogIP` varchar(45) DEFAULT NULL,
  PRIMARY KEY (`LogID`)
) ENGINE=InnoDB AUTO_INCREMENT=6 DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `tabuserloginoutinfo`
--

LOCK TABLES `tabuserloginoutinfo` WRITE;
/*!40000 ALTER TABLE `tabuserloginoutinfo` DISABLE KEYS */;
INSERT INTO `tabuserloginoutinfo` VALUES (1,1,'2013-08-06 10:37:45','Login','359732008920329','192.168.1.109'),(2,1,'2013-08-06 11:21:17','Login','359732008920329','192.168.1.109'),(3,1,'2013-08-06 11:25:53','Login','359732008920329','192.168.1.109'),(4,1,'2013-08-06 11:34:57','Login','359732008920329','192.168.1.109'),(5,1,'2013-08-06 11:56:13','Login','359732008920329','192.168.1.109');
/*!40000 ALTER TABLE `tabuserloginoutinfo` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Temporary table structure for view `viewconfiginfo`
--

DROP TABLE IF EXISTS `viewconfiginfo`;
/*!50001 DROP VIEW IF EXISTS `viewconfiginfo`*/;
SET @saved_cs_client     = @@character_set_client;
SET character_set_client = utf8;
/*!50001 CREATE TABLE `viewconfiginfo` (
  `DeviceID` tinyint NOT NULL,
  `UnitID` tinyint NOT NULL,
  `UnitName` tinyint NOT NULL,
  `ParkID` tinyint NOT NULL,
  `ParkName` tinyint NOT NULL,
  `ReceiverID` tinyint NOT NULL,
  `ReceiverName` tinyint NOT NULL
) ENGINE=MyISAM */;
SET character_set_client = @saved_cs_client;

--
-- Temporary table structure for view `viewfeeinfo`
--

DROP TABLE IF EXISTS `viewfeeinfo`;
/*!50001 DROP VIEW IF EXISTS `viewfeeinfo`*/;
SET @saved_cs_client     = @@character_set_client;
SET character_set_client = utf8;
/*!50001 CREATE TABLE `viewfeeinfo` (
  `RecordID` tinyint NOT NULL,
  `Prepayment` tinyint NOT NULL,
  `Payment` tinyint NOT NULL,
  `PrepaymentOperator` tinyint NOT NULL,
  `PrepaymentTime` tinyint NOT NULL,
  `PaymentTime` tinyint NOT NULL,
  `PaymentOperator` tinyint NOT NULL,
  `PrepaymentUserID` tinyint NOT NULL,
  `PaymentUserID` tinyint NOT NULL,
  `LocationID` tinyint NOT NULL,
  `UnitName` tinyint NOT NULL,
  `UnitID` tinyint NOT NULL,
  `AdministrativeName` tinyint NOT NULL,
  `AdministrativeType` tinyint NOT NULL,
  `AdministrativeID` tinyint NOT NULL,
  `ParkName` tinyint NOT NULL,
  `ParkID` tinyint NOT NULL
) ENGINE=MyISAM */;
SET character_set_client = @saved_cs_client;

--
-- Temporary table structure for view `viewinoutrecord`
--

DROP TABLE IF EXISTS `viewinoutrecord`;
/*!50001 DROP VIEW IF EXISTS `viewinoutrecord`*/;
SET @saved_cs_client     = @@character_set_client;
SET character_set_client = utf8;
/*!50001 CREATE TABLE `viewinoutrecord` (
  `RecordID` tinyint NOT NULL,
  `LocationID` tinyint NOT NULL,
  `EnterTime` tinyint NOT NULL,
  `LeaveTime` tinyint NOT NULL,
  `EnterPlate` tinyint NOT NULL,
  `LeavePlate` tinyint NOT NULL,
  `EnterImage` tinyint NOT NULL,
  `LeaveImage` tinyint NOT NULL,
  `Prepayment` tinyint NOT NULL,
  `Payment` tinyint NOT NULL,
  `PrepaymentOperator` tinyint NOT NULL,
  `PrepaymentTime` tinyint NOT NULL,
  `PaymentOperator` tinyint NOT NULL,
  `PaymentTime` tinyint NOT NULL
) ENGINE=MyISAM */;
SET character_set_client = @saved_cs_client;

--
-- Temporary table structure for view `viewwholefeerecordquery`
--

DROP TABLE IF EXISTS `viewwholefeerecordquery`;
/*!50001 DROP VIEW IF EXISTS `viewwholefeerecordquery`*/;
SET @saved_cs_client     = @@character_set_client;
SET character_set_client = utf8;
/*!50001 CREATE TABLE `viewwholefeerecordquery` (
  `RecordID` tinyint NOT NULL,
  `Prepayment` tinyint NOT NULL,
  `Payment` tinyint NOT NULL,
  `PrepaymentOperator` tinyint NOT NULL,
  `PrepaymentTime` tinyint NOT NULL,
  `PaymentTime` tinyint NOT NULL,
  `PaymentOperator` tinyint NOT NULL,
  `PrepaymentUserID` tinyint NOT NULL,
  `PaymentUserID` tinyint NOT NULL,
  `LocationID` tinyint NOT NULL,
  `UnitName` tinyint NOT NULL,
  `UnitID` tinyint NOT NULL,
  `AdministrativeName` tinyint NOT NULL,
  `AdministrativeType` tinyint NOT NULL,
  `AdministrativeID` tinyint NOT NULL,
  `ParkName` tinyint NOT NULL,
  `ParkID` tinyint NOT NULL
) ENGINE=MyISAM */;
SET character_set_client = @saved_cs_client;

--
-- Temporary table structure for view `viewwholeinoutrecordquery`
--

DROP TABLE IF EXISTS `viewwholeinoutrecordquery`;
/*!50001 DROP VIEW IF EXISTS `viewwholeinoutrecordquery`*/;
SET @saved_cs_client     = @@character_set_client;
SET character_set_client = utf8;
/*!50001 CREATE TABLE `viewwholeinoutrecordquery` (
  `RecordID` tinyint NOT NULL,
  `LocationID` tinyint NOT NULL,
  `EnterTime` tinyint NOT NULL,
  `LeaveTime` tinyint NOT NULL,
  `EnterPlate` tinyint NOT NULL,
  `LeavePlate` tinyint NOT NULL,
  `EnterImage` tinyint NOT NULL,
  `LeaveImage` tinyint NOT NULL,
  `Prepayment` tinyint NOT NULL,
  `Payment` tinyint NOT NULL,
  `PrepaymentOperator` tinyint NOT NULL,
  `PrepaymentTime` tinyint NOT NULL,
  `PaymentOperator` tinyint NOT NULL,
  `PaymentTime` tinyint NOT NULL
) ENGINE=MyISAM */;
SET character_set_client = @saved_cs_client;

--
-- Temporary table structure for view `viewwholelogrecordquery`
--

DROP TABLE IF EXISTS `viewwholelogrecordquery`;
/*!50001 DROP VIEW IF EXISTS `viewwholelogrecordquery`*/;
SET @saved_cs_client     = @@character_set_client;
SET character_set_client = utf8;
/*!50001 CREATE TABLE `viewwholelogrecordquery` (
  `LogID` tinyint NOT NULL,
  `LogInfo` tinyint NOT NULL,
  `LogDateTime` tinyint NOT NULL
) ENGINE=MyISAM */;
SET character_set_client = @saved_cs_client;

--
-- Temporary table structure for view `viewwholeuserloginoutrecordquery`
--

DROP TABLE IF EXISTS `viewwholeuserloginoutrecordquery`;
/*!50001 DROP VIEW IF EXISTS `viewwholeuserloginoutrecordquery`*/;
SET @saved_cs_client     = @@character_set_client;
SET character_set_client = utf8;
/*!50001 CREATE TABLE `viewwholeuserloginoutrecordquery` (
  `LogID` tinyint NOT NULL,
  `LogUserID` tinyint NOT NULL,
  `LogTime` tinyint NOT NULL,
  `LogType` tinyint NOT NULL,
  `LogClientID` tinyint NOT NULL,
  `LogIP` tinyint NOT NULL
) ENGINE=MyISAM */;
SET character_set_client = @saved_cs_client;

--
-- Dumping events for database 'streetroadpark'
--

--
-- Dumping routines for database 'streetroadpark'
--
/*!50003 DROP FUNCTION IF EXISTS `GetLocationIDByDetectorID` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,STRICT_ALL_TABLES,NO_ZERO_IN_DATE,NO_ZERO_DATE,ALLOW_INVALID_DATES,ERROR_FOR_DIVISION_BY_ZERO,TRADITIONAL,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`root`@`localhost` FUNCTION `GetLocationIDByDetectorID`( strID char( 16 ) ) RETURNS char(16) CHARSET utf8
BEGIN
	declare strLocationID char( 16 ) DEFAULT null;

	select ReceiverDetectorID into strLocationID 
	 from TabDetectorInfo where DetectorID = Right( strID, 3 );

RETURN strLocationID;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `DeviceRecord` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,STRICT_ALL_TABLES,NO_ZERO_IN_DATE,NO_ZERO_DATE,ALLOW_INVALID_DATES,ERROR_FOR_DIVISION_BY_ZERO,TRADITIONAL,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`root`@`localhost` PROCEDURE `DeviceRecord`( inout txtXml LONGTEXT, inout nFlag TINYINT )
EXITBODY:
BEGIN
	#<Data><Device><DeviceID/><StartTime/><EndTime/><SN/><Comments/><UnitID/><Operator/></Device><Accessor/><Data>
	#<Data><Value/></Data>
	# ( '','','' ), ( '', '', '' )

	declare strValues LONGTEXT default ExtractValue( txtXml, '/Data/Value' );
	declare strSQL LONGTEXT default null;

	if ( ISNULL( strValues ) || 0 = LENGTH( strValues ) ) then
		set txtXml = '{"Message":"SQL语句为空。"}';
		set nFlag = -1;
		LEAVE EXITBODY;
	end if;

	if ( 1 = nFlag ) then  #Register
		SET strSQL = CONCAT( "<Data><SQL>Replace into TabDeviceRegisterInfo( DeviceID, StartTime, EndTime, SerialNumber, UnitID, DeviceComments, Register )
							   Values ", strValues, "</SQL></Data>" );
	else if ( 0 = nFlag ) then #Unregister
			SET strSQL = CONCAT( "<Data><SQL>INSERT Into TabDeviceRegisterInfo( DeviceID, Unregister ) Values ",
								 strValues, " on Duplicate key Update Unregister = VALUES( Unregister ), DeviceState = 'Unavailable'</SQL></Data>" );
		end if;
	end if;

	CALL ExecuteSQL( strSQL, nFlag );
	
	INSERT INTO TabLogInfo( LogInfo, LogDateTime ) VALUES( CONCAT( txtXml, ' SP:DeviceRecord' ), NOW( ) );
	set txtXml = CONCAT( '设备', IF ( 0 != nFlag, '注册。', '注销。' ), '成功。' );
	
END EXITBODY ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `ExecuteSQL` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,STRICT_ALL_TABLES,NO_ZERO_IN_DATE,NO_ZERO_DATE,ALLOW_INVALID_DATES,ERROR_FOR_DIVISION_BY_ZERO,TRADITIONAL,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`root`@`localhost` PROCEDURE `ExecuteSQL`( inout txtXml LONGTEXT, inout nFlag TINYINT )
EXITBODY:
BEGIN
	#<Data><SQL/><Accessor/><Data>
	declare strSQL LONGTEXT default ExtractValue( txtXml, 'Data/SQL' );

	if ( ISNULL( strSQL ) || 0 = LENGTH( strSQL ) ) then
		set txtXml = '{"Message":"SQL语句为空。"}';
		set nFlag = -1;
		LEAVE EXITBODY;
	end if;

	SET @STMTSQL = strSQL;
	set @Result = null;

	PREPARE STMT FROM @STMTSQL;
	EXECUTE STMT;
	DEALLOCATE PREPARE STMT;

	INSERT INTO TabLogInfo( LogInfo, logDateTime ) VALUES( CONCAT( txtXml, ' SP:ExecuteSQL' ), NOW( ) );
	set txtXml = @Result;
	
END EXITBODY ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `GroupRecord` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,STRICT_ALL_TABLES,NO_ZERO_IN_DATE,NO_ZERO_DATE,ALLOW_INVALID_DATES,ERROR_FOR_DIVISION_BY_ZERO,TRADITIONAL,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`root`@`localhost` PROCEDURE `GroupRecord`( inout txtXml LONGTEXT, inout nFlag TINYINT )
EXITBODY:
BEGIN
	#<Data><UnitID/><Accessor/><Data>

	declare strUnitID VARCHAR( 9 ) default ExtractValue( txtXml, '/Data/UnitID' );

	if ( ISNULL( strUnitID ) || 0 = LENGTH( strUnitID ) ) then
		set txtXml = '{"Message":"公司机构代码为空。"}';
		set nFlag = -1;
		LEAVE EXITBODY;
	end if;

	#set strSQL = CONCAT( 'Select GroupID, GroupName, GroupRight From TabGroupInfo Where UnitID = ', strUnitID );

	#CALL ExecuteSQL( strSQL, nFlag );
	

	INSERT INTO TabLogInfo( LogInfo, logDateTime ) VALUES( CONCAT( txtXml, ' SP:GroupRecord' ), NOW( ) );
	set txtXml = ( Select CONCAT( '{"List":[',
											   GROUP_CONCAT( CONCAT( '{"GroupID":"',GroupID,'"' ),
													         CONCAT( ',"GroupName":"', GroupName, '"' ),
															 CONCAT( ',"GroupRight":"', GroupRight, '"}' ) ), ']}' ) 
				   From TabGroupInfo Where UnitID = strUnitID );

	if ( txtXml is null ) then
		set txtXml = CONCAT( '{"Message":"查询无记录数据。"}' );
		set nFlag = -1;
	end if;
	
END EXITBODY ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `MaintainDb` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,STRICT_ALL_TABLES,NO_ZERO_IN_DATE,NO_ZERO_DATE,ALLOW_INVALID_DATES,ERROR_FOR_DIVISION_BY_ZERO,TRADITIONAL,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`root`@`localhost` PROCEDURE `MaintainDb`(  in nFlag TINYINT )
EXITBODY:
BEGIN
	# show warnings;
	# show errors;
	case nFlag
		when 0 then Call TransferTmpRecord2History( ); #Temp record to history record
		when 1 then Call MaintainInOutRecord( 5 ); # 保留最近5天的数据，不考虑时间
		when 2 then Call MaintainHistoryInOutRecord( 365 ); #保留最近1年的数据，不考虑时间
	end case;
	
END EXITBODY ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `MaintainHistoryInOutRecord` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,STRICT_ALL_TABLES,NO_ZERO_IN_DATE,NO_ZERO_DATE,ALLOW_INVALID_DATES,ERROR_FOR_DIVISION_BY_ZERO,TRADITIONAL,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`root`@`localhost` PROCEDURE `MaintainHistoryInOutRecord`( in nDay int unsigned )
EXITBODY:
BEGIN
	Delete From TabHistoryInOutRecordInfo Where Date( EnterTime ) < DATE_SUB( CURDATE( ), INTERVAL nDay DAY );
	INSERT INTO TabLogInfo( LogInfo, logDateTime ) VALUES( CONCAT( '定时维护历史记录数据 ', ' SP:MaintainHistoryInOutRecord' ), NOW( ) );
END EXITBODY ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `MaintainInOutRecord` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,STRICT_ALL_TABLES,NO_ZERO_IN_DATE,NO_ZERO_DATE,ALLOW_INVALID_DATES,ERROR_FOR_DIVISION_BY_ZERO,TRADITIONAL,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`root`@`localhost` PROCEDURE `MaintainInOutRecord`( in nDay int unsigned )
EXITBODY:
BEGIN
	#ADDDATE ADDTIME DATE_ADD DATE_SUB 
	Delete From TabInOutRecordInfo Where Date( EnterTime ) < DATE_SUB( CURDATE( ), INTERVAL nDay DAY );
	INSERT INTO TabLogInfo( LogInfo, logDateTime ) VALUES( CONCAT( '定时维护进出记录数据 ', ' SP:MaintainInOutRecord' ), NOW( ) );
END EXITBODY ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `QueryCommonRecord` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,STRICT_ALL_TABLES,NO_ZERO_IN_DATE,NO_ZERO_DATE,ALLOW_INVALID_DATES,ERROR_FOR_DIVISION_BY_ZERO,TRADITIONAL,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`root`@`localhost` PROCEDURE `QueryCommonRecord`( inout txtXml LONGTEXT, inout nFlag TINYINT )
EXITBODY:
BEGIN
	#<Data><DataType/></Data> 获取各种记录数据
	
	declare strDataType VARCHAR( 45 ) default ExtractValue( txtXml, '/Data/DataType' );

	if ( ISNULL( strDataType ) || 0 = LENGTH( strDataType ) ) then
		set txtXml = '{"Message":"请求数据类型为空。"}';
		set nFlag = -1;
		LEAVE EXITBODY; 
	end if;

	INSERT INTO TabLogInfo( LogInfo, logDateTime ) VALUES( CONCAT( txtXml, ' SP:QueryCommonRecord' ), NOW( ) );

	if ( UPPER( strDataType ) = 'UNITINFO' ) then #公司信息 UnitInfo
		Select CONCAT( '{"List":[',
						   GROUP_CONCAT( CONCAT( '{"UnitID":"', UnitID, '"' ),
										 CONCAT( ',"UnitName":"', UnitName, '"'),
										 CONCAT( ',"UnitAddress":"', IFNULL( UnitAddress, '' ), '"}' ) ), ']}' )
			into txtXml From TabUnitInfo;
	elseif ( UPPER( strDataType ) = '' ) then
		set nFlag = -1;
	elseif ( UPPER( strDataType ) = '' ) then
		set nFlag = -1;
	else 
		set txtXml = CONCAT( '{"Message":"无效数据类请求。【', strDataType, '】"}' );
		set nFlag = -1;
	end if;

	if ( txtXml is null ) then
		set txtXml = CONCAT( '{"Message":"查询无记录数据。"}' );
		set nFlag = -1;
	end if;

END EXITBODY ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `QueryConfigRecord` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,STRICT_ALL_TABLES,NO_ZERO_IN_DATE,NO_ZERO_DATE,ALLOW_INVALID_DATES,ERROR_FOR_DIVISION_BY_ZERO,TRADITIONAL,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`root`@`localhost` PROCEDURE `QueryConfigRecord`( inout txtXml LONGTEXT, inout nFlag TINYINT )
EXITBODY:
BEGIN
	#<Data><DeviceID/></Data>
	
	declare strDeviceID VARCHAR( 45 ) default ExtractValue( txtXml, '/Data/DeviceID' );
	declare curDateTime DATETIME default now( );
	declare strSQL TEXT default '';

	if ( ISNULL( strDeviceID ) || 0 = LENGTH( strDeviceID ) ) then
		set txtXml = '{"Message":"设备号为空。"}';
		set nFlag = -1;
		LEAVE EXITBODY; 
	end if;

	if ( not Exists ( Select DeviceID from TabDeviceRegisterInfo where DeviceID = strDeviceID ) ) then
		set txtXml = CONCAT( '{"Message":"设备【', strDeviceID, '】未注册。"}' );
		set nFlag = -1;
		LEAVE EXITBODY;
	end if;

	if ( not Exists ( Select DeviceID from TabDeviceRegisterInfo where DeviceID = strDeviceID and DeviceState = 'Available' ) ) then
		set txtXml = CONCAT( '{"Message":"设备【', strDeviceID, '】已被注销。"}' );
		set nFlag = -1;
		LEAVE EXITBODY;
	end if;

	if ( not Exists ( Select DeviceID from TabDeviceRegisterInfo where DeviceID = strDeviceID and 
		 DeviceState = 'Available' and ( StartTime <= curDateTime and curDateTime <= EndTime ) ) ) then
		set txtXml = CONCAT( '{"Message":"设备【', strDeviceID, '】已过期。"}' );
		set nFlag = -1;
		LEAVE EXITBODY;
	end if;

	if ( not Exists ( Select DeviceID from TabDeviceRegisterInfo where DeviceID = strDeviceID and 
		 DeviceState = 'Available' and ( StartTime <= curDateTime and curDateTime <= EndTime )
		and UnitID is not null ) ) then
		set txtXml = CONCAT( '{"Message":"设备【', strDeviceID, '】无归属公司。"}' );
		set nFlag = -1;
		LEAVE EXITBODY;
	end if;

	if ( not Exists ( Select DeviceID from TabDeviceRegisterInfo where DeviceID = strDeviceID and 
		 DeviceState = 'Available' and ( StartTime <= curDateTime and curDateTime <= EndTime )
		and UnitID is not null and SerialNumber is not null ) ) then
		set txtXml = CONCAT( '{"Message":"设备【', strDeviceID, '】序列号无效。"}' );
		set nFlag = -1;
		LEAVE EXITBODY;
	end if;

	INSERT INTO TabLogInfo( LogInfo, logDateTime ) VALUES( CONCAT( txtXml, ' SP:QueryConfigRecord' ), NOW( ) );
	Select CONCAT( '{"List":[',
						   GROUP_CONCAT( CONCAT( '{"DeviceID":"', DeviceID, '"' ),
										 CONCAT( ',"UnitID":"', UnitID, '"'),
										 CONCAT( ',"UnitName":"', UnitName, '"'),
										 CONCAT( ',"ParkID":"', ParkID, '"'),
										 CONCAT( ',"ParkName":"', ParkName, '"'),
										 CONCAT( ',"ReceiverID":"', ReceiverID, '"'),
										 CONCAT( ',"ReceiverName":"', ReceiverName, '"}' ) ), ']}' )
			into txtXml From ViewConfigInfo Where DeviceID = strDeviceID; 

	if ( txtXml is null ) then
		set txtXml = CONCAT( '{"Message":"查询无记录数据。"}' );
		set nFlag = -1;
	end if;
	
END EXITBODY ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `QueryImageRecord` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,STRICT_ALL_TABLES,NO_ZERO_IN_DATE,NO_ZERO_DATE,ALLOW_INVALID_DATES,ERROR_FOR_DIVISION_BY_ZERO,TRADITIONAL,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`root`@`localhost` PROCEDURE `QueryImageRecord`( inout txtXml LONGTEXT, inout nFlag TINYINT )
EXITBODY:
BEGIN
	#<Data><RecordID/></Data>
	
	declare strRecordID VARCHAR( 45 ) default ExtractValue( txtXml, '/Data/RecordID' );

	declare strSQL TEXT default '';

	if ( ISNULL( strRecordID ) || 0 = LENGTH( strRecordID ) ) then
		set txtXml = '{"Message":"记录号为空。"}';
		set nFlag = -1;
		LEAVE EXITBODY;
	end if;

	Select CONCAT( '{"List":[',
						   GROUP_CONCAT( CONCAT( '{"RecordID":"', RecordID,'"' ),
										 CONCAT( ',"EnterImage":"', TO_BASE64( EnterImage ), '"'),
										 CONCAT( ',"LeaveImage":"', TO_BASE64( LeaveImage ), '"}' ) ), ']}' )
			into txtXml From ViewInOutRecord Where RecordID = strRecordID; 

	INSERT INTO TabLogInfo( LogInfo, LogDateTime ) VALUES( ' SP:QueryImageRecord', NOW( ) );

	if ( txtXml is null ) then
		set txtXml = CONCAT( '{"Message":"查询无记录数据。"}' );
		set nFlag = -1;
	end if;
	
END EXITBODY ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `QueryInOutRecord` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,STRICT_ALL_TABLES,NO_ZERO_IN_DATE,NO_ZERO_DATE,ALLOW_INVALID_DATES,ERROR_FOR_DIVISION_BY_ZERO,TRADITIONAL,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`root`@`localhost` PROCEDURE `QueryInOutRecord`( inout txtXml LONGTEXT, inout nFlag TINYINT )
EXITBODY:
BEGIN
	#<Data><LocationID/><EnterStartTime/><EnterEndTime/><LeaveStartTime/><LeaveEndTime/><Plate/><Operator/><Limit/></Data>
	# group_concat_max_len max_allowed_packet

	declare strLocationID VARCHAR( 45 ) default ExtractValue( txtXml, '/Data/LocationID' );
	declare strEnterStartTime VARCHAR( 45 ) default ExtractValue( txtXml, '/Data/EnterStartTime' );
	declare strEnterEndTime VARCHAR( 45 ) default ExtractValue( txtXml, '/Data/EnterEndTime' );
	declare strLeaveStartTime VARCHAR( 45 ) default ExtractValue( txtXml, '/Data/LeaveStartTime' );
	declare strLeaveEndTime VARCHAR( 45 ) default ExtractValue( txtXml, '/Data/LeaveEndTime' );
	declare strPlate VARCHAR( 45 ) default ExtractValue( txtXml, '/Data/Plate' );
	declare strOperator VARCHAR( 45 ) default ExtractValue( txtXml, '/Data/Operator' );
	declare strLimit VARCHAR( 45 ) default ExtractValue( txtXml, '/Data/Limit' );
	declare strImage VARCHAR( 1 ) default ExtractValue( txtXml, '/Data/IncludedImage' );

	declare bImage boolean default TRUE;
	declare strSQL LONGTEXT default '';

	select GetLocationIDByDetectorID( strLocationID ) into strLocationID;

	if ( ISNULL( strLocationID ) || 0 = LENGTH( strLocationID ) ) then
		set txtXml = '{"Message":"车位号为空。"}';
		set nFlag = -1;
		LEAVE EXITBODY;
	end if;

	if ( 0 = LENGTH( strImage ) || '0' = strImage ) then
		set bImage = FALSE;
	end if;

	set strSQL = '<Data><SQL>Select CONCAT( \'{"List":[\',
											   GROUP_CONCAT( CONCAT( \'{"RecordID":"\',RecordID,\'"\' ),
															 CONCAT( \',"LocationID":"\',LocationID,\'"\' ),
													         CONCAT( \',"EnterTime":"\', EnterTime, \'"\' ),
															 CONCAT( \',"LeaveTime":"\', LeaveTime, \'"\' ),
															 CONCAT( \',"EnterPlate":"\', EnterPlate, \'"\'),
															 CONCAT( \',"LeavePlate":"\', LeavePlate, \'"\'),';

	if ( bImage ) then
		set strSQl = CONCAT( strSQL, 'CONCAT( \',"EnterImage":"\', TO_BASE64( EnterImage ), \'"\'),
															 CONCAT( \',"LeaveImage":"\', TO_BASE64( LeaveImage ), \'"\'),' );
	end if;
	
		set strSQl = CONCAT( strSQL, 'CONCAT( \',"Prepayment":"\', Prepayment, \'"\'),
															 CONCAT( \',"PrepaymentOperator":"\', PrepaymentOperator, \'"\'),
															 CONCAT( \',"PrepaymentTime":"\', PrepaymentTime, \'"\'),
															 CONCAT( \',"Payment":"\', Payment, \'"\'),
															 CONCAT( \',"PaymentOperator":"\', PaymentOperator, \'"\'),
															 CONCAT( \',"PaymentTime":"\', PaymentTime, \'"}\' ) ), \']}\' ) 
				   into @Result From ( Select * from ViewInOutRecord Where LocationID =  \'', strLocationID, '\'' );


	if ( 0 <> LENGTH( strEnterStartTime )  && 0 <> LENGTH( strEnterEndTime ) ) then
		set strSQL = CONCAT( strSQL, ' and EnterTime between \'', strEnterStartTime, '\' and \'',  strEnterEndTime, '\'' );
	end if;

	if ( 0 <> LENGTH( strLeaveStartTime )  && 0 <> LENGTH( strLeaveEndTime ) ) then
		set strSQL = CONCAT( strSQL, ' and LeaveTime between \'', strLeaveStartTime, '\' and \'',  strLeaveEndTime, '\'' );
	end if;

	if ( 0 <> LENGTH( strPlate ) ) then
		set strSQL = CONCAT( strSQL, ' and ( EnterPlate = \'', strPlate, '\' or LeavePlate = \'',  strPlate, '\' )' );
	end if;

	if ( 0 <> LENGTH( strOperator )  ) then
		set strSQL = CONCAT( strSQL, ' and ( PrepaymentOperator = \'', strOperator, '\' or PaymentOperator = \'',  strOperator, '\' )' );
	end if;

	if ( 0 = LENGTH( strLimit ) || '0' = strLimit ) then
		set strOperator = '1';	
	end if;

	set strSQL = CONCAT( strSQL, ' limit ', strLimit, ' ) a</SQL></Data>' );

	INSERT INTO TabLogInfo( LogInfo, LogDateTime ) VALUES( CONCAT( txtXml, ' SP:QueryInOutRecord' ), NOW( ) );
	#set @Result = 'Test';
	CALL ExecuteSQL( strSQL, nFlag );

	set txtXml = strSQL;
	set nFlag = 1;

	if ( txtXml is null ) then
		set txtXml = CONCAT( '{"Message":"查询无记录数据。"}' );
		set nFlag = -1;
	end if;
	
END EXITBODY ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `QueryReportRecord` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,STRICT_ALL_TABLES,NO_ZERO_IN_DATE,NO_ZERO_DATE,ALLOW_INVALID_DATES,ERROR_FOR_DIVISION_BY_ZERO,TRADITIONAL,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`root`@`localhost` PROCEDURE `QueryReportRecord`( inout txtXml LONGTEXT, inout nFlag TINYINT )
EXITBODY:
BEGIN
	#<Data><UnitID/><ParkID/><PaymentStartTime/><PaymentEndTime/></Data>
	
	declare strUnitID VARCHAR( 45 ) default ExtractValue( txtXml, '/Data/UnitID' );
	declare strParkID VARCHAR( 45 ) default ExtractValue( txtXml, '/Data/ParkID' );
	declare strPaymentStartTime VARCHAR( 45 ) default ExtractValue( txtXml, '/Data/PaymentStartTime' );
	declare strPaymentEndTime VARCHAR( 45 ) default ExtractValue( txtXml, '/Data/PaymentEndTime' );

	declare strSQL TEXT default '';
	declare strWhere TEXT default '';

	if ( 0 <> LENGTH( strUnitID ) ) then
		set strSQL = CONCAT( ' UnitID = \'', strUnitID, '\'' );
	end if;
	
	if ( 0 <> LENGTH( strParkID ) ) then
		set strSQL = CONCAT( IF( 0 = LENGTH( strSQL ), '', CONCAT( strSQL, ' and ' ) ), ' ParkID = \'', strParkID, '\'' );
	end if;

	if ( 0 <> LENGTH( strPaymentStartTime ) ) then
		set strSQL = CONCAT( IF( 0 = LENGTH( strSQL ), '', CONCAT( strSQL, ' and ' ) ), ' PaymentTime between \'', 
							 strPaymentStartTime, '\' and \'', 
							 IF( 0 <> LENGTH( strPaymentEndTime ), 
								strPaymentEndTime, NOW( ) ), '\'' );
	end if;

	if ( 0 <> LENGTH( strSQL ) ) then
		set strSQL = CONCAT( ' Where ', strSQL );
	end if;

	set strSQL = CONCAT( '<Data><SQL>Select CONCAT( \'{"List":[\',
						   GROUP_CONCAT( CONCAT( \'{"UnitName":"\', IFNULL( UnitName, \'\' ), \'"\' ),
										 CONCAT( \',"ParkName":"\', IFNULL( ParkName, \'\' ), \'"\'),
										 CONCAT( \',"PaymentOperator":"\', IFNULL( PaymentOperator, \'\' ), \'"\'),
										 CONCAT( \',"PaymentTotal":"\', PaymentTotal, \'"}\' ) ), \']}\' )
			 into @Result From ( select UnitName, ParkName, PaymentOperator, sum( Payment ) as 
			PaymentTotal from ViewFeeInfo ', IF( 0 = LENGTH( strSQL ), '', strSQL ), 
					' Group by UnitName, ParkName, PaymentOperator with rollup ) Total</SQL></Data>' );


	INSERT INTO TabLogInfo( LogInfo, LogDateTime ) VALUES( CONCAT( txtXml, ' SP:GetReportRecord' ), NOW( ) );
	#set @Result = 'Test';
	CALL ExecuteSQL( strSQL, nFlag );

	set txtXml = strSQL;
	set nFlag = 1;

	if ( txtXml is null ) then
		set txtXml = CONCAT( '{"Message":"查询无记录数据。"}' );
		set nFlag = -1;
	end if;
	
END EXITBODY ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `SensorRecord` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,STRICT_ALL_TABLES,NO_ZERO_IN_DATE,NO_ZERO_DATE,ALLOW_INVALID_DATES,ERROR_FOR_DIVISION_BY_ZERO,TRADITIONAL,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`root`@`localhost` PROCEDURE `SensorRecord`( inout txtXml LONGTEXT, inout nFlag TINYINT )
EXITBODY:
BEGIN
	#IP@ClientID@Serial@Credit@Type
	#<Data><LocationID/><DateTime/><Accessor/><Data>
	declare curDateTime DATETIME default CONVERT( ExtractValue( txtXml, 'Data/DateTime' ), DATETIME );
	declare strLocationID VARCHAR( 16 ) default ExtractValue( txtXml, 'Data/LocationID' );
	declare nRecordID bigint unsigned default null;

	if ( ISNULL( strLocationID ) || 0 = LENGTH( strLocationID ) ) then
		set txtXml = '{"Message":"车位号为空。"}';
		set nFlag = -1;
		LEAVE EXITBODY;
	end if;

	select RecordID into nRecordID from TabLocationHaveCarInfo where LocationID = strLocationID;

	if ( 1 = nFlag ) then -- Enter
		if ( nRecordID is not null  ) then
			Set nFlag = 2; -- entered
			set txtXml = '{"Message":"该车位已有车。"}';
			Leave EXITBODY;
		end if;

		-- First enter
		start transaction;
		insert into TabInOutRecordInfo( LocationID, EnterTime ) VALUES( strLocationID, curDateTime );
		set nRecordID = LAST_INSERT_ID( );
		Insert into TabLocationHaveCarInfo( LocationID, EnterTime, RecordID ) Values( strLocationID, curDateTime, LAST_INSERT_ID( ) );
		commit;
	else if ( 0 = nFlag ) then -- Leave
			if ( ( nRecordID is null ) or -- tablet left
				 ( exists ( select LeaveTime from TabInOutRecordInfo where RecordID = nRecordID and LeaveTime is not NULL ) )  ) then -- sensor left
				Set nFlag = 3; -- left
				set txtXml = '{"Message":"该车位已无车。"}';
				Leave EXITBODY;
			end if;

			start transaction;
			update TabInOutRecordInfo set LeaveTime = curDateTime where RecordID = nRecordID;
			update TabLocationHaveCarInfo set LeaveTime = curDateTime where LocationID = strLocationID;
			commit;
		end if;
	end if;

	INSERT INTO TabLogInfo( LogInfo, logDateTime ) VALUES( CONCAT( txtXml, ' SP:SensorRecord' ), NOW( ) );

	if ( 1 = nFlag ) then -- Enter
		set txtXml = ( select CONCAT( '{', 
						GROUP_CONCAT( CONCAT( '"LocationID":"', LocationID, '",' ),
									  CONCAT( '"State":"', CONVERT( nFlag, CHAR ), '",' ),
									  CONCAT( '"RecordID":"', CONVERT( nRecordID, CHAR ), '",' ),
									  CONCAT( '"EnterTime":"', EnterTime, '"' ) ) 
						,"}" ) from tablocationhavecarinfo where LocationID = strLocationID );
	else if ( 0 = nFlag ) then -- Leave
			set txtXml = ( select CONCAT( '{', 
					GROUP_CONCAT( CONCAT( '"LocationID":"', LocationID, '",' ),
								  CONCAT( '"State":"', CONVERT( nFlag, CHAR ), '",' ),
								  CONCAT( '"RecordID":"', CONVERT( nRecordID, CHAR ), '",' ),
								  CONCAT( '"Prepayment":"', Prepayment, '",' ),
								  CONCAT( '"EnterTime":"', EnterTime, '",' ),
								  CONCAT( '"LeaveTime":"', IFNULL( LeaveTime, '' ), '"' ) )
					,"}" ) from tablocationhavecarinfo where LocationID = strLocationID );
		end if;
	end if;
	
END EXITBODY ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `TabletManualRecord` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,STRICT_ALL_TABLES,NO_ZERO_IN_DATE,NO_ZERO_DATE,ALLOW_INVALID_DATES,ERROR_FOR_DIVISION_BY_ZERO,TRADITIONAL,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`root`@`localhost` PROCEDURE `TabletManualRecord`( inout txtXml LONGTEXT, inout nFlag TINYINT )
EXITBODY:
BEGIN

	#ExtractValue( '<Data><a>test</a></Record>', 'Data/a' );
	# strRecord <Data><LocationID/><Plate>川A12345</Plate><Pay>10</Pay><Operator>张三</Operaor><Time>2013-03-15 12:12:34</Time><Image/></Data>
	declare strLocationID VARCHAR( 16 ) default ExtractValue( txtXml, 'Data/LocationID' );
	declare strPlate VARCHAR( 45 ) default ExtractValue( txtXml, 'Data/Plate' );
	declare strPay VARCHAR( 45 ) default ExtractValue( txtXml, 'Data/Pay' );
	declare strOperator VARCHAR( 45 ) default ExtractValue( txtXml, 'Data/Operator' );
	declare strTime VARCHAR( 45 ) default ExtractValue( txtXml, 'Data/Time' );
	declare image LONGBLOB default FROM_BASE64( ExtractValue( txtXml, 'Data/Image' ) );
	declare nUserID BIGINT UNSIGNED default ExtractValue( txtXml, '/Data/UserID' );
	declare strSensorTime VARCHAR( 45 ) default ExtractValue( txtXml, 'Data/SensorTime' );
	declare nRecordID BIGINT UNSIGNED default null;

	select GetLocationIDByDetectorID( strLocationID ) into strLocationID;

	if ( ISNULL( strLocationID ) ||　0 = LENGTH( strLocationID ) ) then
		set txtXml = '{"Message":"车位号为空。"}';
		set nFlag = -1;
		LEAVE EXITBODY;
	end if;

	select RecordID into nRecordID from TabLocationHaveCarInfo where LocationID = strLocationID;
	
	if ( 1 = nFlag ) then -- Enter
		if ( nRecordID is null  ) then
			start transaction;
			insert into TabInOutRecordInfo( LocationID, EnterTime, EnterPlate ) VALUES( 
											strLocationID, strSensorTime, strPlate );
			Insert into TabLocationHaveCarInfo( LocationID, EnterTime, RecordID, Prepayment ) Values( 
												strLocationID, strSensorTime, LAST_INSERT_ID( ), strPay );
			insert into TabInOutImageInfo ( RecordID, EnterImage, AddedTime ) values( nRecordID, image, DATE( strTime ) );
			insert into TabFeeInfo( RecordID, Prepayment, PrepaymentOperator, PrepaymentTime, PrepaymentUserID ) 
						   VALUES( nRecordID, strPay, strOperator, strTime, nUserID );					
			commit;
		else
			Set nFlag = -1; -- 有进入记录未处理
			set txtXml = '{"Message":"该车位有进入记录未被处理。"}';
			Leave EXITBODY;
		end if;
	else if ( 0 = nFlag ) then -- Leave
			if ( nRecordID is null  ) then
				Set nFlag = -1; -- 该车辆无进入记录
				set txtXml = '{"Message":"该车辆无进入记录。"}';
				Leave EXITBODY;
			end if;

			start transaction;
			delete from TabLocationHaveCarInfo where RecordID = nRecordID;

			update TabInOutRecordInfo set LeavePlate = strPlate, LeaveTime = strSensorTime where RecordID = nRecordID; -- 未知
			update TabInOutImageInfo set LeaveImage = image where RecordID = nRecordID;
			update TabFeeInfo set Payment = strPay, PaymentOperator = strOperator, 
							  PaymentTime = strTime, PaymentUserID = nUserID 
					where RecordID = nRecordID;
			commit;
		end if;
	end if;

	set txtXml = UpdateXML( txtXml, '/Data/Image', '<Image/>' );
	INSERT INTO TabLogInfo( LogInfo, logDateTime ) VALUES( CONCAT( txtXml, ' SP:TabletManualRecord' ), NOW( ) );
	set txtXml = CONCAT( '车辆', IF ( 0 != nFlag, '进入', '离开' ), '记录操作成功。' );
	#set txtXml = CONCAT( '{"LocationID":"', strLocationID, '", "State":"', CONVERT( nFlag, CHAR ), '"}' ); # RemoveRecord


END EXITBODY ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `TabletNormalRecord` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,STRICT_ALL_TABLES,NO_ZERO_IN_DATE,NO_ZERO_DATE,ALLOW_INVALID_DATES,ERROR_FOR_DIVISION_BY_ZERO,TRADITIONAL,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`root`@`localhost` PROCEDURE `TabletNormalRecord`( inout txtXml LONGTEXT, inout nFlag TINYINT )
EXITBODY:
BEGIN

	#ExtractValue( '<Data><a>test</a></Record>', 'Data/a' );
	# strRecord <Data><LocationID/><Plate>川A12345</Plate><Pay>10</Pay><Operator>张三</Operaor><Time>2013-03-15 12:12:34</Time><Image/></Data>
	declare strLocationID VARCHAR( 16 ) default ExtractValue( txtXml, 'Data/LocationID' );
	declare strPlate VARCHAR( 45 ) default ExtractValue( txtXml, 'Data/Plate' );
	declare strPay VARCHAR( 45 ) default ExtractValue( txtXml, 'Data/Pay' );
	declare strOperator VARCHAR( 45 ) default ExtractValue( txtXml, 'Data/Operator' );
	declare strTime VARCHAR( 45 ) default ExtractValue( txtXml, 'Data/Time' );
	declare image LONGBLOB default FROM_BASE64( ExtractValue( txtXml, 'Data/Image' ) );
	declare strUserID VARCHAR( 45 ) default ExtractValue( txtXml, '/Data/UserID' );

	declare strExistPlate VARCHAR( 45 ) default null;
	declare nRecordID BIGINT UNSIGNED default null;

	select GetLocationIDByDetectorID( strLocationID ) into strLocationID;

	if ( ISNULL( strLocationID ) || 0 = LENGTH( strLocationID ) ) then
		set txtXml = '{"Message":"车位号为空。"}';
		set nFlag = -1;
		LEAVE EXITBODY;
	end if;

	select RecordID into nRecordID from TabLocationHaveCarInfo where LocationID = strLocationID;

	if ( nRecordID is null  ) then
		set nFlag = -1; -- left
		set txtXml = '{"Message":"该车已离开记录已经被处理。"}';
		Leave EXITBODY;
	end if;
	
	if ( 1 = nFlag ) then -- Enter
begin
#declare EXIT HANDLER FOR SQLSTATE '23000' ROLLBACK;
		select EnterPlate into strExistPlate from TabInOutRecordInfo where RecordID = nRecordID and EnterPlate is not NULL;
		if ( strExistPlate is not null ) then #Exists( Select ... )
			set nFlag = -1; -- entered
			set txtXml = '{"Message":"该车进入记录已经被处理。"}';
			Leave EXITBODY;
		end if;

		start transaction;
		update TabInOutRecordInfo set EnterPlate = strPlate where RecordID = nRecordID; -- 未知
		insert into TabInOutImageInfo ( RecordID, EnterImage, AddedTime ) values( nRecordID, image, DATE( strTime ) );
		insert into TabFeeInfo( RecordID, Prepayment, PrepaymentOperator, PrepaymentTime, PrepaymentUserID ) 
						   VALUES( nRecordID, strPay, strOperator, strTime, strUserID );

		update TabLocationHaveCarInfo set Prepayment = strPay where LocationID = strLocationID;
		commit;
end;
	else if ( 0 = nFlag ) then -- Leave
begin
#declare EXIT HANDLER FOR SQLSTATE '23000' ROLLBACK;
			select LeavePlate into strExistPlate from TabInOutRecordInfo where RecordID = nRecordID and LeavePlate is not NULL;
			if ( strExistPlate is not null ) then
				set nFlag = -1; -- left
				set txtXml = '{"Message":"该车已离开记录已经被处理。"}';
				Leave EXITBODY;
			end if;

			start transaction;
			delete from TabLocationHaveCarInfo where RecordID = nRecordID;
			update TabInOutRecordInfo set LeavePlate = strPlate where RecordID = nRecordID; -- 未知
			update TabInOutImageInfo set LeaveImage = image where RecordID = nRecordID;
			update TabFeeInfo set Payment = strPay, PaymentOperator = strOperator, 
							  PaymentTime = strTime, PaymentUserID = strUserID 
					where RecordID = nRecordID;
			commit;
end;
		end if;
	end if;

	set txtXml = UpdateXML( txtXml, '/Data/Image', '<Image/>' );
	INSERT INTO TabLogInfo( LogInfo, logDateTime ) VALUES( CONCAT( txtXml, ' SP:TabletNormalRecord' ), NOW( ) );
	set txtXml = CONCAT( '{"LocationID":"', strLocationID, '", "State":"', CONVERT( nFlag, CHAR ), '"}' ); #RemoveRcord


END EXITBODY ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `TransferTmpRecord2History` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,STRICT_ALL_TABLES,NO_ZERO_IN_DATE,NO_ZERO_DATE,ALLOW_INVALID_DATES,ERROR_FOR_DIVISION_BY_ZERO,TRADITIONAL,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`root`@`localhost` PROCEDURE `TransferTmpRecord2History`(  )
EXITBODY:
BEGIN
	declare Exit /*continue undo 语句执行后采取的动作*/ 
		Handler for SQLEXCEPTION /*sqlstate, sqlwarning, not found, condition_name*/
		begin #出现满足的异常后，要执行的语句
			show warnings;
			rollback;
		end;

	#获取完整进出记录的RecordID
	Create temporary table if not exists TabRecordID
		( RecordID bigint unsigned NOT NULL, PRIMARY KEY (  RecordID ) ) ENGINE = InnoDB;
	delete From TabRecordID;
	Insert Into TabRecordID( RecordID ) 
			select RecordID From TabTmpInOutRecordInfo where LeavePlate is not null; #完整记录

	if ( 0 < ( select count( * ) from TabRecordID ) ) then
		start transaction;
			#进出信息
			INSERT INTO TabHistoryInOutRecordInfo ( RecordID, LocationID, EnterTime, LeaveTime, EnterPlate, LeavePlate )
				SELECT a.RecordID, LocationID, EnterTime, LeaveTime, EnterPlate, LeavePlate 
					From TabTmpInOutRecordInfo a, TabRecordID b
					Where a.RecordID = b.RecordID
			   ON DUPLICATE KEY UPDATE
				EnterTime = IFNULL( a.EnterTime, TabHistoryInOutRecordInfo.EnterTime ), LeaveTime = IFNULL( a.LeaveTime, TabHistoryInOutRecordInfo.LeaveTime ), 
				EnterPlate = IFNULL( a.EnterPlate, TabHistoryInOutRecordInfo.EnterPlate ), LeavePlate = IFNULL( a.LeavePlate, TabHistoryInOutRecordInfo.LeavePlate );

			#进出图像
			INSERT INTO TabHistoryInOutImageInfo( RecordID, EnterImage, LeaveImage, AddedTime ) 
				SELECT a.RecordID, EnterImage, LeaveImage, AddedTime 
					From TabTmpInOutImageInfo a, TabRecordID b
					Where a.RecordID = b.RecordID
			   ON DUPLICATE KEY UPDATE
				EnterImage = IFNULL( a.EnterImage, TabHistoryInOutImageInfo.EnterImage ), LeaveImage = IFNULL( a.LeaveImage, TabHistoryInOutImageInfo.LeaveImage );

			#收费信息
			INSERT INTO TabHistoryFeeInfo( RecordID, Prepayment, PrepaymentOperator, PrepaymentTime, PrepaymentUserID, 
										   Payment, PaymentOperator, PaymentTime, PaymentUserID ) 
				SELECT a.RecordID, Prepayment, PrepaymentOperator, PrepaymentTime, PrepaymentUserID, 
										   Payment, PaymentOperator, PaymentTime, PaymentUserID
					From TabTmpFeeInfo a, TabRecordID b
					Where a.RecordID = b.RecordID
			   ON DUPLICATE KEY UPDATE
				Prepayment = IFNULL( a.Prepayment, TabHistoryFeeInfo.Prepayment ), 
				PrepaymentOperator = IFNULL( a.PrepaymentOperator, TabHistoryFeeInfo.PrepaymentOperator ),
				PrepaymentTime = IFNULL( a.PrepaymentTime, TabHistoryFeeInfo.PrepaymentTime ),
				PrepaymentUserID = IFNULL( a.PrepaymentUserID, TabHistoryFeeInfo.PrepaymentUserID ),
				Payment = IFNULL( a.Payment, TabHistoryFeeInfo.Payment ),
				PaymentOperator = IFNULL( a.PaymentOperator, TabHistoryFeeInfo.PaymentOperator ),
				PaymentTime = IFNULL( a.PaymentTime, TabHistoryFeeInfo.PaymentTime ),
				PaymentUserID = IFNULL( a.PaymentUserID, TabHistoryFeeInfo.PaymentUserID );

			#删除进出记录数据，TabTmpInOutRecordInfo的删除触发器删除相关的图像预收费信息
			#Delete a.*, b.* From TabTmpInOutRecordInfo a, TabRecordID b where a.RecordID = b.RecordID; 注意语法
			Delete a.* From TabTmpInOutRecordInfo a, TabRecordID b where a.RecordID = b.RecordID;

			#日志
			INSERT INTO TabHistoryLogInfo ( LogID, LogInfo, LogDateTime )
				SELECT LogID, LogInfo, LogDateTime From TabTmpLogInfo;
			Delete From TabTmpLogInfo;

			#登录日志
			INSERT INTO TabHistoryUserLoginoutInfo ( LogID, LogUserID, LogTime, LogType, LogClientID, LogIP )
				SELECT LogID, LogUserID, LogTime, LogType, LogClientID, LogIP From TabTmpUserLoginoutInfo;
			Delete From TabTmpUserLoginoutInfo;
		commit;
	end if;

	INSERT INTO TabLogInfo( LogInfo, logDateTime ) VALUES( CONCAT( '定时转移进出记录数据 ', ' SP:TransferTmpRecord2History' ), NOW( ) );
END EXITBODY ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `UnhandledSensorRecord` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,STRICT_ALL_TABLES,NO_ZERO_IN_DATE,NO_ZERO_DATE,ALLOW_INVALID_DATES,ERROR_FOR_DIVISION_BY_ZERO,TRADITIONAL,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`root`@`localhost` PROCEDURE `UnhandledSensorRecord`( inout txtXml LONGTEXT, inout nFlag TINYINT )
EXITBODY:
BEGIN
	#IP@ClientID@Serial@Credit@Type
	#<Data><LocationID/><Accessor/><Data>
	declare strLocationID VARCHAR( 16 ) default ExtractValue( txtXml, 'Data/LocationID' );
	declare bAll boolean default FALSE;

	declare strIn LONGTEXT default null; 
	declare strOut LONGTEXT default null;
	declare nRecordID BIGINT UNSIGNED default null;
	declare dtLeaveTime DATETIME default null;
	declare strEnterPlate VARCHAR( 16 ) default null;
	declare strLeavePlate VARCHAR( 16 ) default null;

	select GetLocationIDByDetectorID( strLocationID ) into strLocationID;

	if ( ISNULL( strLocationID ) || 0 = LENGTH( strLocationID ) ) then
		set txtXml = '{"Message":"车位号为空。"}';
		set nFlag = -1;
		LEAVE EXITBODY;
	end if;

	set bAll = ( '0' = strLocationID );

	if ( bAll is FALSE ) then
		select RecordID into nRecordID from TabLocationHaveCarInfo where LocationID = strLocationID;
	else
		select count( RecordID ) into nRecordID from TabLocationHaveCarInfo;
	end if;

	if ( nRecordID is null || 0 = nRecordID ) then
		set txtXml = '{"Message":"没有未处理的传感器进出记录。"}';
		set nFlag = -1;
		LEAVE EXITBODY;
	end if;

	if ( bAll ) then
			if ( ( select count( * ) from TabInOutRecordInfo a, TabLocationHaveCarInfo b 
				   where a.RecordID =  b.RecordID and a.EnterPlate is null ) <> 0 ) then #平板未处理进入
				set strIn = ( select 
							GROUP_CONCAT( CONCAT( '{"LocationID":"', b.LocationID, '",' ),
										  CONCAT( '"State":"1",' ),
										  CONCAT( '"EnterTime":"', b.EnterTime, '"}' ) ) 
							 from TabInOutRecordInfo a, TabLocationHaveCarInfo b where a.RecordID =  b.RecordID and a.EnterPlate is null );
			end if;

			if ( ( select count( * ) from TabInOutRecordInfo a, TabLocationHaveCarInfo b  
					where a.RecordID =  b.RecordID and a.LeaveTime is not null and a.LeavePlate is null ) <> 0 ) then
				set strOut = ( select 
						GROUP_CONCAT( CONCAT( '{"LocationID":"', b.LocationID, '",' ),
									  CONCAT( '"State":"0",' ),
									  CONCAT( '"Prepayment":"', b.Prepayment, '",' ),
									  CONCAT( '"EnterTime":"', b.EnterTime, '",' ),
									  CONCAT( '"LeaveTime":"', IFNULL( b.LeaveTime, '' ), '"}' ) )
						from TabInOutRecordInfo a, TabLocationHaveCarInfo b 
						where a.RecordID =  b.RecordID and a.LeaveTime is not null 
							  and a.LeavePlate is null );
			end if;
	else
		begin
			select EnterPlate, LeavePlate, LeaveTime into strEnterPlate, strLeavePlate, dtLeaveTime 
			from TabInOutRecordInfo where RecordID =  nRecordID;

			if ( strEnterPlate is null ) then #平板未处理进入
				set strIn = ( select 
							GROUP_CONCAT( CONCAT( '{"LocationID":"', LocationID, '",' ),
										  CONCAT( '"State":"1",' ),
										  CONCAT( '"EnterTime":"', EnterTime, '"}' ) ) 
							 from TabLocationHaveCarInfo where LocationID = strLocationID );
			end if;
			
			if ( strLeavePlate is null and dtLeaveTime is not null ) then
				set strOut = ( select 
						GROUP_CONCAT( CONCAT( '{"LocationID":"', LocationID, '",' ),
									  CONCAT( '"State":"0",' ),
									  CONCAT( '"Prepayment":"', Prepayment, '",' ),
									  CONCAT( '"EnterTime":"', EnterTime, '",' ),
									  CONCAT( '"LeaveTime":"', IFNULL( LeaveTime, '' ), '"}' ) )
						from TabLocationHaveCarInfo where LocationID = strLocationID );
			end if;
		end;
	end if;


	if ( strIn is not null && strOut is not null ) then
		set txtXml = CONCAT( '{"List":[', strIn, ',', strOut, ']}' );
	elseif ( strIn is null ) then
			set txtXml = CONCAT( '{"List":[', strOut, ']}' );
	elseif ( strOut is null ) then
			set txtXml = CONCAT( '{"List":[', strIn, ']}' );
	end if;

	INSERT INTO TabLogInfo( LogInfo, logDateTime ) VALUES( CONCAT( txtXml, ' SP:UnhandledSensorRecord' ), NOW( ) );

	if ( txtXml is null ) then
		set txtXml = CONCAT( '{"Message":"查询无记录数据。"}' );
		set nFlag = -1;
	end if;
	
END EXITBODY ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `UploadInOutRecord` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,STRICT_ALL_TABLES,NO_ZERO_IN_DATE,NO_ZERO_DATE,ALLOW_INVALID_DATES,ERROR_FOR_DIVISION_BY_ZERO,TRADITIONAL,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`root`@`localhost` PROCEDURE `UploadInOutRecord`( inout txtXml LONGTEXT, inout nFlag TINYINT )
EXITBODY:
BEGIN
	#多行
	#<Data><Row><LocationID/><State/><RecordID/><EnterTime/><LeaveTime/><Prepayment/><Payment/> 
	#<EnterPlate/><LeavePlate/><PrepaymentOperator/><PaymentOperator/><EnterImage/>
	#<LeaveImage/><PrepaymentTime/><PaymentTime/><PrepaymentUserID/><PaymentUserID/></Row></Data>
	
	declare strLocationID VARCHAR( 45 ) default null;
	declare strState VARCHAR( 45 ) default null;
	declare strRecordID VARCHAR( 45 ) default null;
	declare strEnterTime VARCHAR( 45 ) default null;
	declare strLeaveTime VARCHAR( 45 ) default null;
	declare strPrepayment VARCHAR( 45 ) default null;
	declare strPayment VARCHAR( 45 ) default null;
	declare strEnterPlate VARCHAR( 45 ) default null;
	declare strLeavePlate VARCHAR( 45 ) default null;
	declare strPrepaymentOperator VARCHAR( 45 ) default null;
	declare strPaymentOperator VARCHAR( 45 ) default null;
	declare strEnterImage LONGBLOB default null;
	declare strLeaveImage LONGBLOB default null;
	declare strPrepaymentTime VARCHAR( 45 ) default null;
	declare strPaymentTime VARCHAR( 45 ) default null;
	declare strPrepaymentUserID VARCHAR( 45 ) default null;
	declare strPaymentUserID VARCHAR( 45 ) default null;

	declare nRows int default ExtractValue( txtXml, 'count( /Data/Row )' );
	declare nItem int default 0;
	declare txtMsg Longtext default '';
	declare bEmpty boolean default true;
	declare bSuccess boolean default true;

	declare nRecordIDCar bigint unsigned default null;
	declare nRecordIDRec bigint unsigned default null;

	declare dtEnterTime, dtLeaveTime DATETIME default now( );
	declare dtPrepaymentTime, dtPaymentTime DATETIME default now( );
	declare nPrepayment, nPayment SMALLINT UNSIGNED default 0;
	declare nPrepaymentUserID, nPaymentUserID BIGINT UNSIGNED default 0;

	declare strDateTime VARCHAR( 45 ) default null;
	declare bExistRecord bool default false;

	if ( 0 = nRows ) then
		SET nFlag = -1;
		SET txtXml = '无有效数据行。';
		lEAVE EXITBODY;
	end if;

	MYLOOP: while ( nItem < nRows ) do
		set nItem = nItem + 1;

		set strLocationID = ExtractValue( txtXml, '/Data/Row[$nItem]/LocationID' );
		select GetLocationIDByDetectorID( strLocationID ) into strLocationID;

		if ( ( ISNULL( strLocationID ) || 0 = LENGTH( strLocationID ) ) && bEmpty ) then
			set txtMsg = CONCAT( txtMsg, '有车位号为空的数据。' ); #第一个参数不能为 null，否则结果为 null
			set bEmpty = false;
			set bSuccess = false;
			Iterate MYLOOP; 
		elseif ( 16 <> LENGTH( strLocationID ) ) then
			set txtMsg = CONCAT( txtMsg, '车位号长度不正确【LocationID = ', strLocationID, '】。' );
			#Leave MYLOOP; break
			set bSuccess = false;
			Iterate MYLOOP; #continue
		end if;

		set strState = ExtractValue( txtXml, '/Data/Row[$nItem]/State' );
		set strRecordID = ExtractValue( txtXml, '/Data/Row[$nItem]/RecordID' );
		set strEnterTime = ExtractValue( txtXml, '/Data/Row[$nItem]/EnterTime' );
		set strLeaveTime = ExtractValue( txtXml, '/Data/Row[$nItem]/LeaveTime' );
		set strPrepayment = ExtractValue( txtXml, '/Data/Row[$nItem]/Prepayment' );
		set strPayment = ExtractValue( txtXml, '/Data/Row[$nItem]/Payment' );
		set strEnterPlate = ExtractValue( txtXml, '/Data/Row[$nItem]/EnterPlate' );
		set strLeavePlate = ExtractValue( txtXml, '/Data/Row[$nItem]/LeavePlate' );
		set strPrepaymentOperator = ExtractValue( txtXml, '/Data/Row[$nItem]/PrepaymentOperator' );
		set strPaymentOperator = ExtractValue( txtXml, '/Data/Row[$nItem]/PaymentOperator' );
		set strEnterImage = FROM_BASE64( ExtractValue( txtXml, '/Data/Row[$nItem]/EnterImage' ) );
		set strLeaveImage = FROM_BASE64( ExtractValue( txtXml, '/Data/Row[$nItem]/LeaveImage' ) );
		set strPrepaymentTime = ExtractValue( txtXml, '/Data/Row[$nItem]/PrepaymentTime' );
		set strPaymentTime = ExtractValue( txtXml, '/Data/Row[$nItem]/PaymentTime' );
		set strPrepaymentUserID = ExtractValue( txtXml, '/Data/Row[$nItem]/PrepaymentUserID' );
		set strPaymentUserID = ExtractValue( txtXml, '/Data/Row[$nItem]/PaymentUserID' );

		select Count( * ) into bExistRecord from TabInOutRecordInfo where RecordID = strRecordID;

		case strState 
			when '-1' then #Leave
				set dtLeaveTime = CONVERT( strLeaveTime, DATETIME );
				if ( dtLeaveTime is null ) then
					set txtMsg = CONCAT( txtMsg, '离开时间格式不正确【LocationID = ', strLocationID, 
										 ' LeaveTime = ', strLeaveTime, '】。' );
					set bSuccess = false;
					Iterate MYLOOP;
				end if;

				set dtPaymentTime = CONVERT( strPaymentTime, DATETIME );
				if ( dtPaymentTime is null ) then
					set txtMsg = CONCAT( txtMsg, '收费时间格式不正确【LocationID = ', strLocationID, 
										 ' PaymentTime = ', strPaymentTime, '】。' );
					set bSuccess = false;
					Iterate MYLOOP;
				end if;

				set nPrepayment = CONVERT( strPrepayment, UNSIGNED );
				set nPayment = CONVERT( strPayment, UNSIGNED );
				
				set nPrepaymentUserID = CONVERT( strPrepaymentUserID, UNSIGNED );
				set nPaymentUserID = CONVERT( strPaymentUserID, UNSIGNED );
				
				set strDateTime = '2000-01-01 12:01:01';
				#nRecordID is null 该车位还没新车进入，反之有
				#是假设所有进出记录都是完整的情况下才可能正确
				start transaction;
				select RecordID into nRecordIDCar from TabLocationHaveCarInfo where LocationID = strLocationID;
				select RecordID into nRecordIDRec from TabInOutRecordInfo where LocationID = strLocationID and 
				EnterTime is not null and EnterPlate is not null and
				LeaveTime is null and LeavePlate is null and RecordID <> nRecordIDCar;

				if ( nRecordIDRec is not null ) then #找到进入记录
					Update TabInOutRecordInfo set LeaveTime = dtLeaveTime, LeavePlate = Left( strLeavePlate, 8 ) where RecordID = nRecordIDRec;
					Update TabInOutImageInfo set LeaveImage = strLeaveImage where RecordID = nRecordIDRec; 
					Update TabFeeInfo Set Payment = nPayment, PaymentTime = dtPaymentTime, PaymentUserID = nPaymentUserID, PaymentOperator = Left( strPaymentOperator, 30 )
					Where RecordID = nRecordIDRec;
				else #无对应进入记录
					Insert TabInOutRecordInfo( LocationID, EnterTime, LeaveTime, EnterPlate, LeavePlate ) 
					Value( strLocationID, strDateTime, dtLeaveTime, Left( strEnterPlate, 8 ), Left( strLeavePlate, 8 ) );
					set nRecordIDRec = LAST_INSERT_ID( );

					Insert TabInOutImageInfo( RecordID, EnterImage, LeaveImage, AddedTime ) 
					Value( nRecordIDRec, strEnterImage, strLeaveImage, DATE( strDateTime ) );

					Insert TabFeeInfo( RecordID, Prepayment, Payment, PrepaymentTime, PaymentTime, 
									   PrepaymentOperator, PaymentOperator, PrepaymentUserID, PaymentUserID ) 
					Value( nRecordIDRec, nPrepayment, nPayment, strDateTime, dtPaymentTime, 
						   Left( strPrepaymentOperator, 30 ), Left( strPaymentOperator, 30 ), 
						   nPrepaymentUserID, nPaymentUserID );
				end if;
				commit;
			when '1' then #Enter
				if ( strEnterTime is not null && LENGTH( strEnterTime ) <> 0 ) then
					set dtEnterTime = CONVERT( strEnterTime, DATETIME );
				end if;

				if ( strPrepaymentTime is not null && LENGTH( strPrepaymentTime ) <> 0 ) then
					set dtPrepaymentTime = CONVERT( strPrepaymentTime, DATETIME );
				end if;

				if ( strPrepayment is not null && LENGTH( strPrepayment ) <> 0 ) then
					set nPrepayment = CONVERT( strPrepayment, UNSIGNED );
				end if;

				if ( strPayment is not null && LENGTH( strPayment ) <> 0 ) then
					set nPayment = CONVERT( strPayment, UNSIGNED );
				end if;

				if ( strPrepaymentUserID is not null && LENGTH( strPrepaymentUserID ) <> 0 ) then
					set nPrepaymentUserID = CONVERT( strPrepaymentUserID, UNSIGNED );
				end if;

				if ( strPaymentUserID is not null && LENGTH( strPaymentUserID ) <> 0 ) then
					set nPaymentUserID = CONVERT( strPaymentUserID, UNSIGNED );
				end if;

				set strDateTime = '3000-01-01 12:01:01';

				start transaction;
				if ( !bExistRecord ) then
					Insert TabInOutRecordInfo( LocationID, EnterTime, LeaveTime, EnterPlate, LeavePlate ) 
					Value( strLocationID, dtEnterTime, strDateTime, Left( strEnterPlate, 8 ), Left( strLeavePlate, 8 ) );
					set nRecordIDRec = LAST_INSERT_ID( );

					Insert TabInOutImageInfo( RecordID, EnterImage, LeaveImage, AddedTime ) 
					Value( nRecordIDRec, strEnterImage, strLeaveImage, DATE( dtEnterTime ) );

					Insert TabFeeInfo( RecordID, Prepayment, Payment, PrepaymentTime, PaymentTime, 
									   PrepaymentOperator, PaymentOperator, PrepaymentUserID, PaymentUserID ) 
					Value( nRecordIDRec, nPrepayment, nPayment, dtPrepaymentTime, strDateTime, 
						   Left( strPrepaymentOperator, 30 ), Left( strPaymentOperator, 30 ), 
						   nPrepaymentUserID, nPaymentUserID );
				else 
					update TabInOutRecordInfo set LocationID = strLocationID, EnterTime = dtEnterTime, LeaveTime = strDateTime,
						                      EnterPalte = Left( strEnterPlate, 8 ), LeavePlate = Left( strEnterPlate, 8 )
						   where RecordID = strRecordID;
					
					update TabInOutImageInfo set EnterImage = strEnterImage, LeaveImage = strLeaveImage
						   where RecordID = strRecordID;

					update TabFeeInfo set Prepayment = nPrepayment, Payment = nPayment, 
                                      PrepaymentTime = dtPrepaymentTime, PaymentTime = strDateTime, 
									  PrepaymentOperator = Left( strPrepaymentOperator, 30 ), 
                                      PaymentOperator = Left( strPaymentOperator, 30 ), 
                                      PrepaymentUserID = nPrepaymentUserID, PaymentUserID = nPaymentUserID
                           where RecordID = strRecordID; 
				end if;
				commit;
			when '0' then #Whole
				if ( strEnterTime is not null && LENGTH( strEnterTime ) <> 0 ) then
					set dtEnterTime = CONVERT( strEnterTime, DATETIME );
				end if;

				if ( strLeaveTime is not null && LENGTH( strLeaveTime ) <> 0 ) then
					set dtLeaveTime = CONVERT( strLeaveTime, DATETIME );
				end if;

				if ( strPrepaymentTime is not null && LENGTH( strPrepaymentTime ) <> 0 ) then
					set dtPrepaymentTime = CONVERT( strPrepaymentTime, DATETIME );
				end if;

				if ( strPaymentTime is not null && LENGTH( strPaymentTime ) <> 0 ) then
					set dtPaymentTime = CONVERT( strPaymentTime, DATETIME );
				end if;

				if ( strPrepayment is not null && LENGTH( strPrepayment ) <> 0 ) then
					set nPrepayment = CONVERT( strPrepayment, UNSIGNED );
				end if;

				if ( strPayment is not null && LENGTH( strPayment ) <> 0 ) then
					set nPayment = CONVERT( strPayment, UNSIGNED );
				end if;

				if ( strPrepaymentUserID is not null && LENGTH( strPrepaymentUserID ) <> 0 ) then
					set nPrepaymentUserID = CONVERT( strPrepaymentUserID, UNSIGNED );
				end if;

				if ( strPaymentUserID is not null && LENGTH( strPaymentUserID ) <> 0 ) then
					set nPaymentUserID = CONVERT( strPaymentUserID, UNSIGNED );
				end if;

				start transaction;
				if ( !bExistRecord ) then
					Insert TabInOutRecordInfo( LocationID, EnterTime, LeaveTime, EnterPlate, LeavePlate ) 
					Value( strLocationID, dtEnterTime, dtLeaveTime, Left( strEnterPlate, 8 ), Left( strLeavePlate, 8 ) );
					set nRecordIDRec = LAST_INSERT_ID( );

					Insert TabInOutImageInfo( RecordID, EnterImage, LeaveImage, AddedTime ) 
					Value( nRecordIDRec, strEnterImage, strLeaveImage, DATE( dtEnterTime ) );

					Insert TabFeeInfo( RecordID, Prepayment, Payment, PrepaymentTime, PaymentTime, 
									   PrepaymentOperator, PaymentOperator, PrepaymentUserID, PaymentUserID ) 
					Value( nRecordIDRec, nPrepayment, nPayment, dtPrepaymentTime, dtPaymentTime, 
						   Left( strPrepaymentOperator, 30 ), Left( strPaymentOperator, 30 ), 
						   nPrepaymentUserID, nPaymentUserID );
				else 
					Update TabInOutRecordInfo set LocationID = strLocationID, EnterTime = dtEnterTime, LeaveTime = dtLeaveTime, 
                                                  EnterPlate = Left( strEnterPlate, 8 ) , LeavePlate = Left( strLeavePlate, 8 ) 
                           where RecordID = strRecordID;
					update TabInOutImageInfo set EnterImage = strEnterImage, LeaveImage = strLeaveImage
						   where RecordID = strRecordID;
					update TabFeeInfo set Prepayment = nPrepayment, Payment = nPayment, 
                                      PrepaymentTime = dtPrepaymentTime, PaymentTime = dtPaymentTime, 
									  PrepaymentOperator = Left( strPrepaymentOperator, 30 ), 
                                      PaymentOperator = Left( strPaymentOperator, 30 ), 
                                      PrepaymentUserID = nPrepaymentUserID, PaymentUserID = nPaymentUserID
                           where RecordID = strRecordID; 
				end if;
				commit;
			else 
				set txtMsg = CONCAT( txtMsg, '未知状态数据【State = ', strState, '】。' );
				set bSuccess = false;
		end case;
		
	end while;


	if ( !bSuccess ) then
		set txtXml = txtMsg;
		set nFlag = -1;
	else
		set nFlag = 0;
		set txtXml = null;
	end if;
	
END EXITBODY ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `UserRecord` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,STRICT_ALL_TABLES,NO_ZERO_IN_DATE,NO_ZERO_DATE,ALLOW_INVALID_DATES,ERROR_FOR_DIVISION_BY_ZERO,TRADITIONAL,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`root`@`localhost` PROCEDURE `UserRecord`( inout txtXml LONGTEXT, inout nFlag TINYINT )
EXITBODY:
BEGIN
	#<Data><GroupID/><Accessor/><Data> UserSelect
	#<Data><UserID/><UserOldPwd/><PwdOldMD5/><UserNewPwd/><PwdNewMD5/><Accessor/><Data> UserUpdate

	declare strGroupID VARCHAR( 45 ) default ExtractValue( txtXml, '/Data/GroupID' );
	declare strUserID VARCHAR( 45 ) default ExtractValue( txtXml, '/Data/UserID' );
	declare strUserName VARCHAR( 45 ) default ExtractValue( txtXml, '/Data/UserName' );
	declare strUserPwd VARCHAR( 128 ) default ExtractValue( txtXml, '/Data/UserPwd' ); #Base64
	declare strPwdMD5 VARCHAR( 512 ) default ExtractValue( txtXml, '/Data/PwdMD5' );
	declare strUserNewPwd VARCHAR( 128 ) default ExtractValue( txtXml, '/Data/UserNewPwd' );
	declare strPwdNewMD5 VARCHAR( 512 ) default ExtractValue( txtXml, '/Data/PwdNewMD5' );

	declare dtFeeStart VARCHAR( 45 ) default ExtractValue( txtXml, '/Data/StartTime' );
	declare dtFeeEnd VARCHAR( 45 ) default ExtractValue( txtXml, '/Data/EndTime' );

	declare strTabUserName VARCHAR( 45 );
	declare strTabUserPwd VARCHAR( 128 );

	declare strMsg LONGTEXT default '';

	declare nPrepaymentSum SMALLINT unsigned default 0;
	declare nPaymentSum SMALLINT unsigned default 0;


	case nFlag when 0 then #UserSelect
				set txtXml = ( Select CONCAT( '{"List":[',
											   GROUP_CONCAT( CONCAT( '{"GroupID":"',GroupID,'"' ),
													         CONCAT( ',"UserID":"', UserID, '"' ),
															 CONCAT( ',"UserName":"', UserName, '"' ),
															 CONCAT( ',"UserPwd":"', UserPwd, '"'),
															 CONCAT( ',"UserPwd":"', UserJobNumber, '"'),
															 CONCAT( ',"UserPwd":"', UserAddress, '"'),
															 CONCAT( ',"PwdMD5":"', MD5( FROM_BASE64( UserPwd ) ), '"}' ), ']}' ) ) 
				   From TabUserInfo Where GroupID =  strGroupID );

			    set nFlag = ( 0 != FOUND_ROWS( ) );
				
				if ( nFlag is FALSE ) then  #SELECT 1 IS TRUE, 0 IS FALSE, NULL IS UNKNOWN;
					set txtXMl = CONCAT( '{"Message":"该组不存在。"}' );
					set nFlag = -1;
				end if;
			   when 1 then #UserUpdate
				select UserName, UserPwd into strTabUserName, strTabUserPwd from TabUserInfo where UserID = strUserID;

				if ( strTabUserName <> strUserName ) then
					set strMsg = '用户不存在。';
				end if;

				if ( MD5( FROM_BASE64( strUserPwd ) ) <> strPwdMD5 ) then 
					set strMsg = CONCAT( strMsg, '\n原密码校验错误。' );
				end if;

				if ( MD5( FROM_BASE64( strUserNewPwd ) ) <> strPwdNewMD5 ) then 
					set strMsg = CONCAT( strMsg, '\n新密码校验错误。' );
				end if;

				if ( strTabUserPwd <> strUserPwd ) then
					set strMsg = CONCAT( strMsg, '\n原密码错误。' );
				end if;

				set nFlag = ( 0 = CHAR_LENGTH( strMsg ) );

				if ( 0 = nFlag ) then
					set txtXml = CONCAT( '{"Message":"', strMsg, '"}' );
					set nFlag = -1;
				else
					update TabUserInfo set UserPwd = strUserNewPwd where UserID = strUserID;
					set txtXml = CONCAT( '用户修改密码成功。' );
				end if;
			   when 2 then #UserLogin <IP/><ClientID/><TypeCode/>
				select UserName, UserPwd into strTabUserName, strTabUserPwd from TabUserInfo where UserID = strUserID;

				if ( strTabUserName <> strUserName ) then
					set strMsg = '用户不存在。';
				end if;

				if ( MD5( FROM_BASE64( strUserPwd ) ) <> strPwdMD5 ) then 
					set strMsg = CONCAT( strMsg, '\n原密码校验错误。' );
				end if;

				if ( strTabUserPwd <> strUserPwd ) then
					set strMsg = CONCAT( strMsg, '\n原密码错误。' );
				end if;

				set nFlag = ( 0 = CHAR_LENGTH( strMsg ) );

				if ( 0 != nFlag ) then
					update TabUserInfo set UserState = 'Login' where UserID = strUserID;
					Insert into TabUserLoginoutInfo( LogUserID, LogType, LogClientID, LogIP ) values( strUserID, 'Login', 
													 ExtractValue( txtXml, '/Data/Accessor/ClientID' ),
													 ExtractValue( txtXml, '/Data/Accessor/IP' ) );
					set txtXml = CONCAT( '{"Message":"用户登录成功。"}' );
				else 
					set txtXml = CONCAT( '{"Message":"用户登录失败。' , strMsg, '。"}' );
					set nFlag = -1;
				end if;
			   when 3 then #UserLogout
				update TabUserInfo set UserState = 'Logout' where UserID = strUserID;
				Insert into TabUserLoginoutInfo( LogUserID, LogType, LogClientID, LogIP ) values( strUserID, 'Logout', 
													 ExtractValue( txtXml, '/Data/Accessor/ClientID' ),
													 ExtractValue( txtXml, '/Data/Accessor/IP' ) );
				set txtXml = CONCAT( '{"Message":"用户注销成功。"}' );
			   when 4 then #UserFee
				select sum( Prepayment ) into nPrepaymentSum from TabFeeInfo 
					where PrepaymentTime between dtFeeStart and dtFeeEnd and PrepaymentUserID = strUserID;

				select sum( Payment ) into nPaymentSum from TabFeeInfo 
					where PaymentTime between dtFeeStart and dtFeeEnd and PaymentUserID = strUserID;

				set txtXml = CONCAT( '{"PrepaymentSum":"', CONVERT( nPrepaymentSum, CHAR ), 
								     '","Payment":"', CONVERT( nPaymentSum, CHAR ), '"}' );
			   else
				set txtXml = CONCAT( '{"Message":"无效用户操作类型码。【TypeCode=', CONVERT( nFlag, CHAR ), '】"}' );
				set nFlag = -1;
	end case;
	

	INSERT INTO TabLogInfo( LogInfo, logDateTime ) VALUES( CONCAT( txtXml, ' SP:UserRecord' ), NOW( ) );
	
END EXITBODY ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `VehicleShiftRecord` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,STRICT_ALL_TABLES,NO_ZERO_IN_DATE,NO_ZERO_DATE,ALLOW_INVALID_DATES,ERROR_FOR_DIVISION_BY_ZERO,TRADITIONAL,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`root`@`localhost` PROCEDURE `VehicleShiftRecord`( inout txtXml LONGTEXT, inout nFlag TINYINT )
EXITBODY:
BEGIN
	#<Data><SrcLocationID/><DstLocationID/></Data>
	
	declare strSrcLocationID VARCHAR( 45 ) default ExtractValue( txtXml, '/Data/SrcLocationID' );
	declare strDstLocationID VARCHAR( 45 ) default ExtractValue( txtXml, '/Data/DstLocationID' );

	declare dtSrcEnterTime, dtDstEnterTime, dtSrcLeaveTime DATETIME default null;
	declare nRecordID bigint unsigned default null;

	declare strDetectorID VARCHAR( 3 ) default null;

	select GetLocationIDByDetectorID( strSrcLocationID ) into strSrcLocationID;
	select GetLocationIDByDetectorID( strDstLocationID ) into strDstLocationID;

	if ( ISNULL( strSrcLocationID ) || 0 = LENGTH( strSrcLocationID ) ) then
		set txtXml = '{"Message":"源车位号为空。"}';
		set nFlag = -1;
		LEAVE EXITBODY; 
	end if;

	if ( ISNULL( strDstLocationID ) || 0 = LENGTH( strDstLocationID ) ) then
		set txtXml = '{"Message":"目的车位号为空。"}';
		set nFlag = -1;
		LEAVE EXITBODY; 
	end if;

	Select EnterTime, LeaveTime, RecordID into dtSrcEnterTime, dtSrcLeaveTime,  nRecordID 
	from TabLocationHaveCarInfo where LocationID = strSrcLocationID;

	set strDetectorID = RIGHT( strSrcLocationID, 3 );
	if ( dtSrcEnterTime is null ) then
		set txtXml = CONCAT( '{"Message":"该车未进入【', strDetectorID, '】号源车位。"}' );
		set nFlag = -1;
		LEAVE EXITBODY; 
	elseif ( dtSrcLeaveTime is null ) then
		set txtXml = CONCAT( '{"Message":"该车未离开【', strDetectorID, '】号源车位。"}' );
		set nFlag = -1;
		LEAVE EXITBODY; 
	end if;

	Select EnterTime, RecordID into dtDstEnterTime, nRecordID from TabLocationHaveCarInfo where LocationID = strDstLocationID;

	set strDetectorID = RIGHT( strDstLocationID, 3 );
	if ( dtDstEnterTime is null ) then
		set txtXml = CONCAT( '{"Message":"该车未进入【', strDetectorID, '】号目的车位。"}' );
		set nFlag = -1;
		LEAVE EXITBODY; 
	end if;

	start transaction;
		update TabLocationHaveCarInfo set EnterTime = dtSrcEnterTime where LocationID = strDstLocationID;
		update TabInOutRecordInfo set EnterTime = dtSrcEnterTime where RecordID = nRecordID;
		delete from TabLocationHaveCarInfo where LocationID = strSrcLocationID;
	commit;

	INSERT INTO TabLogInfo( LogInfo, logDateTime ) VALUES( CONCAT( txtXml, ' SP:VehicleShiftRecord' ), NOW( ) );
	set nFlag = 2;
	set txtXml = CONCAT( '{"LocationID":"', strSrcLocationID, '", "State":"', CONVERT( nFlag, CHAR ), '"}' ); #RemoveRcord
	
END EXITBODY ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;

--
-- Final view structure for view `viewconfiginfo`
--

/*!50001 DROP TABLE IF EXISTS `viewconfiginfo`*/;
/*!50001 DROP VIEW IF EXISTS `viewconfiginfo`*/;
/*!50001 SET @saved_cs_client          = @@character_set_client */;
/*!50001 SET @saved_cs_results         = @@character_set_results */;
/*!50001 SET @saved_col_connection     = @@collation_connection */;
/*!50001 SET character_set_client      = utf8 */;
/*!50001 SET character_set_results     = utf8 */;
/*!50001 SET collation_connection      = utf8_general_ci */;
/*!50001 CREATE ALGORITHM=UNDEFINED */
/*!50013 DEFINER=`root`@`localhost` SQL SECURITY DEFINER */
/*!50001 VIEW `viewconfiginfo` AS select `a`.`DeviceID` AS `DeviceID`,`a`.`UnitID` AS `UnitID`,`b`.`UnitName` AS `UnitName`,`c`.`ParkID` AS `ParkID`,`c`.`ParkName` AS `ParkName`,`d`.`ReceiverID` AS `ReceiverID`,`d`.`ReceiverName` AS `ReceiverName` from (((`tabdeviceregisterinfo` `a` join `tabunitinfo` `b`) join `tabparkinfo` `c`) join `tabreceiverinfo` `d`) where ((`a`.`UnitID` = `b`.`UnitID`) and (`b`.`UnitID` = `c`.`UnitID`) and (`c`.`ParkID` = `d`.`ParkID`)) */;
/*!50001 SET character_set_client      = @saved_cs_client */;
/*!50001 SET character_set_results     = @saved_cs_results */;
/*!50001 SET collation_connection      = @saved_col_connection */;

--
-- Final view structure for view `viewfeeinfo`
--

/*!50001 DROP TABLE IF EXISTS `viewfeeinfo`*/;
/*!50001 DROP VIEW IF EXISTS `viewfeeinfo`*/;
/*!50001 SET @saved_cs_client          = @@character_set_client */;
/*!50001 SET @saved_cs_results         = @@character_set_results */;
/*!50001 SET @saved_col_connection     = @@collation_connection */;
/*!50001 SET character_set_client      = utf8 */;
/*!50001 SET character_set_results     = utf8 */;
/*!50001 SET collation_connection      = utf8_general_ci */;
/*!50001 CREATE ALGORITHM=UNDEFINED */
/*!50013 DEFINER=`root`@`localhost` SQL SECURITY DEFINER */
/*!50001 VIEW `viewfeeinfo` AS select `a`.`RecordID` AS `RecordID`,`a`.`Prepayment` AS `Prepayment`,`a`.`Payment` AS `Payment`,`a`.`PrepaymentOperator` AS `PrepaymentOperator`,`a`.`PrepaymentTime` AS `PrepaymentTime`,`a`.`PaymentTime` AS `PaymentTime`,`a`.`PaymentOperator` AS `PaymentOperator`,`a`.`PrepaymentUserID` AS `PrepaymentUserID`,`a`.`PaymentUserID` AS `PaymentUserID`,`b`.`LocationID` AS `LocationID`,`e`.`UnitName` AS `UnitName`,`e`.`UnitID` AS `UnitID`,`f`.`AdministrativeName` AS `AdministrativeName`,`f`.`AdministrativeType` AS `AdministrativeType`,`f`.`AdministrativeID` AS `AdministrativeID`,`g`.`ParkName` AS `ParkName`,`g`.`ParkID` AS `ParkID` from ((((((`tabfeeinfo` `a` join `tabinoutrecordinfo` `b`) join `tabuserinfo` `c`) join `tabgroupinfo` `d`) join `tabunitinfo` `e`) join `tabadministrativeinfo` `f`) join `tabparkinfo` `g`) where ((`a`.`RecordID` = `b`.`RecordID`) and (`a`.`PaymentUserID` = `c`.`UserID`) and (`c`.`GroupID` = `d`.`GroupID`) and (`d`.`UnitID` = `e`.`UnitID`) and (`e`.`AdministrativeID` = `f`.`AdministrativeID`) and (`d`.`UnitID` = `g`.`UnitID`)) */;
/*!50001 SET character_set_client      = @saved_cs_client */;
/*!50001 SET character_set_results     = @saved_cs_results */;
/*!50001 SET collation_connection      = @saved_col_connection */;

--
-- Final view structure for view `viewinoutrecord`
--

/*!50001 DROP TABLE IF EXISTS `viewinoutrecord`*/;
/*!50001 DROP VIEW IF EXISTS `viewinoutrecord`*/;
/*!50001 SET @saved_cs_client          = @@character_set_client */;
/*!50001 SET @saved_cs_results         = @@character_set_results */;
/*!50001 SET @saved_col_connection     = @@collation_connection */;
/*!50001 SET character_set_client      = utf8 */;
/*!50001 SET character_set_results     = utf8 */;
/*!50001 SET collation_connection      = utf8_general_ci */;
/*!50001 CREATE ALGORITHM=UNDEFINED */
/*!50013 DEFINER=`root`@`localhost` SQL SECURITY DEFINER */
/*!50001 VIEW `viewinoutrecord` AS select `a`.`RecordID` AS `RecordID`,`a`.`LocationID` AS `LocationID`,`a`.`EnterTime` AS `EnterTime`,`a`.`LeaveTime` AS `LeaveTime`,`a`.`EnterPlate` AS `EnterPlate`,`a`.`LeavePlate` AS `LeavePlate`,`b`.`EnterImage` AS `EnterImage`,`b`.`LeaveImage` AS `LeaveImage`,`c`.`Prepayment` AS `Prepayment`,`c`.`Payment` AS `Payment`,`c`.`PrepaymentOperator` AS `PrepaymentOperator`,`c`.`PrepaymentTime` AS `PrepaymentTime`,`c`.`PaymentOperator` AS `PaymentOperator`,`c`.`PaymentTime` AS `PaymentTime` from ((`tabinoutrecordinfo` `a` join `tabinoutimageinfo` `b`) join `tabfeeinfo` `c`) where ((`a`.`RecordID` = `b`.`RecordID`) and (`a`.`RecordID` = `c`.`RecordID`)) */;
/*!50001 SET character_set_client      = @saved_cs_client */;
/*!50001 SET character_set_results     = @saved_cs_results */;
/*!50001 SET collation_connection      = @saved_col_connection */;

--
-- Final view structure for view `viewwholefeerecordquery`
--

/*!50001 DROP TABLE IF EXISTS `viewwholefeerecordquery`*/;
/*!50001 DROP VIEW IF EXISTS `viewwholefeerecordquery`*/;
/*!50001 SET @saved_cs_client          = @@character_set_client */;
/*!50001 SET @saved_cs_results         = @@character_set_results */;
/*!50001 SET @saved_col_connection     = @@collation_connection */;
/*!50001 SET character_set_client      = utf8 */;
/*!50001 SET character_set_results     = utf8 */;
/*!50001 SET collation_connection      = utf8_general_ci */;
/*!50001 CREATE ALGORITHM=UNDEFINED */
/*!50013 DEFINER=`root`@`localhost` SQL SECURITY DEFINER */
/*!50001 VIEW `viewwholefeerecordquery` AS select `a`.`RecordID` AS `RecordID`,`a`.`Prepayment` AS `Prepayment`,`a`.`Payment` AS `Payment`,`a`.`PrepaymentOperator` AS `PrepaymentOperator`,`a`.`PrepaymentTime` AS `PrepaymentTime`,`a`.`PaymentTime` AS `PaymentTime`,`a`.`PaymentOperator` AS `PaymentOperator`,`a`.`PrepaymentUserID` AS `PrepaymentUserID`,`a`.`PaymentUserID` AS `PaymentUserID`,`b`.`LocationID` AS `LocationID`,`e`.`UnitName` AS `UnitName`,`e`.`UnitID` AS `UnitID`,`f`.`AdministrativeName` AS `AdministrativeName`,`f`.`AdministrativeType` AS `AdministrativeType`,`f`.`AdministrativeID` AS `AdministrativeID`,`g`.`ParkName` AS `ParkName`,`g`.`ParkID` AS `ParkID` from ((((((`tabtmpfeeinfo` `a` join `tabtmpinoutrecordinfo` `b`) join `tabuserinfo` `c`) join `tabgroupinfo` `d`) join `tabunitinfo` `e`) join `tabadministrativeinfo` `f`) join `tabparkinfo` `g`) where ((`a`.`RecordID` = `b`.`RecordID`) and (`a`.`PaymentUserID` = `c`.`UserID`) and (`c`.`GroupID` = `d`.`GroupID`) and (`d`.`UnitID` = `e`.`UnitID`) and (`e`.`AdministrativeID` = `f`.`AdministrativeID`) and (`d`.`UnitID` = `g`.`UnitID`)) union select `a`.`RecordID` AS `RecordID`,`a`.`Prepayment` AS `Prepayment`,`a`.`Payment` AS `Payment`,`a`.`PrepaymentOperator` AS `PrepaymentOperator`,`a`.`PrepaymentTime` AS `PrepaymentTime`,`a`.`PaymentTime` AS `PaymentTime`,`a`.`PaymentOperator` AS `PaymentOperator`,`a`.`PrepaymentUserID` AS `PrepaymentUserID`,`a`.`PaymentUserID` AS `PaymentUserID`,`b`.`LocationID` AS `LocationID`,`e`.`UnitName` AS `UnitName`,`e`.`UnitID` AS `UnitID`,`f`.`AdministrativeName` AS `AdministrativeName`,`f`.`AdministrativeType` AS `AdministrativeType`,`f`.`AdministrativeID` AS `AdministrativeID`,`g`.`ParkName` AS `ParkName`,`g`.`ParkID` AS `ParkID` from ((((((`tabhistoryfeeinfo` `a` join `tabhistoryinoutrecordinfo` `b`) join `tabuserinfo` `c`) join `tabgroupinfo` `d`) join `tabunitinfo` `e`) join `tabadministrativeinfo` `f`) join `tabparkinfo` `g`) where ((`a`.`RecordID` = `b`.`RecordID`) and (`a`.`PaymentUserID` = `c`.`UserID`) and (`c`.`GroupID` = `d`.`GroupID`) and (`d`.`UnitID` = `e`.`UnitID`) and (`e`.`AdministrativeID` = `f`.`AdministrativeID`) and (`d`.`UnitID` = `g`.`UnitID`)) */;
/*!50001 SET character_set_client      = @saved_cs_client */;
/*!50001 SET character_set_results     = @saved_cs_results */;
/*!50001 SET collation_connection      = @saved_col_connection */;

--
-- Final view structure for view `viewwholeinoutrecordquery`
--

/*!50001 DROP TABLE IF EXISTS `viewwholeinoutrecordquery`*/;
/*!50001 DROP VIEW IF EXISTS `viewwholeinoutrecordquery`*/;
/*!50001 SET @saved_cs_client          = @@character_set_client */;
/*!50001 SET @saved_cs_results         = @@character_set_results */;
/*!50001 SET @saved_col_connection     = @@collation_connection */;
/*!50001 SET character_set_client      = utf8 */;
/*!50001 SET character_set_results     = utf8 */;
/*!50001 SET collation_connection      = utf8_general_ci */;
/*!50001 CREATE ALGORITHM=UNDEFINED */
/*!50013 DEFINER=`root`@`localhost` SQL SECURITY DEFINER */
/*!50001 VIEW `viewwholeinoutrecordquery` AS select `a`.`RecordID` AS `RecordID`,`a`.`LocationID` AS `LocationID`,`a`.`EnterTime` AS `EnterTime`,`a`.`LeaveTime` AS `LeaveTime`,`a`.`EnterPlate` AS `EnterPlate`,`a`.`LeavePlate` AS `LeavePlate`,`b`.`EnterImage` AS `EnterImage`,`b`.`LeaveImage` AS `LeaveImage`,`c`.`Prepayment` AS `Prepayment`,`c`.`Payment` AS `Payment`,`c`.`PrepaymentOperator` AS `PrepaymentOperator`,`c`.`PrepaymentTime` AS `PrepaymentTime`,`c`.`PaymentOperator` AS `PaymentOperator`,`c`.`PaymentTime` AS `PaymentTime` from ((`tabtmpinoutrecordinfo` `a` join `tabtmpinoutimageinfo` `b`) join `tabtmpfeeinfo` `c`) where ((`a`.`RecordID` = `b`.`RecordID`) and (`a`.`RecordID` = `c`.`RecordID`)) union select `a`.`RecordID` AS `RecordID`,`a`.`LocationID` AS `LocationID`,`a`.`EnterTime` AS `EnterTime`,`a`.`LeaveTime` AS `LeaveTime`,`a`.`EnterPlate` AS `EnterPlate`,`a`.`LeavePlate` AS `LeavePlate`,`b`.`EnterImage` AS `EnterImage`,`b`.`LeaveImage` AS `LeaveImage`,`c`.`Prepayment` AS `Prepayment`,`c`.`Payment` AS `Payment`,`c`.`PrepaymentOperator` AS `PrepaymentOperator`,`c`.`PrepaymentTime` AS `PrepaymentTime`,`c`.`PaymentOperator` AS `PaymentOperator`,`c`.`PaymentTime` AS `PaymentTime` from ((`tabhistoryinoutrecordinfo` `a` join `tabhistoryinoutimageinfo` `b`) join `tabhistoryfeeinfo` `c`) where ((`a`.`RecordID` = `b`.`RecordID`) and (`a`.`RecordID` = `c`.`RecordID`)) */;
/*!50001 SET character_set_client      = @saved_cs_client */;
/*!50001 SET character_set_results     = @saved_cs_results */;
/*!50001 SET collation_connection      = @saved_col_connection */;

--
-- Final view structure for view `viewwholelogrecordquery`
--

/*!50001 DROP TABLE IF EXISTS `viewwholelogrecordquery`*/;
/*!50001 DROP VIEW IF EXISTS `viewwholelogrecordquery`*/;
/*!50001 SET @saved_cs_client          = @@character_set_client */;
/*!50001 SET @saved_cs_results         = @@character_set_results */;
/*!50001 SET @saved_col_connection     = @@collation_connection */;
/*!50001 SET character_set_client      = utf8 */;
/*!50001 SET character_set_results     = utf8 */;
/*!50001 SET collation_connection      = utf8_general_ci */;
/*!50001 CREATE ALGORITHM=UNDEFINED */
/*!50013 DEFINER=`root`@`localhost` SQL SECURITY DEFINER */
/*!50001 VIEW `viewwholelogrecordquery` AS select `tabtmploginfo`.`LogID` AS `LogID`,`tabtmploginfo`.`LogInfo` AS `LogInfo`,`tabtmploginfo`.`LogDateTime` AS `LogDateTime` from `tabtmploginfo` union select `tabhistoryloginfo`.`LogID` AS `LogID`,`tabhistoryloginfo`.`LogInfo` AS `LogInfo`,`tabhistoryloginfo`.`LogDateTime` AS `LogDateTime` from `tabhistoryloginfo` */;
/*!50001 SET character_set_client      = @saved_cs_client */;
/*!50001 SET character_set_results     = @saved_cs_results */;
/*!50001 SET collation_connection      = @saved_col_connection */;

--
-- Final view structure for view `viewwholeuserloginoutrecordquery`
--

/*!50001 DROP TABLE IF EXISTS `viewwholeuserloginoutrecordquery`*/;
/*!50001 DROP VIEW IF EXISTS `viewwholeuserloginoutrecordquery`*/;
/*!50001 SET @saved_cs_client          = @@character_set_client */;
/*!50001 SET @saved_cs_results         = @@character_set_results */;
/*!50001 SET @saved_col_connection     = @@collation_connection */;
/*!50001 SET character_set_client      = utf8 */;
/*!50001 SET character_set_results     = utf8 */;
/*!50001 SET collation_connection      = utf8_general_ci */;
/*!50001 CREATE ALGORITHM=UNDEFINED */
/*!50013 DEFINER=`root`@`localhost` SQL SECURITY DEFINER */
/*!50001 VIEW `viewwholeuserloginoutrecordquery` AS select `tabtmpuserloginoutinfo`.`LogID` AS `LogID`,`tabtmpuserloginoutinfo`.`LogUserID` AS `LogUserID`,`tabtmpuserloginoutinfo`.`LogTime` AS `LogTime`,`tabtmpuserloginoutinfo`.`LogType` AS `LogType`,`tabtmpuserloginoutinfo`.`LogClientID` AS `LogClientID`,`tabtmpuserloginoutinfo`.`LogIP` AS `LogIP` from `tabtmpuserloginoutinfo` union select `tabhistoryuserloginoutinfo`.`LogID` AS `LogID`,`tabhistoryuserloginoutinfo`.`LogUserID` AS `LogUserID`,`tabhistoryuserloginoutinfo`.`LogTime` AS `LogTime`,`tabhistoryuserloginoutinfo`.`LogType` AS `LogType`,`tabhistoryuserloginoutinfo`.`LogClientID` AS `LogClientID`,`tabhistoryuserloginoutinfo`.`LogIP` AS `LogIP` from `tabhistoryuserloginoutinfo` */;
/*!50001 SET character_set_client      = @saved_cs_client */;
/*!50001 SET character_set_results     = @saved_cs_results */;
/*!50001 SET collation_connection      = @saved_col_connection */;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2013-08-06 15:25:11
