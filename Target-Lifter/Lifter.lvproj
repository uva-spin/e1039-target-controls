<?xml version='1.0' encoding='UTF-8'?>
<Project Type="Project" LVVersion="19008000">
	<Item Name="My Computer" Type="My Computer">
		<Property Name="server.app.propertiesEnabled" Type="Bool">true</Property>
		<Property Name="server.control.propertiesEnabled" Type="Bool">true</Property>
		<Property Name="server.tcp.enabled" Type="Bool">false</Property>
		<Property Name="server.tcp.port" Type="Int">0</Property>
		<Property Name="server.tcp.serviceName" Type="Str">My Computer/VI Server</Property>
		<Property Name="server.tcp.serviceName.default" Type="Str">My Computer/VI Server</Property>
		<Property Name="server.vi.callsEnabled" Type="Bool">true</Property>
		<Property Name="server.vi.propertiesEnabled" Type="Bool">true</Property>
		<Property Name="specify.custom.address" Type="Bool">false</Property>
		<Item Name="ACK.vi" Type="VI" URL="../ACK.vi"/>
		<Item Name="Count.vi" Type="VI" URL="../Count.vi"/>
		<Item Name="Lifter_Main_Vi.vi" Type="VI" URL="../Lifter_Main_Vi.vi"/>
		<Item Name="Motor TCP Setup.vi" Type="VI" URL="../Motor TCP Setup.vi"/>
		<Item Name="Move.vi" Type="VI" URL="../Move.vi"/>
		<Item Name="STOP_Motor.vi" Type="VI" URL="../STOP_Motor.vi"/>
		<Item Name="Switch_status.vi" Type="VI" URL="../Switch_status.vi"/>
		<Item Name="Velocity.vi" Type="VI" URL="../Velocity.vi"/>
		<Item Name="Dependencies" Type="Dependencies">
			<Item Name="vi.lib" Type="Folder">
				<Item Name="LJUD_eGetS.vi" Type="VI" URL="/&lt;vilib&gt;/addons/LabVIEW_LJUD-2020-11-02/LabVIEW_LJUD-release-2020-11-02/LabJackUD DLL Functions/LJUD_eGetS.vi"/>
				<Item Name="LJUD_OpenLabJackS.vi" Type="VI" URL="/&lt;vilib&gt;/addons/LabVIEW_LJUD-2020-11-02/LabVIEW_LJUD-release-2020-11-02/LabJackUD DLL Functions/LJUD_OpenLabJackS.vi"/>
				<Item Name="subTimeDelay.vi" Type="VI" URL="/&lt;vilib&gt;/express/express execution control/TimeDelayBlock.llb/subTimeDelay.vi"/>
			</Item>
			<Item Name="labjackud.dll" Type="Document" URL="labjackud.dll">
				<Property Name="NI.PreserveRelativePath" Type="Bool">true</Property>
			</Item>
		</Item>
		<Item Name="Build Specifications" Type="Build"/>
	</Item>
</Project>
