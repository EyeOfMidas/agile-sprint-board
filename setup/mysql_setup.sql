-- phpMyAdmin SQL Dump
-- version 3.4.11.1deb2
-- http://www.phpmyadmin.net
--
-- Host: localhost
-- Generation Time: Mar 18, 2014 at 12:13 PM
-- Server version: 5.5.35
-- PHP Version: 5.4.4-14+deb7u8

SET SQL_MODE="NO_AUTO_VALUE_ON_ZERO";
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8 */;

--
-- Database: `sprintboard`
--

-- --------------------------------------------------------

--
-- Table structure for table `column`
--

CREATE TABLE IF NOT EXISTS `column` (
  `column_id` int(11) NOT NULL AUTO_INCREMENT,
  `name` varchar(255) NOT NULL,
  `display_name` varchar(255) NOT NULL,
  `sort` int(11) NOT NULL,
  PRIMARY KEY (`column_id`)
) ENGINE=InnoDB  DEFAULT CHARSET=latin1 AUTO_INCREMENT=5 ;

--
-- Dumping data for table `column`
--

INSERT INTO `column` (`column_id`, `name`, `display_name`, `sort`) VALUES
(1, 'backlog', 'Backlog', 1),
(2, 'todo', 'To Do', 2),
(3, 'inprogress', 'In Progress', 3),
(4, 'done', 'Done', 4);

-- --------------------------------------------------------

--
-- Table structure for table `estimate_levels`
--

CREATE TABLE IF NOT EXISTS `estimate_levels` (
  `estimate_id` int(11) NOT NULL AUTO_INCREMENT,
  `display_value` varchar(255) NOT NULL,
  `sort` int(11) NOT NULL,
  PRIMARY KEY (`estimate_id`)
) ENGINE=InnoDB  DEFAULT CHARSET=latin1 AUTO_INCREMENT=8 ;

--
-- Dumping data for table `estimate_levels`
--

INSERT INTO `estimate_levels` (`estimate_id`, `display_value`, `sort`) VALUES
(1, '0.5', 1),
(2, '1', 2),
(3, '2', 3),
(4, '3', 4),
(5, '5', 5),
(6, '8', 6),
(7, '13', 7);

-- --------------------------------------------------------

--
-- Table structure for table `story`
--

CREATE TABLE IF NOT EXISTS `story` (
  `story_id` int(11) NOT NULL AUTO_INCREMENT,
  `text` text NOT NULL,
  `details` text NOT NULL,
  `estimate_id` int(11) NOT NULL,
  `column_id` int(11) NOT NULL,
  `sort` int(11) NOT NULL,
  PRIMARY KEY (`story_id`)
) ENGINE=InnoDB  DEFAULT CHARSET=latin1 AUTO_INCREMENT=12 ;

--
-- Dumping data for table `story`
--

INSERT INTO `story` (`story_id`, `text`, `details`, `estimate_id`, `column_id`, `sort`) VALUES
(1, 'As a project manager, I would like to attach spec notes to a user story', '', 2, 1, 1),
(2, 'As a project manager, I would like to schedule multiple sprints, each rotating on the sprint schedule (weekly)', '', 4, 1, 2),
(5, 'As a project manager, I would like to have the prioritized backlog automatically build up a sprint per week', '', 5, 1, 3),
(6, 'As a developer, I would like to estimate user stories', '', 4, 0, 1),
(7, 'As a project manager, I would like to see the sprint "to-do" estimate total and the sprint "done" total', '', 3, 2, 2),
(8, 'As a project manager, I would like to add a new user story to the backlog', '', 4, 2, 1),
(9, 'As a developer, I would like to drag-and-drop a user story from "to-do" into "in progress"', '', 2, 4, 1),
(10, 'As a developer, I would like to drag-and-drop a user story from "in progress" to "done"', '', 2, 4, 2),
(11, 'As a project manager, I would like to drag-and-drop user stories into the sprint, prioritized (sorted)', '', 4, 3, 3);

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
