/**

\page utilities

\section ProjectGenerator ProjectGenerator

generate a template project file 

\section hrpsys-simulator hrpsys-simulator

read a project file and execute simulation

hrpsys-simulator [project file] [options]

-nodisplay execute simulation without display<br>
-realtime execute simulation in real-time<br>
-usebbox use bounding boxes instead of actual geometries<br>
-endless never finish simulation<br>
-showsensor show sensor output<br>

Note:NameSever and openhrp-model-loader must be running

\section hrpsys-simulator-jython hrpsys-simulator-jython

read a project file and execute simulation and a jython script

Note:NameSever and openhrp-model-loader must be running

hrpsys-simulator-jython [project file] [jython script] [options]

-nodisplay execute simulation without display<br>
-realtime execute simulation in real-time<br>
-usebbox use bounding boxes instead of actual geometries<br>
-endless never finish simulation<br>
-showsensor show sensor output<br>

\section hrpsys-simulator-python hrpsys-simulator-python

read a project file and execute simulation and a python script

hrpsys-simulator-python [project file] [python script] [options]

nodisplay execute simulation without display<br>
realtime execute simulation in real-time<br>
usebbox use bounding boxes instead of actual geometries<br>
endless never finish simulation<br>
showsensor show sensor output<br>

Note:NameSever and openhrp-model-loader must be running

\section hrpsys-viewer hrpsys-viewer

visualize a model file and work as a OnlineViewer server

hrpsys-viewer [model file]

Note:NameSever and openhrp-model-loader must be running

\section hrpsys-monitor hrpsys-monitor

monitor robot's status

hrpsys-monitor [project file] [-rh rtcName] [-sh rtcName]

-rh name of %RTC which provides OpenHRP::RobotHardwareService (default:RobotHardware0)<br>
-sh name of %RTC which provides OpenHRP::StateHolderService (default:StateHolder0)<br>

Note:NameSever and openhrp-model-loader must be running

\section hrpsysjy hrpsysjy

Jython interpreter with hrpsys library

hrpsysjy [jython arguments]

\section hrpsyspy hrpsyspy

Python interpreter with hrpsys library

hrpsyspy [python arguments]

\section python_binding Python bindings

A python module hrpsys.so provides python bindings to setup and execute simulations interactively.
*/