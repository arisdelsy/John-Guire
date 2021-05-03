procedure TurnOnGreenLight2;  
  begin 

    if g_iTrafficLights = 1 then
      Print(Auxfmt20);
      SetDigout(g_ciDigSlot, g_ciRedLight, g_ciDigOutOff);
      SetTimer
      SetDigout(g_ciDigSlot, g_ciGreenLight, g_ciDigOutOn); 
      g_sLightStatus := "GREEN";
      SetImageWidgetPath(btnStop, "local://24.png");
      SetImageWidgetPath(btnGo, "local://23.png");
    end if;

  end;