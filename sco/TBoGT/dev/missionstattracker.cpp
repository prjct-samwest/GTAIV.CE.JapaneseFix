void main()
{
    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U2 = 0;
    l_U3 = 0;
    l_U4 = 0;
    l_U5 = 0;
    l_U6 = 1;
    l_U72 = 6;
    l_U110 = nil;
    l_U123 = nil;
    l_U141 = 1;
    l_U176 = nil;
    l_U196 = 1;
    l_U272 = 6;
    l_U281 = "BOGT_BoxDrop";
    l_U282 = "BOGT_Box_TickDrop";
    l_U347 = 0.63600000;
    l_U348 = 0.37600000;
    l_U397 = 0.05200000;
    l_U398 = 0.35300000;
    l_U399 = 0.30000000;
    l_U400 = 0.37200000;
    l_U401 = 0.37300000;
    l_U402 = 0.38700000;
    l_U403 = 0.44400000;
    l_U404 = 0.03750000;
    l_U405 = 0.36900000;
    l_U406 = 0.62350000;
    l_U407 = 0.60800000;
    l_U408 = {0.24300000, 0.46700000, 0.00000000};
    l_U411 = {0.23100000, 0.43500000, 0.00000000};
    l_U414 = {0.23100000, 0.43500000, 0.00000000};
    l_U417 = {0.31920000, 0.65250000, 0.00000000};
    l_U420 = {0.31920000, 0.65250000, 0.00000000};
    l_U423 = {0.24300000, 0.46700000, 0.00000000};
    l_U426 = {0.50000000, 1.10000000, 0.00000000};
    l_U429 = {0.31920000, 0.65250000, 0.00000000};
    l_U432 = {0.18225000, 0.35025000, 0.00000000};
    l_U435 = 0.30000000;
    l_U436 = 0.37000000;
    l_U437 = 0.56200000;
    l_U438 = 0.40100000;
    l_U439 = 0.30000000;
    l_U440 = 0.37000000;
    l_U441 = 0.69700000;
    l_U442 = 0.40100000;
    l_U443 = 0.30000000;
    l_U444 = 0.37000000;
    l_U445 = 0.66500000;
    l_U446 = 0.40100000;
    l_U447 = 0.32500000;
    l_U448 = 0.62500000;
    l_U449 = 0.00800000;
    l_U450 = 0.49700000;
    l_U451 = 0.52500000;
    l_U452 = 0.49700000;
    l_U453 = 0.51800000;
    l_U454 = 1;
    l_U455 = 0;
    l_U456 = {0.50000000, 0.50000000, 0};
    l_U459 = 0.20000000;
    l_U460 = 0.20000000;
    l_U504 = 0;
    l_U505 = 0;
    l_U517 = 0;
    l_U521 = 0;
    l_U522 = 0;
    l_U523 = 1;
    l_U524 = 3;
    l_U526 = 0;
    l_U527 = 1;
    l_U528 = 0;
    l_U532 = 0;
    l_U533 = 0;
    l_U534 = 0;
    l_U535 = 0;
    l_U536 = 0;
    l_U537 = 0;
    l_U538 = 0;
    l_U539 = 0;
    l_U587 = 0;
    l_U588 = 0;
    l_U602 = 0;
    l_U603 = 0;
    l_U623 = 0;
    while (true)
    {
        WAIT( 0 );
        switch (l_U526)
        {
            case 0:
            sub_894();
            sub_2345();
            l_U526 = 1;
            break;
            case 1:
            sub_2486();
            g_U2674 = 1;
            sub_56490();
            HIDE_HUD_AND_RADAR_THIS_FRAME();
            break;
            case 2:
            GET_GAME_TIMER( ref l_U530 );
            l_U531 = l_U530 - l_U529;
            g_U2674 = 1;
            sub_56490();
            HIDE_HUD_AND_RADAR_THIS_FRAME();
            if (l_U531 > 1000)
            {
                l_U526 = 3;
            }
            break;
            case 3:
            DISPLAY_RADAR( 1 );
            DISPLAY_HUD( 1 );
            g_U2674 = 0;
            TERMINATE_THIS_SCRIPT();
            break;
        }
    }
    return;
}

void sub_894()
{
    int iVar2;

    g_U43496 = 0;
    g_U43498 = 0;
    g_U43499 = 0;
    g_U43500 = 0;
    g_U43561 = 0;
    g_U43588 = 0;
    g_U43500 = 0;
    iVar2 = GET_CURRENT_LANGUAGE();
    if (iVar2 == 4)
    {
        l_U441 = 0.73000000;
        l_U437 = 0.56300000;
        l_U445 = 0.72200000;
    }
    else if (iVar2 == 1)
    {
        l_U441 = 0.72700000;
        l_U437 = 0.59400000;
        l_U445 = 0.76500000;
    }
    else if (iVar2 == 3)
    {
        l_U441 = 0.72600000;
        l_U445 = 0.72600000;
    }
    else if (iVar2 == 2)
    {
        l_U441 = 0.76000000;
        l_U445 = 0.76000000;
    }
    else if (iVar2 == 5)
    {
        l_U441 = 0.77000000;
        l_U445 = 0.77000000;
    };;;;;
    if (NOT GET_IS_WIDESCREEN())
    {
        l_U397 = 0.05200000;
        l_U408._fU0 = 0.34600000;
        l_U408._fU4 = 0.51200000;
        l_U411._fU0 = 0.34000000;
        l_U411._fU4 = 0.43500000;
        l_U414._fU0 = 0.34000000;
        l_U417._fU0 = 0.43500000;
        l_U420._fU0 *= 1.25000000;
        l_U423._fU0 = 0.34600000;
        l_U426._fU0 *= 1.55000000;
        l_U429._fU0 *= 1.65000000;
        l_U432._fU0 *= 1.25000000;
        l_U347 = 0.66000000;
        l_U348 = 0.37500000;
        l_U449 = 0.00800000;
        l_U450 = 0.49000000;
        l_U451 = 0.53400000;
        l_U452 = 0.49700000;
        l_U453 = 0.53000000;
        l_U398 = 0.35300000;
        l_U399 = 0.30000000;
        l_U400 = 0.36800000;
        l_U401 = 0.37200000;
        l_U402 = 0.38600000;
        l_U403 = 0.44400000;
        l_U404 = 0.03500000;
        l_U405 = 0.35000000;
        l_U406 = 0.63800000;
        l_U407 = 0.62100000;
        l_U435 = 0.30000000;
        l_U436 = 0.37000000;
        l_U437 = 0.56300000;
        l_U438 = 0.40100000;
        l_U439 = 0.30000000;
        l_U440 = 0.37000000;
        l_U441 = 0.73100000;
        l_U442 = 0.40100000;
        l_U443 = 0.30000000;
        l_U444 = 0.37000000;
        l_U445 = 0.73100000;
        l_U446 = 0.40100000;
        if (iVar2 == 4)
        {
            l_U441 = 0.79400000;
            l_U437 = 0.56300000;
            l_U445 = 0.76000000;
        }
        else if (iVar2 == 1)
        {
            l_U441 = 0.79500000;
            l_U437 = 0.62900000;
            l_U445 = 0.85900000;
        }
        else if (iVar2 == 3)
        {
            l_U441 = 0.79700000;
            l_U437 = 0.59700000;
            l_U445 = 0.79700000;
        }
        else if (iVar2 == 2)
        {
            l_U441 = 0.82600000;
            l_U437 = 0.59400000;
            l_U445 = 0.85500000;
        }
        else if (iVar2 == 5)
        {
            l_U441 = 0.86000000;
            l_U437 = 0.61500000;
            l_U445 = 0.84000000;
        };;;;;
        l_U447 = 0.10000000;
        l_U448 = 0.64500000;
    }
    l_U349[0] = "BOGT_LOGO_256_01";
    l_U349[1] = "BOGT_LOGO_256_02";
    l_U349[2] = "BOGT_LOGO_256_03";
    l_U357[0] = {0.50000000, 0.20000000, 0.00000000};
    l_U357[1] = {0.50000000, 0.20000000, 0.00000000};
    l_U357[2] = {0.50000000, 0.20000000, 0.00000000};
    l_U367[0] = {0.35000000, 0.30000000, 0.00000000};
    l_U367[1] = {0.35000000, 0.30000000, 0.00000000};
    l_U367[2] = {0.35000000, 0.30000000, 0.00000000};
    if (NOT GET_IS_WIDESCREEN())
    {
        l_U367[0] = {0.39025000, 0.27660000, 0.00000000};
        l_U367[1] = {0.39025000, 0.27660000, 0.00000000};
        l_U367[2] = {0.39025000, 0.27660000, 0.00000000};
    }
    l_U377[0] = 0;
    l_U377[1] = 0;
    l_U377[2] = 0;
    l_U381[0] = 255;
    l_U381[1] = 255;
    l_U381[2] = 255;
    l_U385[0] = 255;
    l_U385[1] = 255;
    l_U385[2] = 255;
    l_U389[0] = 255;
    l_U389[1] = 255;
    l_U389[2] = 255;
    l_U393[0] = 255;
    l_U393[1] = 255;
    l_U393[2] = 255;
    return;
}

void sub_2345()
{
    l_U560 = 1500.00000000;
    l_U559 = 2000.00000000;
    l_U558 = g_U43625;
    l_U563 = 0.00000000;
    l_U562 = 100.00000000;
    l_U561 = 700.00000000;
    l_U580 = l_U561 + l_U558;
    l_U586 = 2000;
    l_U589 = 10000;
    l_U590 = 500;
    l_U604 = 6300;
    return;
}

void sub_2486()
{
    if (l_U571 == 1)
    {
        sub_2507();
        l_U571 = 0;
    }
    if (l_U534 == 1)
    {
        if (l_U564 == 0)
        {
            GET_GAME_TIMER( ref l_U540 );
            l_U564 = 1;
        }
        GET_GAME_TIMER( ref l_U541 );
        l_U542 = l_U541 - l_U540;
        if (l_U542 > l_U560)
        {
            l_U564 = 0;
            l_U534 = 0;
        }
        else
        {
            sub_3507( FLOOR( l_U560 ), l_U542 );
            sub_3593();
        }
    }
    if (l_U535 == 1)
    {
        if (l_U565 == 0)
        {
            GET_GAME_TIMER( ref l_U543 );
            l_U565 = 1;
        }
        GET_GAME_TIMER( ref l_U544 );
        l_U545 = l_U544 - l_U543;
        if (l_U545 > l_U559)
        {
            l_U565 = 0;
            l_U535 = 0;
        }
        else
        {
            sub_3840( FLOOR( l_U559 ), l_U545 );
            sub_4064();
        }
    }
    if (l_U536 == 1)
    {
        if (l_U566 == 0)
        {
            GET_GAME_TIMER( ref l_U546 );
            l_U566 = 1;
        }
        GET_GAME_TIMER( ref l_U547 );
        l_U548 = l_U547 - l_U546;
        sub_4277( FLOOR( l_U558 ), l_U548 );
        sub_4389();
    }
    if (g_U43491 == 1)
    {
        if (NOT GET_IS_WIDESCREEN())
        {
            SET_HELP_MESSAGE_BOX_SIZE_F( 0.23000000 );
        }
        sub_4556();
        while (IS_FRONTEND_FADING())
        {
            WAIT( 0 );
        }
        while (sub_4656())
        {
            WAIT( 0 );
        }
        while (NOT IS_SCREEN_FADED_IN())
        {
            WAIT( 0 );
        }
        while (sub_4734())
        {
            WAIT( 0 );
        }
        if (sub_4879() == 0)
        {
            sub_4962();
        }
        if (sub_5141())
        {
            sub_5462();
            if (l_U567 == 0)
            {
                sub_5513();
                GET_GAME_TIMER( ref l_U549 );
                GET_GAME_TIMER( ref l_U552 );
                GET_GAME_TIMER( ref l_U555 );
                l_U537 = 0;
                l_U538 = 0;
                l_U539 = 0;
                l_U568 = 1;
                l_U569 = 1;
                l_U570 = 1;
                l_U567 = 1;
                l_U572 = 1;
                g_U43561 = 1;
                if (g_U43137 == 0)
                {
                    if (g_U43623 == 1)
                    {
                        g_U43626 = 1;
                    }
                    else
                    {
                        g_U43626 = 0;
                    }
                }
                sub_5712();
                sub_5792();
                sub_6456();
            }
            GET_GAME_TIMER( ref l_U550 );
            GET_GAME_TIMER( ref l_U553 );
            GET_GAME_TIMER( ref l_U556 );
            if (l_U568 == 1)
            {
                GET_GAME_TIMER( ref l_U550 );
                l_U551 = l_U550 - l_U549;
                if (l_U551 > l_U563)
                {
                    l_U537 = 1;
                    l_U568 = 0;
                }
            }
            if (l_U569 == 1)
            {
                GET_GAME_TIMER( ref l_U553 );
                l_U554 = l_U553 - l_U552;
                if (l_U554 > l_U562)
                {
                    l_U538 = 1;
                    l_U569 = 0;
                }
            }
            if (l_U570 == 1)
            {
                GET_GAME_TIMER( ref l_U556 );
                l_U557 = l_U556 - l_U555;
                if (l_U557 > l_U561)
                {
                    l_U539 = 1;
                    l_U570 = 0;
                }
            }
            if (l_U537 == 1)
            {
                l_U534 = 1;
                l_U537 = 0;
            }
            if (l_U538 == 1)
            {
                l_U535 = 1;
                l_U538 = 0;
            }
            if (l_U539 == 1)
            {
                l_U536 = 1;
                l_U539 = 0;
            }
        }
        else
        {
            SET_CINEMATIC_BUTTON_ENABLED( 1 );
            l_U572 = 0;
            l_U573 = 0;
            l_U582 = 0;
            g_U43491 = 0;
            l_U571 = 1;
        }
    }
    if (l_U572 == 1)
    {
        if (l_U573 == 0)
        {
            GET_GAME_TIMER( ref l_U577 );
            l_U573 = 1;
        }
        GET_GAME_TIMER( ref l_U578 );
        l_U579 = l_U578 - l_U577;
        if (l_U579 > l_U581)
        {
            if (l_U582 == 0)
            {
                GET_GAME_TIMER( ref l_U574 );
                GET_GAME_TIMER( ref l_U583 );
                l_U582 = 1;
            }
        }
    }
    if (g_U43137 == 0)
    {
        if (g_U43133 == 0)
        {
            if (l_U533 == 0)
            {
                if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "SAVEOFF" ))
                {
                    l_U532 = 11000;
                    l_U533 = 1;
                }
            }
        }
    }
    if (l_U582 == 1)
    {
        GET_GAME_TIMER( ref l_U575 );
        l_U576 = l_U575 - l_U574;
        if (l_U576 < ((l_U580 - 100) + l_U532))
        {
            if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "MissionResultsTimer" )) > 0)
            {
                TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME( "MissionResultsTimer" );
            }
            sub_7887();
            sub_7950();
            SET_CINEMATIC_BUTTON_ENABLED( 0 );
            if (IS_PLAYER_PLAYING( sub_5150() ))
            {
                BLOCK_STATS_MENU_ACTIONS( sub_5150() );
            }
        }
        else
        {
            SET_CINEMATIC_BUTTON_ENABLED( 1 );
            l_U572 = 0;
            l_U573 = 0;
            l_U582 = 0;
            g_U43491 = 0;
            l_U571 = 1;
        }
        GET_GAME_TIMER( ref l_U584 );
        l_U585 = l_U584 - l_U583;
        if (l_U585 > (l_U586 + l_U581))
        {
            if (sub_5141())
            {
                if (g_U43626 == 0)
                {
                    sub_8371( 0 );
                }
                else if (sub_4879() == 0)
                {
                    SET_TEXT_SCALE( l_U408._fU0, l_U408._fU4 );
                    INIT_FRONTEND_HELPER_TEXT();
                    if (IS_CONTROL_JUST_PRESSED( 2, 77 ))
                    {
                        if (l_U623 == 1)
                        {
                            l_U623 = 0;
                        }
                        else
                        {
                            l_U623 = 1;
                        }
                    }
                    if (l_U623 == 1)
                    {
                        if (l_U585 > ((l_U586 + l_U581) + 1000))
                        {
                            DRAW_FRONTEND_HELPER_TEXT( "ResultsDesc3", "ResultsExitBut", 0 );
                            DRAW_FRONTEND_HELPER_TEXT( "ResultsDesc2", "ResultsBut", 0 );
                            sub_8371( 1 );
                        }
                        else
                        {
                            DRAW_FRONTEND_HELPER_TEXT( "ResultsDesc3", "ResultsExitBut", 0 );
                            DRAW_FRONTEND_HELPER_TEXT( "ResultsDesc1", "ResultsBut", 0 );
                            sub_8371( 0 );
                        }
                    }
                    else if (l_U585 > ((l_U586 + l_U581) + 1000))
                    {
                        DRAW_FRONTEND_HELPER_TEXT( "ResultsDesc3", "ResultsExitBut", 0 );
                        DRAW_FRONTEND_HELPER_TEXT( "ResultsDesc1", "ResultsBut", 0 );
                        sub_8371( 0 );
                    }
                    else
                    {
                        sub_8371( 0 );
                    }
                }
                else if (l_U585 < 7000)
                {
                    SET_TEXT_SCALE( l_U408._fU0, l_U408._fU4 );
                    INIT_FRONTEND_HELPER_TEXT();
                    if (IS_CONTROL_JUST_PRESSED( 2, 77 ))
                    {
                        if (l_U623 == 1)
                        {
                            l_U623 = 0;
                        }
                        else
                        {
                            l_U623 = 1;
                        }
                    }
                    if (l_U623 == 1)
                    {
                        if (l_U585 > ((l_U586 + l_U581) + 2000))
                        {
                            DRAW_FRONTEND_HELPER_TEXT( "ResultsDesc3", "ResultsExitBut", 0 );
                            DRAW_FRONTEND_HELPER_TEXT( "ResultsDesc2", "ResultsBut", 0 );
                            sub_8371( 1 );
                        }
                        else
                        {
                            DRAW_FRONTEND_HELPER_TEXT( "ResultsDesc3", "ResultsExitBut", 0 );
                            DRAW_FRONTEND_HELPER_TEXT( "ResultsDesc1", "ResultsBut", 0 );
                            sub_8371( 0 );
                        }
                    }
                    else if (l_U585 > ((l_U586 + l_U581) + 2000))
                    {
                        DRAW_FRONTEND_HELPER_TEXT( "ResultsDesc3", "ResultsExitBut", 0 );
                        DRAW_FRONTEND_HELPER_TEXT( "ResultsDesc1", "ResultsBut", 0 );
                        sub_8371( 0 );
                    }
                    else
                    {
                        sub_8371( 0 );
                    }
                }
                else if (g_U43597 == 1)
                {
                    sub_54738();
                }
                else if (g_U43593 == 1)
                {
                    sub_55319();
                }
                else
                {
                    sub_55887();
                }
                DRAW_FRONTEND_HELPER_TEXT( "ResultsDesc3", "ResultsExitBut", 0 );;;;
            }
        }
    }
    return;
}

void sub_2507()
{
    l_U393[0] = 255;
    l_U393[1] = 255;
    l_U393[2] = 255;
    l_U564 = 0;
    l_U534 = 0;
    l_U565 = 0;
    l_U535 = 0;
    l_U566 = 0;
    l_U536 = 0;
    g_U43491 = 0;
    l_U567 = 0;
    l_U568 = 0;
    l_U569 = 0;
    l_U570 = 0;
    l_U537 = 0;
    l_U504 = 0;
    l_U538 = 0;
    l_U539 = 0;
    l_U586 = 2000;
    l_U466 = {0.30000000, 0.10000000, 0.00000000};
    l_U572 = 0;
    l_U573 = 0;
    l_U582 = 0;
    g_U43561 = 0;
    g_U43588 = 0;
    g_U43500 = 0;
    l_U505 = 0;
    l_U517 = 0;
    l_U521 = 0;
    sub_2730();
    g_U43593 = 0;
    g_U43594 = 0;
    g_U43595 = 0;
    g_U43596 = 0;
    g_U43597 = 0;
    g_U43496 = 0;
    g_U43498 = 0;
    g_U43499 = 0;
    g_U43500 = 0;
    g_U43561 = 0;
    g_U43588 = 0;
    g_U43500 = 0;
    g_U43599 = 1;
    g_U43600 = 1;
    g_U43601 = 1;
    g_U43602 = 1;
    g_U43603 = 1;
    g_U43604 = 1;
    g_U43605 = 1;
    g_U43606 = 1;
    g_U43607 = 1;
    g_U43608 = 1;
    g_U43609 = 1;
    g_U43610 = 1;
    SET_CINEMATIC_BUTTON_ENABLED( 1 );
    g_U43503 = 0;
    g_U43506 = 0;
    g_U43509 = 0;
    g_U43512 = 0;
    g_U43515 = 0;
    g_U43516 = 0;
    g_U43519 = 0;
    g_U43522 = 0;
    g_U43558 = 0;
    g_U43559 = 0;
    SET_HELP_MESSAGE_BOX_SIZE_F( 0.28000000 );
    sub_3061();
    GET_GAME_TIMER( ref l_U529 );
    g_U43625 = 15000;
    l_U526 = 2;
    return;
}

void sub_2730()
{
    g_U95._fU100 = 0;
    g_U95._fU104 = 0;
    return;
}

void sub_3061()
{
    if (l_U353[0] != nil)
    {
        RELEASE_TEXTURE( l_U353[0] );
    }
    if (l_U353[1] != nil)
    {
        RELEASE_TEXTURE( l_U353[1] );
    }
    if (l_U353[2] != nil)
    {
        RELEASE_TEXTURE( l_U353[2] );
    }
    if (l_U279 != nil)
    {
        RELEASE_TEXTURE( l_U279 );
    }
    if (l_U280 != nil)
    {
        RELEASE_TEXTURE( l_U280 );
    }
    if (l_U461 != nil)
    {
        RELEASE_TEXTURE( l_U461 );
    }
    if (l_U474 != nil)
    {
        RELEASE_TEXTURE( l_U474 );
    }
    if (l_U485 != nil)
    {
        RELEASE_TEXTURE( l_U485 );
    }
    if (l_U496 != nil)
    {
        RELEASE_TEXTURE( l_U496 );
    }
    if (l_U278 != nil)
    {
        REMOVE_TXD( l_U278 );
    }
    return;
}

void sub_3507(unknown uParam0, unknown uParam1)
{
    float fVar4;
    float fVar5;
    float fVar6;
    unknown uVar7;
    float fVar8;

    fVar4 = 256;
    fVar5 = 0.00000000;
    fVar6 = 0;
    uVar7 = TO_FLOAT( uParam0 );
    fVar8 = (fVar5 - fVar4) / (uVar7 - fVar6);
    l_U393[0] = FLOOR( (fVar8 * uParam1) + 256 );
    return;
}

void sub_3593()
{
    SET_SPRITES_DRAW_BEFORE_FADE( 1 );
    DRAW_SPRITE( l_U353[0], l_U357[0]._fU0, l_U357[0]._fU4, l_U367[0]._fU0, l_U367[0]._fU4, l_U377[0], l_U381[0], l_U385[0], l_U389[0], l_U393[0] );
    SET_SPRITES_DRAW_BEFORE_FADE( 0 );
    return;
}

void sub_3840(unknown uParam0, unknown uParam1)
{
    float fVar4;
    float fVar5;
    float fVar6;
    float fVar7;
    float fVar8;

    if (uParam1 < ((TO_FLOAT( uParam0 )) / 3))
    {
        fVar4 = 0.00000000;
        fVar5 = 256.00000000;
        fVar6 = 0.00000000;
        fVar7 = (TO_FLOAT( uParam0 )) / 3;
        fVar8 = (fVar5 - fVar4) / (fVar7 - fVar6);
        l_U393[1] = FLOOR( (fVar8 * uParam1) + 0 );
    }
    else if (uParam1 > ((4 * (TO_FLOAT( uParam0 ))) / 5))
    {
        fVar4 = 256.00000000;
        fVar5 = 0.00000000;
        fVar6 = (4 * (TO_FLOAT( uParam0 ))) / 5;
        fVar7 = TO_FLOAT( uParam0 );
        fVar8 = (fVar5 - fVar4) / (fVar7 - fVar6);
        l_U393[1] = FLOOR( (fVar8 * uParam1) + 256 );
    }
    return;
}

void sub_4064()
{
    SET_SPRITES_DRAW_BEFORE_FADE( 1 );
    DRAW_SPRITE( l_U353[1], l_U357[1]._fU0, l_U357[1]._fU4, l_U367[1]._fU0, l_U367[1]._fU4, l_U377[1], l_U381[1], l_U385[1], l_U389[1], l_U393[1] );
    SET_SPRITES_DRAW_BEFORE_FADE( 0 );
    return;
}

void sub_4277(unknown uParam0, unknown uParam1)
{
    float fVar4;
    float fVar5;
    float fVar6;
    float fVar7;
    float fVar8;

    if (uParam1 < ((TO_FLOAT( uParam0 )) / 8))
    {
        fVar4 = 0.00000000;
        fVar5 = 256.00000000;
        fVar6 = 0.00000000;
        fVar7 = (TO_FLOAT( uParam0 )) / 8;
        fVar8 = (fVar5 - fVar4) / (fVar7 - fVar6);
        l_U393[2] = FLOOR( (fVar8 * uParam1) + 0 );
    }
    return;
}

void sub_4389()
{
    SET_SPRITES_DRAW_BEFORE_FADE( 1 );
    DRAW_SPRITE( l_U353[2], l_U357[2]._fU0, l_U357[2]._fU4, l_U367[2]._fU0, l_U367[2]._fU4, l_U377[2], l_U381[2], l_U385[2], l_U389[2], l_U393[2] );
    SET_SPRITES_DRAW_BEFORE_FADE( 0 );
    return;
}

void sub_4556()
{
    if (l_U619 == 0)
    {
        if (g_U12379 == 0)
        {
            l_U618 = 0;
        }
        else
        {
            l_U618 = 1;
        }
        GET_GAME_TIMER( ref l_U620 );
        l_U619 = 1;
    }
    return;
}

int sub_4656()
{
    if (g_U560 == 9)
    {
        return 0;
    }
    return 1;
}

int sub_4734()
{
    int iVar2;

    if (NOT (IS_CHAR_INJURED( sub_4743() )))
    {
        GET_CURRENT_CHAR_WEAPON( sub_4743(), ref iVar2 );
    }
    if (((iVar2 == 35) || (iVar2 == 17)) || (iVar2 == 16))
    {
        if ((GET_CONTROL_VALUE( 0, 6 )) > 10)
        {
            return 1;
        }
    }
    return 0;
}

void sub_4743()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_4879()
{
    if (((((g_U43593 == 1) || (g_U43594 == 1)) || (g_U43595 == 1)) || (g_U43596 == 1)) || (g_U43597 == 1))
    {
        return 1;
    }
    return 0;
}

void sub_4962()
{
    if (sub_4971())
    {
        AWARD_ACHIEVEMENT( 64 );
    }
    if (sub_5052())
    {
        AWARD_ACHIEVEMENT( 65 );
    }
    return;
}

int sub_4971()
{
    int I;

    for ( I = 0; I <= 25; I++ )
    {
        if (g_U43463[I] < 80)
        {
            return 0;
        }
    }
    return 1;
}

int sub_5052()
{
    int I;

    for ( I = 0; I <= 25; I++ )
    {
        if (g_U43463[I] < 100)
        {
            return 0;
        }
    }
    return 1;
}

int sub_5141()
{
    if (((((IS_PLAYER_PLAYING( sub_5150() )) AND (NOT IS_MINIGAME_IN_PROGRESS())) AND (NOT IS_PAUSE_MENU_ACTIVE())) AND (NOT sub_5206())) AND (NOT sub_5315()))
    {
        return 1;
    }
    return 0;
}

void sub_5150()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

int sub_5206()
{
    if (l_U618 == 1)
    {
        GET_GAME_TIMER( ref l_U621 );
        l_U622 = l_U621 - l_U620;
        if ((l_U622 > 1000) AND (g_U12379 == 1))
        {
            return 1;
        }
    }
    if ((g_U12379 == 1) AND (l_U618 == 0))
    {
        return 1;
    }
    return 0;
}

int sub_5315()
{
    if (IS_PLAYER_PLAYING( sub_5150() ))
    {
        if (g_U43626 == 1)
        {
            if (l_U585 > ((l_U586 + l_U581) + 2000))
            {
                BLOCK_STATS_MENU_ACTIONS( sub_5150() );
                if (IS_CONTROL_PRESSED( 2, 78 ))
                {
                    BLOCK_STATS_MENU_ACTIONS( sub_5150() );
                    return 1;
                }
            }
        }
    }
    return 0;
}

void sub_5462()
{
    int iVar2;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    g_U22959 = iVar2 + 2000;
    return;
}

void sub_5513()
{
    if (l_U504 == 0)
    {
        l_U277 = "Stats";
        REQUEST_STREAMED_TXD( l_U277, 1 );
        l_U504 = 1;
    }
    return;
}

void sub_5712()
{
    return sub_5723( 1, 1 );
}

int sub_5723(boolean bParam0, unknown uParam1)
{
    if (bParam0)
    {
        g_U95._fU104 = 1;
    }
    if ((uParam1) AND (g_U560 != 9))
    {
        g_U95._fU100 = 1;
    }
    return 1;
}

void sub_5792()
{
    while (NOT (HAS_STREAMED_TXD_LOADED( l_U277 )))
    {
        WAIT( 0 );
    }
    l_U353[0] = GET_TEXTURE_FROM_STREAMED_TXD( l_U277, l_U349[0] );
    l_U353[1] = GET_TEXTURE_FROM_STREAMED_TXD( l_U277, l_U349[1] );
    l_U353[2] = GET_TEXTURE_FROM_STREAMED_TXD( l_U277, l_U349[2] );
    l_U462 = "BOGT_Rainbow_1024";
    l_U463 = {0.50000000, 0.30000000, 0.00000000};
    l_U466 = {0.30000000, 0.10000000, 0.00000000};
    if (NOT GET_IS_WIDESCREEN())
    {
        l_U466 = {0.33465000, 0.10000000, 0.00000000};
    }
    l_U469 = 0.00000000;
    l_U470 = 255;
    l_U471 = 255;
    l_U472 = 255;
    l_U473 = 90;
    l_U461 = GET_TEXTURE_FROM_STREAMED_TXD( l_U277, l_U462 );
    l_U475 = "BOGT_Rainbow_512_BLURSIDES";
    l_U476 = {0.50000000, 0.30000000, 0.00000000};
    l_U479 = {0.50000000 + 0.25000000, 0.30000000, 0.00000000};
    l_U482 = {0.30000000, 0.10000000, 0.00000000};
    if (NOT GET_IS_WIDESCREEN())
    {
        l_U482 = {0.33465000, 0.10000000, 0.00000000};
    }
    l_U474 = GET_TEXTURE_FROM_STREAMED_TXD( l_U277, l_U475 );
    l_U486 = "white";
    l_U490 = 0.50000000;
    l_U487 = {0.26500000, 0.00600000, 0.00000000};
    l_U491 = 0.00000000;
    l_U492 = 255;
    l_U493 = 255;
    l_U494 = 255;
    l_U495 = 255;
    if (NOT GET_IS_WIDESCREEN())
    {
        l_U487 = {0.30200000, 0.00600000, 0.00000000};
    }
    l_U485 = GET_TEXTURE_FROM_STREAMED_TXD( l_U277, l_U486 );
    l_U497 = "BOGT_BlackSquare";
    l_U501 = 0.50100000;
    l_U502 = 0.00100000;
    l_U496 = GET_TEXTURE_FROM_STREAMED_TXD( l_U277, l_U497 );
    return;
}

void sub_6456()
{
    l_U280 = GET_TEXTURE_FROM_STREAMED_TXD( l_U277, l_U282 );
    l_U279 = GET_TEXTURE_FROM_STREAMED_TXD( l_U277, l_U281 );
    l_U283[0] = {l_U406, l_U402 + (l_U397 * 2), 0.00000000};
    l_U283[1] = {l_U406, l_U402 + (l_U397 * 3), 0.00000000};
    l_U283[2] = {l_U406, l_U402 + (l_U397 * 4), 0.00000000};
    l_U283[3] = {l_U406, l_U402 + (l_U397 * 5), 0.00000000};
    l_U283[4] = {l_U406, l_U402 + (l_U397 * 6), 0.00000000};
    l_U283[5] = {l_U406, l_U402 + (l_U397 * 7), 0.00000000};
    l_U283[6] = {l_U406, l_U402 + (l_U397 * 8), 0.00000000};
    l_U283[7] = {l_U406, l_U402 + (l_U397 * 9), 0.00000000};
    l_U283[8] = {l_U406, l_U402 + (l_U397 * 10), 0.00000000};
    l_U319[0] = {l_U347, l_U348 + (l_U397 * 2), 0.00000000};
    l_U319[1] = {l_U347, l_U348 + (l_U397 * 3), 0.00000000};
    l_U319[2] = {l_U347, l_U348 + (l_U397 * 4), 0.00000000};
    l_U319[3] = {l_U347, l_U348 + (l_U397 * 5), 0.00000000};
    l_U319[4] = {l_U347, l_U348 + (l_U397 * 6), 0.00000000};
    l_U319[5] = {l_U347, l_U348 + (l_U397 * 7), 0.00000000};
    l_U319[6] = {l_U347, l_U348 + (l_U397 * 8), 0.00000000};
    l_U319[7] = {l_U347, l_U348 + (l_U397 * 9), 0.00000000};
    l_U319[8] = {l_U347, l_U348 + (l_U397 * 10), 0.00000000};
    l_U311 = {0.01700000, 0.03000000, 0};
    l_U314 = 0;
    l_U315 = 255;
    l_U316 = 255;
    l_U317 = 255;
    l_U318 = 255;
    if (NOT GET_IS_WIDESCREEN())
    {
        l_U311 = {0.02100000, 0.03000000, 0};
    }
    return;
}

void sub_7887()
{
    unknown uVar2;

    if (l_U466._fU4 < 2.00000000)
    {
        GET_FRAME_TIME( ref uVar2 );
        l_U466._fU4 += uVar2 * 2;
    }
    return;
}

void sub_7950()
{
    l_U463._fU4 = l_U463._fU0 * (sub_7971( l_U461 ));
    SET_SPRITES_DRAW_BEFORE_FADE( 1 );
    DRAW_SPRITE( l_U474, l_U476._fU0, l_U476._fU4, l_U482._fU0, l_U466._fU4, l_U469, l_U470, l_U471, l_U472, l_U473 );
    SET_SPRITES_DRAW_BEFORE_FADE( 0 );
    return;
}

float sub_7971(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    float fVar5;

    GET_TEXTURE_RESOLUTION( uParam0, ref uVar3, ref uVar4 );
    fVar5 = (TO_FLOAT( uVar4 )) / (TO_FLOAT( uVar3 ));
    switch (l_U527)
    {
        case 0:
        return 1.00000000 * fVar5;
        break;
        case 1:
        case 2:
        case 3:
        return (4.00000000 / 3.00000000) * fVar5;
        break;
    }
    return (4.00000000 / 3.00000000) * fVar5;
}

void sub_8371(int iParam0)
{
    if (g_U43500 == 0)
    {
        sub_8394();
        sub_8617();
        sub_8710();
        sub_21395();
        g_U43500 = 1;
    }
    if (g_U43137 == 0)
    {
        sub_23023( iParam0 );
        sub_27513( iParam0 );
        sub_27746( 1, "MisDamage", iParam0 );
        sub_28666( 2 );
        g_U43625 = 46000;
        if (g_U43623 == 0)
        {
            if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "MissionResultHelp" )) == 0)
            {
                if (HAS_SCRIPT_LOADED( "MissionResultHelp" ))
                {
                    START_NEW_SCRIPT( "MissionResultHelp", 1024 );
                    MARK_SCRIPT_AS_NO_LONGER_NEEDED( "MissionResultHelp" );
                    g_U43623 = 1;
                }
            }
        }
        if (l_U454)
        {
            if (iParam0 == 0)
            {
                sub_30377( 0 );
                sub_31130();
                sub_31499( 1 );
            }
            else
            {
                sub_32113();
                sub_33019();
                sub_33291( 1 );
            }
        }
    }
    else if (g_U43137 == 1)
    {
        sub_23023( iParam0 );
        sub_27513( iParam0 );
        sub_34393( 1, iParam0 );
        sub_35457( 2, "100pcHeadshot", iParam0 );
        sub_28666( 3 );
        g_U43625 = 15000;
        if (l_U454)
        {
            if (iParam0 == 0)
            {
                sub_30377( 0 );
                sub_31130();
                sub_36424( 1 );
            }
            else
            {
                sub_32113();
                sub_33019();
                sub_36998( 1 );
            }
        }
    }
    else if (g_U43137 == 2)
    {
        sub_23023( iParam0 );
        sub_27513( iParam0 );
        sub_38100( 1, iParam0 );
        sub_34393( 2, iParam0 );
        sub_35457( 3, "GolfTony3", iParam0 );
        sub_28666( 4 );
        g_U43625 = 16000;
        if (l_U454)
        {
            if (iParam0 == 0)
            {
                sub_30377( 0 );
                sub_31130();
                sub_39319( 1 );
                sub_36424( 2 );
            }
            else
            {
                sub_32113();
                sub_33019();
                sub_39873( 1 );
                sub_36998( 2 );
            }
        }
    }
    else if (g_U43137 == 3)
    {
        sub_23023( iParam0 );
        sub_27746( 0, "MisDamage", iParam0 );
        sub_28666( 1 );
        g_U43625 = 13000;
        if (iParam0 == 0)
        {
            sub_30377( 0 );
            sub_31499( 0 );
        }
        else
        {
            sub_32113();
            sub_33291( 0 );
        }
    }
    else if (g_U43137 == 4)
    {
        sub_23023( iParam0 );
        sub_27513( iParam0 );
        sub_41066( 1, "CatchBlogB", iParam0 );
        sub_28666( 2 );
        g_U43625 = 14000;
        if (l_U454)
        {
            if (iParam0 == 0)
            {
                sub_30377( 0 );
                sub_31130();
                sub_42152( 1 );
            }
            else
            {
                sub_32113();
                sub_33019();
                sub_42718( 1 );
            }
        }
    }
    else if (g_U43137 == 5)
    {
        sub_23023( iParam0 );
        sub_27513( iParam0 );
        sub_35457( 1, "DanceT6", iParam0 );
        sub_43732( 2, "SaviourT6", iParam0 );
        sub_28666( 3 );
        g_U43625 = 15000;
        if (l_U454)
        {
            if (iParam0 == 0)
            {
                sub_30377( 0 );
                sub_31130();
            }
            else
            {
                sub_32113();
                sub_33019();
            }
        }
    }
    else if (g_U43137 == 6)
    {
        sub_23023( iParam0 );
        sub_27513( iParam0 );
        sub_35457( 1, "StickyT5", iParam0 );
        sub_28666( 2 );
        g_U43625 = 14000;
        if (l_U454)
        {
            if (iParam0 == 0)
            {
                sub_30377( 0 );
                sub_31130();
            }
            else
            {
                sub_32113();
                sub_33019();
            }
        }
    }
    else if (g_U43137 == 7)
    {
        sub_23023( iParam0 );
        sub_27513( iParam0 );
        sub_35457( 1, "StickyAccT7", iParam0 );
        sub_41066( 2, "WantedLvlT7", iParam0 );
        sub_28666( 3 );
        g_U43625 = 15000;
        if (l_U454)
        {
            if (iParam0 == 0)
            {
                sub_30377( 0 );
                sub_31130();
                sub_42152( 2 );
            }
            else
            {
                sub_32113();
                sub_33019();
                sub_42718( 2 );
            }
        }
    }
    else if (g_U43137 == 8)
    {
        sub_23023( iParam0 );
        sub_27513( iParam0 );
        sub_27746( 1, "HeliDamT8", iParam0 );
        sub_28666( 2 );
        g_U43625 = 15000;
        if (l_U454)
        {
            if (iParam0 == 0)
            {
                sub_30377( 0 );
                sub_31130();
                sub_31499( 1 );
            }
            else
            {
                sub_32113();
                sub_33019();
                sub_33291( 1 );
            }
        }
    }
    else if (g_U43137 == 9)
    {
        sub_23023( iParam0 );
        sub_27746( 0, "HeliDamT9", iParam0 );
        sub_35457( 1, "PursuitT9", iParam0 );
        sub_43732( 2, "LowFlyT9", iParam0 );
        sub_28666( 3 );
        g_U43625 = 15000;
        if (l_U454)
        {
            if (iParam0 == 0)
            {
                sub_30377( 0 );
                sub_31499( 0 );
            }
            else
            {
                sub_32113();
                sub_33291( 0 );
            }
        }
    }
    else if (g_U43137 == 10)
    {
        sub_23023( iParam0 );
        sub_41066( 0, "HangerT10", iParam0 );
        sub_28666( 1 );
        g_U43625 = 13000;
        if (l_U454)
        {
            if (iParam0 == 0)
            {
                sub_30377( 0 );
                sub_42152( 0 );
            }
            else
            {
                sub_32113();
                sub_42718( 0 );
            }
        }
    }
    else if (g_U43137 == 11)
    {
        sub_23023( iParam0 );
        sub_27513( iParam0 );
        sub_38100( 1, iParam0 );
        sub_34393( 2, iParam0 );
        sub_28666( 3 );
        g_U43625 = 15000;
        if (l_U454)
        {
            if (iParam0 == 0)
            {
                sub_30377( 0 );
                sub_31130();
                sub_39319( 1 );
                sub_36424( 2 );
            }
            else
            {
                sub_32113();
                sub_33019();
                sub_39873( 1 );
                sub_36998( 2 );
            }
        }
    }
    else if (g_U43137 == 12)
    {
        sub_23023( iParam0 );
        sub_27513( iParam0 );
        sub_38100( 1, iParam0 );
        sub_34393( 2, iParam0 );
        sub_27746( 3, "BoatDamBRO1", iParam0 );
        sub_45588( 4, "BoatSpedBRO1", iParam0 );
        sub_35457( 5, "RocketBRO1", iParam0 );
        sub_28666( 6 );
        g_U43625 = 18000;
        if (l_U454)
        {
            if (iParam0 == 0)
            {
                sub_30377( 0 );
                sub_31130();
                sub_39319( 1 );
                sub_36424( 2 );
                sub_31499( 3 );
                sub_46594( 4 );
            }
            else
            {
                sub_32113();
                sub_33019();
                sub_39873( 1 );
                sub_36998( 2 );
                sub_33291( 3 );
                sub_47244( 4 );
            }
        }
    }
    else if (g_U43137 == 13)
    {
        sub_23023( iParam0 );
        sub_27513( iParam0 );
        sub_35457( 1, "LandBr2", iParam0 );
        sub_43732( 2, "FirstBr2", iParam0 );
        sub_28666( 3 );
        g_U43625 = 15000;
        if (l_U454)
        {
            if (iParam0 == 0)
            {
                sub_30377( 0 );
                sub_31130();
            }
            else
            {
                sub_32113();
                sub_33019();
            }
        }
    }
    else if (g_U43137 == 14)
    {
        sub_23023( iParam0 );
        sub_27746( 0, "MisDamage", iParam0 );
        sub_45588( 1, "MisTopSpeed", iParam0 );
        sub_35457( 2, "CloseBR3", iParam0 );
        sub_28666( 3 );
        g_U43625 = 15000;
        if (l_U454)
        {
            if (iParam0 == 0)
            {
                sub_30377( 0 );
                sub_31499( 0 );
                sub_46594( 1 );
            }
            else
            {
                sub_32113();
                sub_33291( 0 );
                sub_47244( 1 );
            }
        }
    }
    else if (g_U43137 == 15)
    {
        sub_23023( iParam0 );
        sub_27513( iParam0 );
        sub_48665( 1, "BoatYF1", iParam0 );
        sub_28666( 2 );
        g_U43625 = 14000;
        if (l_U454)
        {
            if (iParam0 == 0)
            {
                sub_30377( 0 );
                sub_31130();
                sub_49632( 1 );
            }
            else
            {
                sub_32113();
                sub_33019();
                sub_50213( 1 );
            }
        }
    }
    else if (g_U43137 == 16)
    {
        sub_23023( iParam0 );
        sub_27513( iParam0 );
        sub_38100( 1, iParam0 );
        sub_34393( 2, iParam0 );
        sub_48665( 3, "HeliDownY2", iParam0 );
        sub_51379( 4, "FreeFallY2", iParam0 );
        sub_28666( 5 );
        g_U43625 = 17000;
        if (l_U454)
        {
            if (iParam0 == 0)
            {
                sub_30377( 0 );
                sub_31130();
                sub_39319( 1 );
                sub_36424( 2 );
                sub_49632( 3 );
            }
            else
            {
                sub_32113();
                sub_33019();
                sub_39873( 1 );
                sub_36998( 2 );
                sub_50213( 3 );
            }
        }
    }
    else if (g_U43137 == 17)
    {
        sub_23023( iParam0 );
        sub_27513( iParam0 );
        sub_27746( 1, "MisTank", iParam0 );
        sub_48665( 2, "CarnageY3", iParam0 );
        sub_35457( 3, "4BulletsYF1", iParam0 );
        sub_28666( 4 );
        g_U43625 = 16000;
        if (l_U454)
        {
            if (iParam0 == 0)
            {
                sub_30377( 0 );
                sub_31130();
                sub_31499( 1 );
                sub_49632( 2 );
            }
            else
            {
                sub_32113();
                sub_33019();
                sub_33291( 1 );
                sub_50213( 2 );
            }
        }
    }
    else if (g_U43137 == 18)
    {
        sub_23023( iParam0 );
        sub_27513( iParam0 );
        sub_35457( 1, "DuckY4", iParam0 );
        sub_48665( 2, "HeliDownY4", iParam0 );
        sub_28666( 3 );
        g_U43625 = 15000;
        if (l_U454)
        {
            if (iParam0 == 0)
            {
                sub_30377( 0 );
                sub_31130();
                sub_49632( 2 );
            }
            else
            {
                sub_32113();
                sub_33019();
                sub_50213( 2 );
            }
        }
    }
    else if (g_U43137 == 19)
    {
        sub_23023( iParam0 );
        sub_27513( iParam0 );
        sub_38100( 1, iParam0 );
        sub_34393( 2, iParam0 );
        sub_28666( 3 );
        g_U43625 = 15000;
        if (l_U454)
        {
            if (iParam0 == 0)
            {
                sub_30377( 0 );
                sub_31130();
                sub_39319( 1 );
                sub_36424( 2 );
            }
            else
            {
                sub_32113();
                sub_33019();
                sub_39873( 1 );
                sub_36998( 2 );
            }
        }
    }
    else if (g_U43137 == 20)
    {
        sub_23023( iParam0 );
        sub_27513( iParam0 );
        sub_38100( 1, iParam0 );
        sub_34393( 2, iParam0 );
        sub_28666( 3 );
        g_U43625 = 15000;
        if (l_U454)
        {
            if (iParam0 == 0)
            {
                sub_30377( 0 );
                sub_31130();
                sub_39319( 1 );
                sub_36424( 2 );
            }
            else
            {
                sub_32113();
                sub_33019();
                sub_39873( 1 );
                sub_36998( 2 );
            }
        }
    }
    else if (g_U43137 == 21)
    {
        sub_23023( iParam0 );
        sub_27513( iParam0 );
        sub_35457( 1, "UseCrowdMum1", iParam0 );
        sub_43732( 2, "KOCountMUM1", iParam0 );
        sub_28666( 3 );
        g_U43625 = 15000;
        if (l_U454)
        {
            if (iParam0 == 0)
            {
                sub_30377( 0 );
                sub_31130();
            }
            else
            {
                sub_32113();
                sub_33019();
            }
        }
    }
    else if (g_U43137 == 22)
    {
        sub_23023( iParam0 );
        sub_27513( iParam0 );
        sub_38100( 1, iParam0 );
        sub_34393( 2, iParam0 );
        sub_48665( 3, "VehDestBG1", iParam0 );
        sub_35457( 4, "PlantedBG1", iParam0 );
        sub_43732( 5, "EnemyKillBG1", iParam0 );
        sub_28666( 6 );
        g_U43625 = 18000;
        if (l_U454)
        {
            if (iParam0 == 0)
            {
                sub_30377( 0 );
                sub_31130();
                sub_39319( 1 );
                sub_36424( 2 );
                sub_49632( 3 );
            }
            else
            {
                sub_32113();
                sub_33019();
                sub_39873( 1 );
                sub_36998( 2 );
                sub_50213( 3 );
            }
        }
    }
    else if (g_U43137 == 23)
    {
        sub_23023( iParam0 );
        sub_27513( iParam0 );
        sub_34393( 1, iParam0 );
        sub_35457( 2, "LandingBG2", iParam0 );
        sub_43732( 3, "WindowFallBG2", iParam0 );
        sub_51379( 4, "TruckLandBG2", iParam0 );
        sub_28666( 5 );
        g_U43625 = 17000;
        if (l_U454)
        {
            if (iParam0 == 0)
            {
                sub_30377( 0 );
                sub_31130();
                sub_36424( 1 );
            }
            else
            {
                sub_32113();
                sub_33019();
                sub_36998( 1 );
            }
        }
    }
    else if (g_U43137 == 24)
    {
        sub_23023( iParam0 );
        sub_27513( iParam0 );
        sub_38100( 1, iParam0 );
        sub_34393( 2, iParam0 );
        sub_35457( 3, "AssBG3", iParam0 );
        sub_28666( 4 );
        g_U43625 = 16000;
        if (l_U454)
        {
            if (iParam0 == 0)
            {
                sub_30377( 0 );
                sub_31130();
                sub_39319( 1 );
                sub_36424( 2 );
            }
            else
            {
                sub_32113();
                sub_33019();
                sub_39873( 1 );
                sub_36998( 2 );
            }
        }
    }
    else if (g_U43137 == 25)
    {
        sub_23023( iParam0 );
        sub_27513( iParam0 );
        sub_38100( 1, iParam0 );
        sub_34393( 2, iParam0 );
        sub_48665( 3, "DestructROC1", iParam0 );
        sub_28666( 4 );
        g_U43625 = 16000;
        if (l_U454)
        {
            if (iParam0 == 0)
            {
                sub_30377( 0 );
                sub_31130();
                sub_39319( 1 );
                sub_36424( 2 );
                sub_49632( 3 );
            }
            else
            {
                sub_32113();
                sub_33019();
                sub_39873( 1 );
                sub_36998( 2 );
                sub_50213( 3 );
            }
        }
    };;;;;;;;;;;;;;;;;;;;;;;;;;
    SET_TEXT_DRAW_BEFORE_FADE( 0 );
    return;
}

void sub_8394()
{
    g_U43550 = sub_8410( g_U43503 );
    g_U43551 = sub_8473( g_U43503 );
    g_U43552 = sub_8530( g_U43503 );
    g_U43553 = sub_8579( g_U43503 );
    return;
}

void sub_8410(int iParam0)
{
    int iVar3;
    int iVar4;
    int Result;

    iVar3 = iParam0 / 1000;
    iVar4 = iVar3 / 60;
    Result = iVar4 / 60;
    Result = Result mod 24;
    return Result;
}

void sub_8473(int iParam0)
{
    int iVar3;
    int Result;

    iVar3 = iParam0 / 1000;
    Result = iVar3 / 60;
    Result = Result mod 60;
    return Result;
}

void sub_8530(int iParam0)
{
    int Result;

    Result = iParam0 / 1000;
    Result = Result mod 60;
    return Result;
}

int sub_8579(int iParam0)
{
    return iParam0 mod 1000;
}

void sub_8617()
{
    g_U43554 = sub_8410( g_U43506 );
    g_U43555 = sub_8473( g_U43506 );
    g_U43556 = sub_8530( g_U43506 );
    g_U43557 = sub_8579( g_U43506 );
    return;
}

void sub_8710()
{
    g_U43560 = 50;
    if (g_U43137 == 0)
    {
        if ((g_U43563 == 1) || (sub_8752()))
        {
            g_U43560 += 16;
        }
        if ((g_U43568 == 1) || (sub_9614()))
        {
            g_U43560 += 16;
        }
        if ((g_U43564 == 1) || (sub_10373()))
        {
            g_U43560 += 16;
        }
        if ((((g_U43563 == 1) || (sub_8752())) AND ((g_U43568 == 1) || (sub_9614()))) AND ((g_U43564 == 1) || (sub_10373())))
        {
            g_U43560 = 100;
        }
    }
    else if (g_U43137 == 1)
    {
        if ((g_U43563 == 1) || (sub_8752()))
        {
            g_U43560 += 12;
        }
        if ((g_U43568 == 1) || (sub_9614()))
        {
            g_U43560 += 12;
        }
        if ((g_U43567 == 1) || (sub_11090()))
        {
            g_U43560 += 12;
        }
        if ((g_U43571 == 1) || (sub_11706()))
        {
            g_U43560 += 12;
        }
        if (((((g_U43563 == 1) || (sub_8752())) AND ((g_U43568 == 1) || (sub_9614()))) AND ((g_U43567 == 1) || (sub_11090()))) AND ((g_U43571 == 1) || (sub_11706())))
        {
            g_U43560 = 100;
        }
    }
    else if (g_U43137 == 2)
    {
        if ((g_U43563 == 1) || (sub_8752()))
        {
            g_U43560 += 10;
        }
        if ((g_U43568 == 1) || (sub_9614()))
        {
            g_U43560 += 10;
        }
        if ((g_U43566 == 1) || (sub_12526()))
        {
            g_U43560 += 10;
        }
        if ((g_U43567 == 1) || (sub_11090()))
        {
            g_U43560 += 10;
        }
        if ((g_U43571 == 1) || (sub_11706()))
        {
            g_U43560 += 10;
        }
    }
    else if (g_U43137 == 3)
    {
        if ((g_U43563 == 1) || (sub_8752()))
        {
            g_U43560 += 25;
        }
        if ((g_U43564 == 1) || (sub_10373()))
        {
            g_U43560 += 25;
        }
    }
    else if (g_U43137 == 4)
    {
        if ((g_U43563 == 1) || (sub_8752()))
        {
            g_U43560 += 16;
        }
        if ((g_U43568 == 1) || (sub_9614()))
        {
            g_U43560 += 16;
        }
        if ((g_U43570 == 1) || (sub_13370()))
        {
            g_U43560 += 16;
        }
        if ((((g_U43563 == 1) || (sub_8752())) AND ((g_U43568 == 1) || (sub_9614()))) AND ((g_U43570 == 1) || (sub_13370())))
        {
            g_U43560 = 100;
        }
    }
    else if (g_U43137 == 5)
    {
        if ((g_U43563 == 1) || (sub_8752()))
        {
            g_U43560 += 12;
        }
        if ((g_U43568 == 1) || (sub_9614()))
        {
            g_U43560 += 12;
        }
        if ((g_U43571 == 1) || (sub_11706()))
        {
            g_U43560 += 12;
        }
        if ((g_U43572 == 1) || (sub_14073()))
        {
            g_U43560 += 12;
        }
        if (((((g_U43563 == 1) || (sub_8752())) AND ((g_U43568 == 1) || (sub_9614()))) AND ((g_U43571 == 1) || (sub_11706()))) AND ((g_U43572 == 1) || (sub_14073())))
        {
            g_U43560 = 100;
        }
    }
    else if (g_U43137 == 6)
    {
        if ((g_U43563 == 1) || (sub_8752()))
        {
            g_U43560 += 16;
        }
        if ((g_U43568 == 1) || (sub_9614()))
        {
            g_U43560 += 16;
        }
        if ((g_U43571 == 1) || (sub_11706()))
        {
            g_U43560 += 16;
        }
        if ((((g_U43563 == 1) || (sub_8752())) AND ((g_U43568 == 1) || (sub_9614()))) AND ((g_U43571 == 1) || (sub_11706())))
        {
            g_U43560 = 100;
        }
    }
    else if (g_U43137 == 7)
    {
        if ((g_U43563 == 1) || (sub_8752()))
        {
            g_U43560 += 12;
        }
        if ((g_U43568 == 1) || (sub_9614()))
        {
            g_U43560 += 12;
        }
        if ((g_U43571 == 1) || (sub_11706()))
        {
            g_U43560 += 12;
        }
        if ((g_U43570 == 1) || (sub_13370()))
        {
            g_U43560 += 12;
        }
        if (((((g_U43563 == 1) || (sub_8752())) AND ((g_U43568 == 1) || (sub_9614()))) AND ((g_U43571 == 1) || (sub_11706()))) AND ((g_U43570 == 1) || (sub_13370())))
        {
            g_U43560 = 100;
        }
    }
    else if (g_U43137 == 8)
    {
        if ((g_U43563 == 1) || (sub_8752()))
        {
            g_U43560 += 16;
        }
        if ((g_U43568 == 1) || (sub_9614()))
        {
            g_U43560 += 16;
        }
        if ((g_U43564 == 1) || (sub_10373()))
        {
            g_U43560 += 16;
        }
        if ((((g_U43563 == 1) || (sub_8752())) AND ((g_U43568 == 1) || (sub_9614()))) AND ((g_U43564 == 1) || (sub_10373())))
        {
            g_U43560 = 100;
        }
    }
    else if (g_U43137 == 9)
    {
        if ((g_U43563 == 1) || (sub_8752()))
        {
            g_U43560 += 12;
        }
        if ((g_U43564 == 1) || (sub_10373()))
        {
            g_U43560 += 12;
        }
        if ((g_U43571 == 1) || (sub_11706()))
        {
            g_U43560 += 12;
        }
        if ((g_U43572 == 1) || (sub_14073()))
        {
            g_U43560 += 12;
        }
        if (((((g_U43563 == 1) || (sub_8752())) AND ((g_U43564 == 1) || (sub_10373()))) AND ((g_U43571 == 1) || (sub_11706()))) AND ((g_U43572 == 1) || (sub_14073())))
        {
            g_U43560 = 100;
        }
    }
    else if (g_U43137 == 10)
    {
        if ((g_U43563 == 1) || (sub_8752()))
        {
            g_U43560 += 25;
        }
        if ((g_U43570 == 1) || (sub_13370()))
        {
            g_U43560 += 25;
        }
    }
    else if (g_U43137 == 11)
    {
        if ((g_U43563 == 1) || (sub_8752()))
        {
            g_U43560 += 12;
        }
        if ((g_U43568 == 1) || (sub_9614()))
        {
            g_U43560 += 12;
        }
        if ((g_U43567 == 1) || (sub_11090()))
        {
            g_U43560 += 12;
        }
        if ((g_U43566 == 1) || (sub_12526()))
        {
            g_U43560 += 12;
        }
        if (((((g_U43563 == 1) || (sub_8752())) AND ((g_U43568 == 1) || (sub_9614()))) AND ((g_U43566 == 1) || (sub_12526()))) AND ((g_U43567 == 1) || (sub_11090())))
        {
            g_U43560 = 100;
        }
    }
    else if (g_U43137 == 12)
    {
        if ((g_U43563 == 1) || (sub_8752()))
        {
            g_U43560 += 7;
        }
        if ((g_U43568 == 1) || (sub_9614()))
        {
            g_U43560 += 7;
        }
        if ((g_U43564 == 1) || (sub_10373()))
        {
            g_U43560 += 7;
        }
        if ((g_U43566 == 1) || (sub_12526()))
        {
            g_U43560 += 7;
        }
        if ((g_U43567 == 1) || (sub_11090()))
        {
            g_U43560 += 7;
        }
        if ((g_U43571 == 1) || (sub_11706()))
        {
            g_U43560 += 7;
        }
        if ((g_U43565 == 1) || (sub_16112()))
        {
            g_U43560 += 7;
        }
        if ((((((((g_U43563 == 1) || (sub_8752())) AND ((g_U43568 == 1) || (sub_9614()))) AND ((g_U43564 == 1) || (sub_10373()))) AND ((g_U43566 == 1) || (sub_12526()))) AND ((g_U43567 == 1) || (sub_11090()))) AND ((g_U43571 == 1) || (sub_11706()))) AND ((g_U43565 == 1) || (sub_16112())))
        {
            g_U43560 = 100;
        }
    }
    else if (g_U43137 == 13)
    {
        if ((g_U43563 == 1) || (sub_8752()))
        {
            g_U43560 += 12;
        }
        if ((g_U43568 == 1) || (sub_9614()))
        {
            g_U43560 += 12;
        }
        if ((g_U43571 == 1) || (sub_11706()))
        {
            g_U43560 += 12;
        }
        if ((g_U43572 == 1) || (sub_14073()))
        {
            g_U43560 += 12;
        }
        if (((((g_U43563 == 1) || (sub_8752())) AND ((g_U43568 == 1) || (sub_9614()))) AND ((g_U43571 == 1) || (sub_11706()))) AND ((g_U43572 == 1) || (sub_14073())))
        {
            g_U43560 = 100;
        }
    }
    else if (g_U43137 == 14)
    {
        if ((g_U43563 == 1) || (sub_8752()))
        {
            g_U43560 += 12;
        }
        if ((g_U43564 == 1) || (sub_10373()))
        {
            g_U43560 += 12;
        }
        if ((g_U43565 == 1) || (sub_16112()))
        {
            g_U43560 += 12;
        }
        if ((g_U43571 == 1) || (sub_11706()))
        {
            g_U43560 += 12;
        }
        if (((((g_U43563 == 1) || (sub_8752())) AND ((g_U43564 == 1) || (sub_10373()))) AND ((g_U43565 == 1) || (sub_16112()))) AND ((g_U43571 == 1) || (sub_11706())))
        {
            g_U43560 = 100;
        }
    }
    else if (g_U43137 == 15)
    {
        if ((g_U43563 == 1) || (sub_8752()))
        {
            g_U43560 += 16;
        }
        if ((g_U43568 == 1) || (sub_9614()))
        {
            g_U43560 += 16;
        }
        if ((g_U43569 == 1) || (sub_17338()))
        {
            g_U43560 += 16;
        }
        if ((((g_U43563 == 1) || (sub_8752())) AND ((g_U43568 == 1) || (sub_9614()))) AND ((g_U43569 == 1) || (sub_17338())))
        {
            g_U43560 = 100;
        }
    }
    else if (g_U43137 == 16)
    {
        if ((g_U43563 == 1) || (sub_8752()))
        {
            g_U43560 += 8;
        }
        if ((g_U43568 == 1) || (sub_9614()))
        {
            g_U43560 += 8;
        }
        if ((g_U43566 == 1) || (sub_12526()))
        {
            g_U43560 += 8;
        }
        if ((g_U43567 == 1) || (sub_11090()))
        {
            g_U43560 += 8;
        }
        if ((g_U43569 == 1) || (sub_17338()))
        {
            g_U43560 += 8;
        }
        if ((g_U43573 == 1) || (sub_18150()))
        {
            g_U43560 += 8;
        }
        if (((((((g_U43563 == 1) || (sub_8752())) AND ((g_U43568 == 1) || (sub_9614()))) AND ((g_U43566 == 1) || (sub_12526()))) AND ((g_U43567 == 1) || (sub_11090()))) AND ((g_U43569 == 1) || (sub_17338()))) AND ((g_U43573 == 1) || (sub_18150())))
        {
            g_U43560 = 100;
        }
    }
    else if (g_U43137 == 17)
    {
        if ((g_U43563 == 1) || (sub_8752()))
        {
            g_U43560 += 10;
        }
        if ((g_U43568 == 1) || (sub_9614()))
        {
            g_U43560 += 10;
        }
        if ((g_U43564 == 1) || (sub_10373()))
        {
            g_U43560 += 10;
        }
        if ((g_U43569 == 1) || (sub_17338()))
        {
            g_U43560 += 10;
        }
        if ((g_U43571 == 1) || (sub_11706()))
        {
            g_U43560 += 10;
        }
        if ((((((g_U43563 == 1) || (sub_8752())) AND ((g_U43568 == 1) || (sub_9614()))) AND ((g_U43564 == 1) || (sub_10373()))) AND ((g_U43571 == 1) || (sub_11706()))) AND ((g_U43569 == 1) || (sub_17338())))
        {
            g_U43560 = 100;
        }
    }
    else if (g_U43137 == 18)
    {
        if ((g_U43563 == 1) || (sub_8752()))
        {
            g_U43560 += 12;
        }
        if ((g_U43568 == 1) || (sub_9614()))
        {
            g_U43560 += 12;
        }
        if ((g_U43571 == 1) || (sub_11706()))
        {
            g_U43560 += 12;
        }
        if ((g_U43569 == 1) || (sub_17338()))
        {
            g_U43560 += 12;
        }
        if (((((g_U43563 == 1) || (sub_8752())) AND ((g_U43568 == 1) || (sub_9614()))) AND ((g_U43571 == 1) || (sub_11706()))) AND ((g_U43569 == 1) || (sub_17338())))
        {
            g_U43560 = 100;
        }
    }
    else if (g_U43137 == 19)
    {
        if ((g_U43563 == 1) || (sub_8752()))
        {
            g_U43560 += 12;
        }
        if ((g_U43568 == 1) || (sub_9614()))
        {
            g_U43560 += 12;
        }
        if ((g_U43566 == 1) || (sub_12526()))
        {
            g_U43560 += 12;
        }
        if ((g_U43567 == 1) || (sub_11090()))
        {
            g_U43560 += 12;
        }
        if (((((g_U43563 == 1) || (sub_8752())) AND ((g_U43568 == 1) || (sub_9614()))) AND ((g_U43566 == 1) || (sub_12526()))) AND ((g_U43567 == 1) || (sub_11090())))
        {
            g_U43560 = 100;
        }
    }
    else if (g_U43137 == 20)
    {
        if ((g_U43563 == 1) || (sub_8752()))
        {
            g_U43560 += 12;
        }
        if ((g_U43568 == 1) || (sub_9614()))
        {
            g_U43560 += 12;
        }
        if ((g_U43566 == 1) || (sub_12526()))
        {
            g_U43560 += 12;
        }
        if ((g_U43567 == 1) || (sub_11090()))
        {
            g_U43560 += 12;
        }
        if (((((g_U43563 == 1) || (sub_8752())) AND ((g_U43568 == 1) || (sub_9614()))) AND ((g_U43567 == 1) || (sub_11090()))) AND ((g_U43566 == 1) || (sub_12526())))
        {
            g_U43560 = 100;
        }
    }
    else if (g_U43137 == 21)
    {
        if ((g_U43563 == 1) || (sub_8752()))
        {
            g_U43560 += 12;
        }
        if ((g_U43568 == 1) || (sub_9614()))
        {
            g_U43560 += 12;
        }
        if ((g_U43571 == 1) || (sub_11706()))
        {
            g_U43560 += 12;
        }
        if ((g_U43572 == 1) || (sub_14073()))
        {
            g_U43560 += 12;
        }
        if ((g_U43563 == 1) || (sub_8752()))
        {
            if ((g_U43568 == 1) || (sub_9614()))
            {
                if ((g_U43571 == 1) || (sub_11706()))
                {
                    if ((g_U43572 == 1) || (sub_14073()))
                    {
                        g_U43560 = 100;
                    }
                }
            }
        }
    }
    else if (g_U43137 == 22)
    {
        if ((g_U43563 == 1) || (sub_8752()))
        {
            g_U43560 += 7;
        }
        if ((g_U43568 == 1) || (sub_9614()))
        {
            g_U43560 += 7;
        }
        if ((g_U43566 == 1) || (sub_12526()))
        {
            g_U43560 += 7;
        }
        if ((g_U43567 == 1) || (sub_11090()))
        {
            g_U43560 += 7;
        }
        if ((g_U43569 == 1) || (sub_17338()))
        {
            g_U43560 += 7;
        }
        if ((g_U43571 == 1) || (sub_11706()))
        {
            g_U43560 += 7;
        }
        if ((g_U43572 == 1) || (sub_14073()))
        {
            g_U43560 += 7;
        }
        if ((((((((g_U43563 == 1) || (sub_8752())) AND ((g_U43568 == 1) || (sub_9614()))) AND ((g_U43566 == 1) || (sub_12526()))) AND ((g_U43567 == 1) || (sub_11090()))) AND ((g_U43569 == 1) || (sub_17338()))) AND ((g_U43571 == 1) || (sub_11706()))) AND ((g_U43572 == 1) || (sub_14073())))
        {
            g_U43560 = 100;
        }
    }
    else if (g_U43137 == 23)
    {
        if ((g_U43563 == 1) || (sub_8752()))
        {
            g_U43560 += 8;
        }
        if ((g_U43568 == 1) || (sub_9614()))
        {
            g_U43560 += 8;
        }
        if ((g_U43567 == 1) || (sub_11090()))
        {
            g_U43560 += 8;
        }
        if ((g_U43571 == 1) || (sub_11706()))
        {
            g_U43560 += 8;
        }
        if ((g_U43572 == 1) || (sub_14073()))
        {
            g_U43560 += 8;
        }
        if ((g_U43573 == 1) || (sub_18150()))
        {
            g_U43560 += 8;
        }
        if (((((((g_U43563 == 1) || (sub_8752())) AND ((g_U43568 == 1) || (sub_9614()))) AND ((g_U43567 == 1) || (sub_11090()))) AND ((g_U43571 == 1) || (sub_11706()))) AND ((g_U43572 == 1) || (sub_14073()))) AND ((g_U43573 == 1) || (sub_18150())))
        {
            g_U43560 = 100;
        }
    }
    else if (g_U43137 == 24)
    {
        if ((g_U43563 == 1) || (sub_8752()))
        {
            g_U43560 += 10;
        }
        if ((g_U43568 == 1) || (sub_9614()))
        {
            g_U43560 += 10;
        }
        if ((g_U43566 == 1) || (sub_12526()))
        {
            g_U43560 += 10;
        }
        if ((g_U43567 == 1) || (sub_11090()))
        {
            g_U43560 += 10;
        }
        if ((g_U43571 == 1) || (sub_11706()))
        {
            g_U43560 += 10;
        }
    }
    else if (g_U43137 == 25)
    {
        if ((g_U43563 == 1) || (sub_8752()))
        {
            g_U43560 += 10;
        }
        if ((g_U43568 == 1) || (sub_9614()))
        {
            g_U43560 += 10;
        }
        if ((g_U43566 == 1) || (sub_12526()))
        {
            g_U43560 += 10;
        }
        if ((g_U43567 == 1) || (sub_11090()))
        {
            g_U43560 += 10;
        }
        if ((g_U43569 == 1) || (sub_17338()))
        {
            g_U43560 += 10;
        }
    };;;;;;;;;;;;;;;;;;;;;;;;;;
    if (sub_4879() == 0)
    {
        g_U43463[g_U43137] = g_U43560;
        PRINTNL();
        PRINTSTRING( "*********************************************" );
        PRINTNL();
        PRINTSTRING( "g_MissionFlairTotal[" );
        PRINTINT( g_U43137 );
        PRINTSTRING( "] = " );
        PRINTINT( g_U43560 );
        PRINTNL();
        PRINTSTRING( "*********************************************" );
        PRINTNL();
    }
    return;
}

int sub_8752()
{
    if (g_U43624 == 0)
    {
        if (sub_8775() <= (sub_9502( g_U43137 )))
        {
            return 1;
        }
    }
    return 0;
}

int sub_8775()
{
    if (g_U43137 == 0)
    {
        return GET_INT_STAT( 474 );
    }
    if (g_U43137 == 1)
    {
        return GET_INT_STAT( 478 );
    }
    if (g_U43137 == 2)
    {
        return GET_INT_STAT( 483 );
    }
    if (g_U43137 == 3)
    {
        return GET_INT_STAT( 489 );
    }
    if (g_U43137 == 21)
    {
        return GET_INT_STAT( 577 );
    }
    if (g_U43137 == 15)
    {
        return GET_INT_STAT( 543 );
    }
    if (g_U43137 == 16)
    {
        return GET_INT_STAT( 549 );
    }
    if (g_U43137 == 17)
    {
        return GET_INT_STAT( 556 );
    }
    if (g_U43137 == 12)
    {
        return GET_INT_STAT( 524 );
    }
    if (g_U43137 == 13)
    {
        return GET_INT_STAT( 532 );
    }
    if (g_U43137 == 19)
    {
        return GET_INT_STAT( 567 );
    }
    if (g_U43137 == 20)
    {
        return GET_INT_STAT( 572 );
    }
    if (g_U43137 == 5)
    {
        return GET_INT_STAT( 492 );
    }
    if (g_U43137 == 4)
    {
        return GET_INT_STAT( 497 );
    }
    if (g_U43137 == 6)
    {
        return GET_INT_STAT( 501 );
    }
    if (g_U43137 == 7)
    {
        return GET_INT_STAT( 505 );
    }
    if (g_U43137 == 8)
    {
        return GET_INT_STAT( 510 );
    }
    if (g_U43137 == 9)
    {
        return GET_INT_STAT( 610 );
    }
    if (g_U43137 == 14)
    {
        return GET_INT_STAT( 537 );
    }
    if (g_U43137 == 22)
    {
        return GET_INT_STAT( 582 );
    }
    if (g_U43137 == 23)
    {
        return GET_INT_STAT( 590 );
    }
    if (g_U43137 == 24)
    {
        return GET_INT_STAT( 598 );
    }
    if (g_U43137 == 18)
    {
        return GET_INT_STAT( 562 );
    }
    if (g_U43137 == 10)
    {
        return GET_INT_STAT( 515 );
    }
    if (g_U43137 == 25)
    {
        return GET_INT_STAT( 604 );
    }
    if (g_U43137 == 11)
    {
        return GET_INT_STAT( 519 );
    }
    return 0;
}

void sub_9502(unknown uParam0)
{
    int iVar3;
    int Result;
    unknown uVar5;

    iVar3 = g_U43138[uParam0]._fU0 * 60000;
    Result = (g_U43138[uParam0]._fU4 * 1000) + iVar3;
    return Result;
}

int sub_9614()
{
    if (g_U43624 == 0)
    {
        if (sub_9637() <= g_U43138[g_U43137]._fU8)
        {
            return 1;
        }
    }
    return 0;
}

int sub_9637()
{
    if (g_U43137 == 0)
    {
        return GET_INT_STAT( 475 );
    }
    if (g_U43137 == 1)
    {
        return GET_INT_STAT( 479 );
    }
    if (g_U43137 == 2)
    {
        return GET_INT_STAT( 484 );
    }
    if (g_U43137 == 3)
    {
        ;
    }
    if (g_U43137 == 21)
    {
        return GET_INT_STAT( 578 );
    }
    if (g_U43137 == 15)
    {
        return GET_INT_STAT( 544 );
    }
    if (g_U43137 == 16)
    {
        return GET_INT_STAT( 550 );
    }
    if (g_U43137 == 17)
    {
        return GET_INT_STAT( 557 );
    }
    if (g_U43137 == 12)
    {
        return GET_INT_STAT( 525 );
    }
    if (g_U43137 == 13)
    {
        return GET_INT_STAT( 533 );
    }
    if (g_U43137 == 19)
    {
        return GET_INT_STAT( 568 );
    }
    if (g_U43137 == 20)
    {
        return GET_INT_STAT( 573 );
    }
    if (g_U43137 == 5)
    {
        return GET_INT_STAT( 493 );
    }
    if (g_U43137 == 4)
    {
        return GET_INT_STAT( 498 );
    }
    if (g_U43137 == 6)
    {
        return GET_INT_STAT( 502 );
    }
    if (g_U43137 == 7)
    {
        return GET_INT_STAT( 506 );
    }
    if (g_U43137 == 8)
    {
        return GET_INT_STAT( 511 );
    }
    if (g_U43137 == 9)
    {
        ;
    }
    if (g_U43137 == 14)
    {
        ;
    }
    if (g_U43137 == 22)
    {
        return GET_INT_STAT( 583 );
    }
    if (g_U43137 == 23)
    {
        return GET_INT_STAT( 591 );
    }
    if (g_U43137 == 24)
    {
        return GET_INT_STAT( 599 );
    }
    if (g_U43137 == 18)
    {
        return GET_INT_STAT( 563 );
    }
    if (g_U43137 == 10)
    {
        ;
    }
    if (g_U43137 == 25)
    {
        return GET_INT_STAT( 605 );
    }
    if (g_U43137 == 11)
    {
        return GET_INT_STAT( 520 );
    }
    return 0;
}

int sub_10373()
{
    if (g_U43624 == 0)
    {
        if (sub_10396() <= g_U43138[g_U43137]._fU12)
        {
            return 1;
        }
    }
    return 0;
}

int sub_10396()
{
    if (g_U43137 == 0)
    {
        return GET_INT_STAT( 476 );
    }
    if (g_U43137 == 1)
    {
        ;
    }
    if (g_U43137 == 2)
    {
        ;
    }
    if (g_U43137 == 3)
    {
        return GET_INT_STAT( 490 );
    }
    if (g_U43137 == 21)
    {
        ;
    }
    if (g_U43137 == 15)
    {
        ;
    }
    if (g_U43137 == 16)
    {
        ;
    }
    if (g_U43137 == 17)
    {
        return GET_INT_STAT( 559 );
    }
    if (g_U43137 == 12)
    {
        return GET_INT_STAT( 526 );
    }
    if (g_U43137 == 13)
    {
        ;
    }
    if (g_U43137 == 19)
    {
        ;
    }
    if (g_U43137 == 20)
    {
        ;
    }
    if (g_U43137 == 5)
    {
        ;
    }
    if (g_U43137 == 4)
    {
        ;
    }
    if (g_U43137 == 6)
    {
        ;
    }
    if (g_U43137 == 7)
    {
        ;
    }
    if (g_U43137 == 8)
    {
        return GET_INT_STAT( 513 );
    }
    if (g_U43137 == 9)
    {
        return GET_INT_STAT( 611 );
    }
    if (g_U43137 == 14)
    {
        return GET_INT_STAT( 540 );
    }
    if (g_U43137 == 22)
    {
        ;
    }
    if (g_U43137 == 23)
    {
        ;
    }
    if (g_U43137 == 24)
    {
        ;
    }
    if (g_U43137 == 18)
    {
        ;
    }
    if (g_U43137 == 10)
    {
        ;
    }
    if (g_U43137 == 25)
    {
        ;
    }
    if (g_U43137 == 11)
    {
        ;
    }
    return 0;
}

int sub_11090()
{
    if (g_U43624 == 0)
    {
        if (sub_11113() >= g_U43138[g_U43137]._fU20)
        {
            return 1;
        }
    }
    return 0;
}

int sub_11113()
{
    if (g_U43137 == 0)
    {
        ;
    }
    if (g_U43137 == 1)
    {
        return GET_INT_STAT( 480 );
    }
    if (g_U43137 == 2)
    {
        return GET_INT_STAT( 486 );
    }
    if (g_U43137 == 3)
    {
        ;
    }
    if (g_U43137 == 21)
    {
        ;
    }
    if (g_U43137 == 15)
    {
        ;
    }
    if (g_U43137 == 16)
    {
        return GET_INT_STAT( 552 );
    }
    if (g_U43137 == 17)
    {
        ;
    }
    if (g_U43137 == 12)
    {
        return GET_INT_STAT( 528 );
    }
    if (g_U43137 == 13)
    {
        ;
    }
    if (g_U43137 == 19)
    {
        return GET_INT_STAT( 570 );
    }
    if (g_U43137 == 20)
    {
        return GET_INT_STAT( 575 );
    }
    if (g_U43137 == 5)
    {
        ;
    }
    if (g_U43137 == 4)
    {
        ;
    }
    if (g_U43137 == 6)
    {
        ;
    }
    if (g_U43137 == 7)
    {
        ;
    }
    if (g_U43137 == 8)
    {
        ;
    }
    if (g_U43137 == 9)
    {
        ;
    }
    if (g_U43137 == 14)
    {
        ;
    }
    if (g_U43137 == 22)
    {
        return GET_INT_STAT( 585 );
    }
    if (g_U43137 == 23)
    {
        return GET_INT_STAT( 593 );
    }
    if (g_U43137 == 24)
    {
        return GET_INT_STAT( 601 );
    }
    if (g_U43137 == 18)
    {
        ;
    }
    if (g_U43137 == 10)
    {
        ;
    }
    if (g_U43137 == 25)
    {
        return GET_INT_STAT( 607 );
    }
    if (g_U43137 == 11)
    {
        return GET_INT_STAT( 522 );
    }
    return 0;
}

int sub_11706()
{
    if (g_U43624 == 0)
    {
        if (sub_11729() == 1)
        {
            return 1;
        }
    }
    return 0;
}

int sub_11729()
{
    if (g_U43137 == 0)
    {
        ;
    }
    if (g_U43137 == 1)
    {
        return GET_INT_STAT( 481 );
    }
    if (g_U43137 == 2)
    {
        return GET_INT_STAT( 487 );
    }
    if (g_U43137 == 3)
    {
        ;
    }
    if (g_U43137 == 21)
    {
        return GET_INT_STAT( 579 );
    }
    if (g_U43137 == 15)
    {
        ;
    }
    if (g_U43137 == 16)
    {
        ;
    }
    if (g_U43137 == 17)
    {
        return GET_INT_STAT( 560 );
    }
    if (g_U43137 == 12)
    {
        return GET_INT_STAT( 529 );
    }
    if (g_U43137 == 13)
    {
        return GET_INT_STAT( 534 );
    }
    if (g_U43137 == 19)
    {
        ;
    }
    if (g_U43137 == 20)
    {
        ;
    }
    if (g_U43137 == 5)
    {
        return GET_INT_STAT( 495 );
    }
    if (g_U43137 == 4)
    {
        ;
    }
    if (g_U43137 == 6)
    {
        return GET_INT_STAT( 503 );
    }
    if (g_U43137 == 7)
    {
        return GET_INT_STAT( 507 );
    }
    if (g_U43137 == 8)
    {
        ;
    }
    if (g_U43137 == 9)
    {
        return GET_INT_STAT( 613 );
    }
    if (g_U43137 == 14)
    {
        return GET_INT_STAT( 541 );
    }
    if (g_U43137 == 22)
    {
        return GET_INT_STAT( 587 );
    }
    if (g_U43137 == 23)
    {
        return GET_INT_STAT( 594 );
    }
    if (g_U43137 == 24)
    {
        return GET_INT_STAT( 602 );
    }
    if (g_U43137 == 18)
    {
        return GET_INT_STAT( 564 );
    }
    if (g_U43137 == 10)
    {
        ;
    }
    if (g_U43137 == 25)
    {
        ;
    }
    if (g_U43137 == 11)
    {
        ;
    }
    return 0;
}

int sub_12526()
{
    if (g_U43624 == 0)
    {
        if (sub_12549() >= g_U43138[g_U43137]._fU16)
        {
            return 1;
        }
    }
    return 0;
}

int sub_12549()
{
    if (g_U43137 == 0)
    {
        ;
    }
    if (g_U43137 == 1)
    {
        ;
    }
    if (g_U43137 == 2)
    {
        return GET_INT_STAT( 485 );
    }
    if (g_U43137 == 3)
    {
        ;
    }
    if (g_U43137 == 21)
    {
        ;
    }
    if (g_U43137 == 15)
    {
        ;
    }
    if (g_U43137 == 16)
    {
        return GET_INT_STAT( 551 );
    }
    if (g_U43137 == 17)
    {
        ;
    }
    if (g_U43137 == 12)
    {
        return GET_INT_STAT( 527 );
    }
    if (g_U43137 == 13)
    {
        ;
    }
    if (g_U43137 == 19)
    {
        return GET_INT_STAT( 569 );
    }
    if (g_U43137 == 20)
    {
        return GET_INT_STAT( 574 );
    }
    if (g_U43137 == 5)
    {
        ;
    }
    if (g_U43137 == 4)
    {
        ;
    }
    if (g_U43137 == 6)
    {
        ;
    }
    if (g_U43137 == 7)
    {
        ;
    }
    if (g_U43137 == 8)
    {
        ;
    }
    if (g_U43137 == 9)
    {
        ;
    }
    if (g_U43137 == 14)
    {
        ;
    }
    if (g_U43137 == 22)
    {
        return GET_INT_STAT( 584 );
    }
    if (g_U43137 == 23)
    {
        ;
    }
    if (g_U43137 == 24)
    {
        return GET_INT_STAT( 600 );
    }
    if (g_U43137 == 18)
    {
        ;
    }
    if (g_U43137 == 10)
    {
        ;
    }
    if (g_U43137 == 25)
    {
        return GET_INT_STAT( 606 );
    }
    if (g_U43137 == 11)
    {
        return GET_INT_STAT( 521 );
    }
    return 0;
}

int sub_13370()
{
    if (g_U43624 == 0)
    {
        if (sub_13393() <= g_U43138[g_U43137]._fU44)
        {
            return 1;
        }
    }
    return 0;
}

int sub_13393()
{
    if (g_U43137 == 0)
    {
        ;
    }
    if (g_U43137 == 1)
    {
        ;
    }
    if (g_U43137 == 2)
    {
        ;
    }
    if (g_U43137 == 3)
    {
        ;
    }
    if (g_U43137 == 21)
    {
        ;
    }
    if (g_U43137 == 15)
    {
        ;
    }
    if (g_U43137 == 16)
    {
        ;
    }
    if (g_U43137 == 17)
    {
        ;
    }
    if (g_U43137 == 12)
    {
        ;
    }
    if (g_U43137 == 13)
    {
        ;
    }
    if (g_U43137 == 19)
    {
        ;
    }
    if (g_U43137 == 20)
    {
        ;
    }
    if (g_U43137 == 5)
    {
        ;
    }
    if (g_U43137 == 4)
    {
        return GET_INT_STAT( 499 );
    }
    if (g_U43137 == 6)
    {
        ;
    }
    if (g_U43137 == 7)
    {
        return GET_INT_STAT( 508 );
    }
    if (g_U43137 == 8)
    {
        ;
    }
    if (g_U43137 == 9)
    {
        ;
    }
    if (g_U43137 == 14)
    {
        ;
    }
    if (g_U43137 == 22)
    {
        ;
    }
    if (g_U43137 == 23)
    {
        ;
    }
    if (g_U43137 == 24)
    {
        ;
    }
    if (g_U43137 == 18)
    {
        ;
    }
    if (g_U43137 == 10)
    {
        return GET_INT_STAT( 517 );
    }
    if (g_U43137 == 25)
    {
        ;
    }
    if (g_U43137 == 11)
    {
        ;
    }
    return 0;
}

int sub_14073()
{
    if (g_U43624 == 0)
    {
        if (sub_14096() == 1)
        {
            return 1;
        }
    }
    return 0;
}

int sub_14096()
{
    if (g_U43137 == 0)
    {
        ;
    }
    if (g_U43137 == 1)
    {
        ;
    }
    if (g_U43137 == 2)
    {
        ;
    }
    if (g_U43137 == 3)
    {
        ;
    }
    if (g_U43137 == 21)
    {
        return GET_INT_STAT( 580 );
    }
    if (g_U43137 == 15)
    {
        ;
    }
    if (g_U43137 == 16)
    {
        ;
    }
    if (g_U43137 == 17)
    {
        ;
    }
    if (g_U43137 == 12)
    {
        ;
    }
    if (g_U43137 == 13)
    {
        return GET_INT_STAT( 535 );
    }
    if (g_U43137 == 19)
    {
        ;
    }
    if (g_U43137 == 20)
    {
        ;
    }
    if (g_U43137 == 5)
    {
        return GET_INT_STAT( 494 );
    }
    if (g_U43137 == 4)
    {
        ;
    }
    if (g_U43137 == 6)
    {
        ;
    }
    if (g_U43137 == 7)
    {
        ;
    }
    if (g_U43137 == 8)
    {
        ;
    }
    if (g_U43137 == 9)
    {
        return GET_INT_STAT( 612 );
    }
    if (g_U43137 == 14)
    {
        ;
    }
    if (g_U43137 == 22)
    {
        return GET_INT_STAT( 588 );
    }
    if (g_U43137 == 23)
    {
        return GET_INT_STAT( 595 );
    }
    if (g_U43137 == 24)
    {
        ;
    }
    if (g_U43137 == 18)
    {
        ;
    }
    if (g_U43137 == 10)
    {
        ;
    }
    if (g_U43137 == 25)
    {
        ;
    }
    if (g_U43137 == 11)
    {
        ;
    }
    return 0;
}

int sub_16112()
{
    if (g_U43624 == 0)
    {
        if (sub_16135() >= g_U43138[g_U43137]._fU24)
        {
            return 1;
        }
    }
    return 0;
}

int sub_16135()
{
    if (g_U43137 == 0)
    {
        ;
    }
    if (g_U43137 == 1)
    {
        ;
    }
    if (g_U43137 == 2)
    {
        ;
    }
    if (g_U43137 == 3)
    {
        ;
    }
    if (g_U43137 == 21)
    {
        ;
    }
    if (g_U43137 == 15)
    {
        ;
    }
    if (g_U43137 == 16)
    {
        ;
    }
    if (g_U43137 == 17)
    {
        ;
    }
    if (g_U43137 == 12)
    {
        return sub_16280( GET_INT_STAT( 530 ) );
    }
    if (g_U43137 == 13)
    {
        ;
    }
    if (g_U43137 == 19)
    {
        ;
    }
    if (g_U43137 == 20)
    {
        ;
    }
    if (g_U43137 == 5)
    {
        ;
    }
    if (g_U43137 == 4)
    {
        ;
    }
    if (g_U43137 == 6)
    {
        ;
    }
    if (g_U43137 == 7)
    {
        ;
    }
    if (g_U43137 == 8)
    {
        ;
    }
    if (g_U43137 == 9)
    {
        ;
    }
    if (g_U43137 == 14)
    {
        return sub_16280( GET_INT_STAT( 539 ) );
    }
    if (g_U43137 == 22)
    {
        ;
    }
    if (g_U43137 == 23)
    {
        ;
    }
    if (g_U43137 == 24)
    {
        ;
    }
    if (g_U43137 == 18)
    {
        ;
    }
    if (g_U43137 == 10)
    {
        ;
    }
    if (g_U43137 == 25)
    {
        ;
    }
    if (g_U43137 == 11)
    {
        ;
    }
    return 0;
}

int sub_16280(int iParam0)
{
    return iParam0 / 1670;
}

int sub_17338()
{
    if (g_U43624 == 0)
    {
        if (sub_17361() >= g_U43138[g_U43137]._fU28)
        {
            return 1;
        }
    }
    return 0;
}

int sub_17361()
{
    if (g_U43137 == 0)
    {
        ;
    }
    if (g_U43137 == 1)
    {
        ;
    }
    if (g_U43137 == 2)
    {
        ;
    }
    if (g_U43137 == 3)
    {
        ;
    }
    if (g_U43137 == 21)
    {
        ;
    }
    if (g_U43137 == 15)
    {
        return GET_INT_STAT( 547 );
    }
    if (g_U43137 == 16)
    {
        return GET_INT_STAT( 553 );
    }
    if (g_U43137 == 17)
    {
        return GET_INT_STAT( 558 );
    }
    if (g_U43137 == 12)
    {
        ;
    }
    if (g_U43137 == 13)
    {
        ;
    }
    if (g_U43137 == 19)
    {
        ;
    }
    if (g_U43137 == 20)
    {
        ;
    }
    if (g_U43137 == 5)
    {
        ;
    }
    if (g_U43137 == 4)
    {
        ;
    }
    if (g_U43137 == 6)
    {
        ;
    }
    if (g_U43137 == 7)
    {
        ;
    }
    if (g_U43137 == 8)
    {
        ;
    }
    if (g_U43137 == 9)
    {
        ;
    }
    if (g_U43137 == 14)
    {
        ;
    }
    if (g_U43137 == 22)
    {
        return GET_INT_STAT( 586 );
    }
    if (g_U43137 == 23)
    {
        ;
    }
    if (g_U43137 == 24)
    {
        ;
    }
    if (g_U43137 == 18)
    {
        return GET_INT_STAT( 565 );
    }
    if (g_U43137 == 10)
    {
        ;
    }
    if (g_U43137 == 25)
    {
        return GET_INT_STAT( 608 );
    }
    if (g_U43137 == 11)
    {
        ;
    }
    return 0;
}

int sub_18150()
{
    if (g_U43624 == 0)
    {
        if (sub_18173() == 1)
        {
            return 1;
        }
    }
    return 0;
}

int sub_18173()
{
    if (g_U43137 == 0)
    {
        ;
    }
    if (g_U43137 == 1)
    {
        ;
    }
    if (g_U43137 == 2)
    {
        ;
    }
    if (g_U43137 == 3)
    {
        ;
    }
    if (g_U43137 == 21)
    {
        ;
    }
    if (g_U43137 == 15)
    {
        ;
    }
    if (g_U43137 == 16)
    {
        return GET_INT_STAT( 554 );
    }
    if (g_U43137 == 17)
    {
        ;
    }
    if (g_U43137 == 12)
    {
        ;
    }
    if (g_U43137 == 13)
    {
        ;
    }
    if (g_U43137 == 19)
    {
        ;
    }
    if (g_U43137 == 20)
    {
        ;
    }
    if (g_U43137 == 5)
    {
        ;
    }
    if (g_U43137 == 4)
    {
        ;
    }
    if (g_U43137 == 6)
    {
        ;
    }
    if (g_U43137 == 7)
    {
        ;
    }
    if (g_U43137 == 8)
    {
        ;
    }
    if (g_U43137 == 9)
    {
        ;
    }
    if (g_U43137 == 14)
    {
        ;
    }
    if (g_U43137 == 22)
    {
        ;
    }
    if (g_U43137 == 23)
    {
        return GET_INT_STAT( 596 );
    }
    if (g_U43137 == 24)
    {
        ;
    }
    if (g_U43137 == 18)
    {
        ;
    }
    if (g_U43137 == 10)
    {
        ;
    }
    if (g_U43137 == 25)
    {
        ;
    }
    if (g_U43137 == 11)
    {
        ;
    }
    return 0;
}

void sub_21395()
{
    g_U43138[0]._fU0 = 4;
    g_U43138[0]._fU4 = 30;
    g_U43138[0]._fU8 = 0;
    g_U43138[0]._fU12 = 10;
    g_U43138[1]._fU0 = 5;
    g_U43138[1]._fU4 = 20;
    g_U43138[1]._fU8 = 10;
    g_U43138[1]._fU20 = 70;
    g_U43138[1]._fU16 = 31;
    g_U43138[2]._fU0 = 4;
    g_U43138[2]._fU4 = 0;
    g_U43138[2]._fU8 = 50;
    g_U43138[2]._fU20 = 70;
    g_U43138[2]._fU16 = 11;
    g_U43138[3]._fU0 = 2;
    g_U43138[3]._fU4 = 30;
    g_U43138[3]._fU12 = 0;
    g_U43138[5]._fU0 = 3;
    g_U43138[5]._fU4 = 10;
    g_U43138[5]._fU8 = 40;
    g_U43138[4]._fU0 = 2;
    g_U43138[4]._fU4 = 10;
    g_U43138[4]._fU8 = 0;
    g_U43138[4]._fU44 = 8000;
    g_U43138[6]._fU0 = 5;
    g_U43138[6]._fU4 = 0;
    g_U43138[6]._fU8 = 50;
    g_U43138[7]._fU0 = 5;
    g_U43138[7]._fU4 = 45;
    g_U43138[7]._fU8 = 50;
    g_U43138[7]._fU44 = 35000;
    g_U43138[8]._fU0 = 4;
    g_U43138[8]._fU4 = 35;
    g_U43138[8]._fU8 = 20;
    g_U43138[8]._fU12 = 80;
    g_U43138[9]._fU0 = 8;
    g_U43138[9]._fU4 = 50;
    g_U43138[9]._fU12 = 0;
    g_U43138[10]._fU0 = 3;
    g_U43138[10]._fU4 = 55;
    g_U43138[10]._fU44 = 7000;
    g_U43138[11]._fU0 = 10;
    g_U43138[11]._fU4 = 0;
    g_U43138[11]._fU8 = 50;
    g_U43138[11]._fU20 = 70;
    g_U43138[11]._fU16 = 25;
    g_U43138[12]._fU0 = 5;
    g_U43138[12]._fU4 = 0;
    g_U43138[12]._fU8 = 50;
    g_U43138[12]._fU12 = 60;
    g_U43138[12]._fU20 = 70;
    g_U43138[12]._fU16 = 10;
    g_U43138[12]._fU24 = 70;
    g_U43138[13]._fU0 = 7;
    g_U43138[13]._fU4 = 35;
    g_U43138[13]._fU8 = 0;
    g_U43138[14]._fU0 = 5;
    g_U43138[14]._fU4 = 15;
    g_U43138[14]._fU12 = 20;
    g_U43138[14]._fU24 = 140;
    g_U43138[15]._fU0 = 6;
    g_U43138[15]._fU4 = 0;
    g_U43138[15]._fU8 = 0;
    g_U43138[15]._fU20 = 70;
    g_U43138[15]._fU28 = 4;
    g_U43138[16]._fU0 = 4;
    g_U43138[16]._fU4 = 10;
    g_U43138[16]._fU8 = 50;
    g_U43138[16]._fU20 = 70;
    g_U43138[16]._fU16 = 6;
    g_U43138[16]._fU28 = 4;
    g_U43138[17]._fU0 = 7;
    g_U43138[17]._fU4 = 25;
    g_U43138[17]._fU8 = 50;
    g_U43138[17]._fU28 = 6;
    g_U43138[17]._fU12 = 50;
    g_U43138[18]._fU0 = 4;
    g_U43138[18]._fU4 = 20;
    g_U43138[18]._fU8 = 50;
    g_U43138[18]._fU28 = 8;
    g_U43138[19]._fU0 = 7;
    g_U43138[19]._fU4 = 50;
    g_U43138[19]._fU8 = 40;
    g_U43138[19]._fU16 = 20;
    g_U43138[19]._fU20 = 55;
    g_U43138[20]._fU0 = 5;
    g_U43138[20]._fU4 = 0;
    g_U43138[20]._fU8 = 40;
    g_U43138[20]._fU20 = 55;
    g_U43138[20]._fU16 = 20;
    g_U43138[21]._fU0 = 3;
    g_U43138[21]._fU4 = 10;
    g_U43138[21]._fU8 = 10;
    g_U43138[22]._fU0 = 6;
    g_U43138[22]._fU4 = 30;
    g_U43138[22]._fU8 = 50;
    g_U43138[22]._fU20 = 70;
    g_U43138[22]._fU16 = 20;
    g_U43138[22]._fU28 = 5;
    g_U43138[23]._fU0 = 6;
    g_U43138[23]._fU4 = 40;
    g_U43138[23]._fU8 = 40;
    g_U43138[23]._fU20 = 70;
    g_U43138[23]._fU16 = 20;
    g_U43138[24]._fU0 = 4;
    g_U43138[24]._fU4 = 30;
    g_U43138[24]._fU8 = 40;
    g_U43138[24]._fU20 = 60;
    g_U43138[24]._fU16 = 10;
    g_U43138[25]._fU0 = 4;
    g_U43138[25]._fU4 = 30;
    g_U43138[25]._fU8 = 90;
    g_U43138[25]._fU20 = 70;
    g_U43138[25]._fU16 = 25;
    g_U43138[25]._fU28 = 4;
    return;
}

void sub_23023(unknown uParam0)
{
    float fVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;

    fVar3 = 0.50000000;
    sub_23039();
    if (g_U43560 == 0)
    {
        SET_TEXT_CENTRE( 1 );
        SET_TEXT_COLOUR( 255, 255, 255, 255 );
        SET_TEXT_DROPSHADOW( l_U6, l_U3, l_U5, l_U4, 255 );
        SET_TEXT_SCALE( l_U426._fU0, l_U426._fU4 );
        SET_TEXT_WRAP( 0.20000000, 0.80000000 );
        SET_TEXT_DRAW_BEFORE_FADE( 0 );
        if (sub_4879() == 0)
        {
            DISPLAY_TEXT_WITH_NUMBER( fVar3 - 0.00800000, l_U398, "MisNumber", sub_24604() );
        }
        else
        {
            DISPLAY_TEXT_WITH_NUMBER( fVar3 - 0.00800000, l_U398, "MisNumber", g_U43560 );
        }
        SET_TEXT_CENTRE( 1 );
        SET_TEXT_COLOUR( 255, 255, 255, 255 );
        SET_TEXT_DROPSHADOW( l_U6, l_U3, l_U5, l_U4, 255 );
        SET_TEXT_SCALE( l_U429._fU0, l_U429._fU4 );
        SET_TEXT_WRAP( 0.20000000, 0.80000000 );
        SET_TEXT_DRAW_BEFORE_FADE( 0 );
        DISPLAY_TEXT( fVar3 + l_U449, l_U398 + 0.02300000, "MisSign" );
    }
    else if (g_U43560 == 100)
    {
        SET_TEXT_CENTRE( 1 );
        SET_TEXT_COLOUR( 255, 255, 255, 255 );
        SET_TEXT_DROPSHADOW( l_U6, l_U3, l_U5, l_U4, 255 );
        SET_TEXT_SCALE( l_U426._fU0, l_U426._fU4 );
        SET_TEXT_WRAP( 0.20000000, 0.80000000 );
        SET_TEXT_DRAW_BEFORE_FADE( 0 );
        if (sub_4879() == 0)
        {
            DISPLAY_TEXT_WITH_NUMBER( l_U450, l_U398, "MisNumber", sub_24604() );
        }
        else
        {
            DISPLAY_TEXT_WITH_NUMBER( l_U450, l_U398, "MisNumber", g_U43560 );
        }
        SET_TEXT_CENTRE( 1 );
        SET_TEXT_COLOUR( 255, 255, 255, 255 );
        SET_TEXT_DROPSHADOW( l_U6, l_U3, l_U5, l_U4, 255 );
        SET_TEXT_SCALE( l_U429._fU0, l_U429._fU4 );
        SET_TEXT_WRAP( 0.20000000, 0.80000000 );
        SET_TEXT_DRAW_BEFORE_FADE( 0 );
        DISPLAY_TEXT( l_U451, l_U398 + 0.02300000, "MisSign" );
    }
    else
    {
        SET_TEXT_CENTRE( 1 );
        SET_TEXT_COLOUR( 255, 255, 255, 255 );
        SET_TEXT_DROPSHADOW( l_U6, l_U3, l_U5, l_U4, 255 );
        SET_TEXT_SCALE( l_U426._fU0, l_U426._fU4 );
        SET_TEXT_WRAP( 0.20000000, 0.80000000 );
        SET_TEXT_DRAW_BEFORE_FADE( 0 );
        if (sub_4879() == 0)
        {
            DISPLAY_TEXT_WITH_NUMBER( l_U452, l_U398, "MisNumber", sub_24604() );
        }
        else
        {
            DISPLAY_TEXT_WITH_NUMBER( l_U452, l_U398, "MisNumber", g_U43560 );
        }
        SET_TEXT_CENTRE( 1 );
        SET_TEXT_COLOUR( 255, 255, 255, 255 );
        SET_TEXT_DROPSHADOW( l_U6, l_U3, l_U5, l_U4, 255 );
        SET_TEXT_SCALE( l_U429._fU0, l_U429._fU4 );
        SET_TEXT_WRAP( 0.20000000, 0.80000000 );
        SET_TEXT_DRAW_BEFORE_FADE( 0 );
        DISPLAY_TEXT( l_U453, l_U398 + 0.02300000, "MisSign" );
    }
    SET_TEXT_JUSTIFY( 1 );
    SET_TEXT_COLOUR( 255, 255, 255, 255 );
    SET_TEXT_DROPSHADOW( l_U6, l_U3, l_U5, l_U4, 255 );
    SET_TEXT_WRAP( 0.20000000, 0.80000000 );
    SET_TEXT_DRAW_BEFORE_FADE( 0 );
    uVar5 = {sub_26255( "MisTime", l_U405, l_U400 + (l_U397 * 2) )};
    SET_TEXT_SCALE( uVar5._fU0, uVar5._fU4 );
    DISPLAY_TEXT( l_U405, l_U400 + (l_U397 * 2), "MisTime" );
    sub_26763( g_U43563, 0, sub_8752(), uParam0 );
    sub_27325( g_U43574, 0 );
    return;
}

void sub_23039()
{
    float fVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    fVar2 = 0.50000000;
    SET_TEXT_CENTRE( 1 );
    SET_TEXT_COLOUR( 255, 255, 255, 255 );
    SET_TEXT_DROPSHADOW( l_U6, l_U3, l_U5, l_U4, 255 );
    SET_TEXT_WRAP( 0.10000000, 0.80000000 );
    uVar3 = {sub_23966( sub_23121(), fVar2, l_U399 )};
    SET_TEXT_SCALE( uVar3._fU0, uVar3._fU4 );
    DISPLAY_TEXT( fVar2, l_U399, sub_23121() );
    SET_TEXT_DRAW_BEFORE_FADE( 0 );
    return;
}

string sub_23121()
{
    if (g_U43137 == 0)
    {
        return "E2M_1b";
    }
    else if (g_U43137 == 1)
    {
        return "E2M_2b";
    }
    else if (g_U43137 == 2)
    {
        return "E2M_3b";
    }
    else if (g_U43137 == 3)
    {
        return "E2M_4b";
    }
    else if (g_U43137 == 4)
    {
        return "E2M_6b";
    }
    else if (g_U43137 == 5)
    {
        return "E2M_5b";
    }
    else if (g_U43137 == 6)
    {
        return "E2M_7b";
    }
    else if (g_U43137 == 7)
    {
        return "E2M_8b";
    }
    else if (g_U43137 == 8)
    {
        return "E2M_9b";
    }
    else if (g_U43137 == 9)
    {
        return "E2M_10b";
    }
    else if (g_U43137 == 10)
    {
        return "E2M_11b";
    }
    else if (g_U43137 == 11)
    {
        return "E2M_12b";
    }
    else if (g_U43137 == 12)
    {
        return "E2M_13b";
    }
    else if (g_U43137 == 13)
    {
        return "E2M_14b";
    }
    else if (g_U43137 == 14)
    {
        return "E2M_15b";
    }
    else if (g_U43137 == 15)
    {
        return "E2M_17b";
    }
    else if (g_U43137 == 16)
    {
        return "E2M_18b";
    }
    else if (g_U43137 == 17)
    {
        return "E2M_19b";
    }
    else if (g_U43137 == 18)
    {
        return "E2M_20b";
    }
    else if (g_U43137 == 19)
    {
        return "E2M_21b";
    }
    else if (g_U43137 == 20)
    {
        return "E2M_22b";
    }
    else if (g_U43137 == 21)
    {
        return "E2M_23b";
    }
    else if (g_U43137 == 22)
    {
        return "E2M_24b";
    }
    else if (g_U43137 == 23)
    {
        return "E2M_25b";
    }
    else if (g_U43137 == 24)
    {
        return "E2M_26b";
    }
    else if (g_U43137 == 25)
    {
        return "E2M_27b";
    };;;;;;;;;;;;;;;;;;;;;;;;;;
    return "";
}

vector sub_23966(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    int I;
    unknown uVar10;
    unknown uVar11;

    uVar6 = {l_U417._fU0, l_U417._fU4, 0.00000000};
    if (sub_24003( uParam0, uParam1, uParam2 ))
    {
        uVar10 = GET_LENGTH_OF_STRING_WITH_THIS_TEXT_LABEL( uParam0 );
        uVar11 = GET_WIDTH_OF_LITERAL_STRING( uParam0 );
        if (GET_IS_WIDESCREEN())
        {
            for ( I = 0; I <= 50; I++ )
            {
                if (((GET_STRING_WIDTH( uParam0 )) > 0.25900000) || ((GET_NUMBER_LINES( uParam1, uParam2, uParam0 )) > 1))
                {
                    uVar6._fU0 *= 0.95000000;
                    SET_TEXT_SCALE( uVar6._fU0, uVar6._fU4 );
                }
            }
            return vector( 0.00000000, uVar6._fU4, uVar6._fU0);
        }
        else
        {
            for ( I = 0; I <= 50; I++ )
            {
                if (((GET_STRING_WIDTH( uParam0 )) > 0.28000000) || ((GET_NUMBER_LINES( uParam1, uParam2, uParam0 )) > 1))
                {
                    uVar6._fU0 *= 0.95000000;
                    SET_TEXT_SCALE( uVar6._fU0, uVar6._fU4 );
                }
            }
            return vector( 0.00000000, uVar6._fU4, uVar6._fU0);
        }
    }
    return vector( 0.00000000, uVar6._fU4, uVar6._fU0);
}

int sub_24003(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (GET_IS_WIDESCREEN())
    {
        if (((GET_STRING_WIDTH( uParam0 )) > 0.25900000) || ((GET_NUMBER_LINES( uParam1, uParam2, uParam0 )) > 1))
        {
            return 1;
        }
    }
    else if (((GET_STRING_WIDTH( uParam0 )) > 0.28000000) || ((GET_NUMBER_LINES( uParam1, uParam2, uParam0 )) > 1))
    {
        return 1;
    }
    return 0;
}

int sub_24604()
{
    if (g_U43137 == 0)
    {
        return GET_INT_STAT( 189 );
    }
    if (g_U43137 == 1)
    {
        return GET_INT_STAT( 190 );
    }
    if (g_U43137 == 2)
    {
        return GET_INT_STAT( 193 );
    }
    if (g_U43137 == 3)
    {
        return GET_INT_STAT( 194 );
    }
    if (g_U43137 == 21)
    {
        return GET_INT_STAT( 202 );
    }
    if (g_U43137 == 15)
    {
        return GET_INT_STAT( 213 );
    }
    if (g_U43137 == 16)
    {
        return GET_INT_STAT( 214 );
    }
    if (g_U43137 == 17)
    {
        return GET_INT_STAT( 215 );
    }
    if (g_U43137 == 12)
    {
        return GET_INT_STAT( 216 );
    }
    if (g_U43137 == 13)
    {
        return GET_INT_STAT( 217 );
    }
    if (g_U43137 == 19)
    {
        return GET_INT_STAT( 218 );
    }
    if (g_U43137 == 20)
    {
        return GET_INT_STAT( 219 );
    }
    if (g_U43137 == 5)
    {
        return GET_INT_STAT( 222 );
    }
    if (g_U43137 == 4)
    {
        return GET_INT_STAT( 221 );
    }
    if (g_U43137 == 6)
    {
        return GET_INT_STAT( 220 );
    }
    if (g_U43137 == 7)
    {
        return GET_INT_STAT( 237 );
    }
    if (g_U43137 == 8)
    {
        return GET_INT_STAT( 223 );
    }
    if (g_U43137 == 9)
    {
        return GET_INT_STAT( 224 );
    }
    if (g_U43137 == 14)
    {
        return GET_INT_STAT( 225 );
    }
    if (g_U43137 == 22)
    {
        return GET_INT_STAT( 226 );
    }
    if (g_U43137 == 23)
    {
        return GET_INT_STAT( 227 );
    }
    if (g_U43137 == 24)
    {
        return GET_INT_STAT( 230 );
    }
    if (g_U43137 == 18)
    {
        return GET_INT_STAT( 231 );
    }
    if (g_U43137 == 10)
    {
        return GET_INT_STAT( 232 );
    }
    if (g_U43137 == 25)
    {
        return GET_INT_STAT( 233 );
    }
    if (g_U43137 == 11)
    {
        return GET_INT_STAT( 234 );
    }
    return 0;
}

vector sub_26255(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    int I;
    unknown uVar10;
    unknown uVar11;

    uVar6 = {l_U408._fU0, l_U408._fU4, 0.00000000};
    if (sub_26292( uParam0, uParam1, uParam2 ))
    {
        uVar10 = GET_LENGTH_OF_STRING_WITH_THIS_TEXT_LABEL( uParam0 );
        uVar11 = GET_WIDTH_OF_LITERAL_STRING( uParam0 );
        if (GET_IS_WIDESCREEN())
        {
            for ( I = 0; I <= 50; I++ )
            {
                if (((GET_STRING_WIDTH( uParam0 )) > 0.16100000) || ((GET_NUMBER_LINES( uParam1, uParam2, uParam0 )) > 1))
                {
                    uVar6._fU0 *= 0.95000000;
                    SET_TEXT_SCALE( uVar6._fU0, uVar6._fU4 );
                }
            }
            return vector( 0.00000000, uVar6._fU4, uVar6._fU0);
        }
        else
        {
            for ( I = 0; I <= 50; I++ )
            {
                if (((GET_STRING_WIDTH( uParam0 )) > 0.19200000) || ((GET_NUMBER_LINES( uParam1, uParam2, uParam0 )) > 1))
                {
                    uVar6._fU0 *= 0.95000000;
                    SET_TEXT_SCALE( uVar6._fU0, uVar6._fU4 );
                }
            }
            return vector( 0.00000000, uVar6._fU4, uVar6._fU0);
        }
    }
    return vector( 0.00000000, uVar6._fU4, uVar6._fU0);
}

int sub_26292(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (GET_IS_WIDESCREEN())
    {
        if (((GET_STRING_WIDTH( uParam0 )) > 0.16100000) || ((GET_NUMBER_LINES( uParam1, uParam2, uParam0 )) > 1))
        {
            return 1;
        }
    }
    else if (((GET_STRING_WIDTH( uParam0 )) > 0.19200000) || ((GET_NUMBER_LINES( uParam1, uParam2, uParam0 )) > 1))
    {
        return 1;
    }
    return 0;
}

void sub_26763(int iParam0, unknown uParam1, int iParam2, int iParam3)
{
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;

    SET_SPRITES_DRAW_BEFORE_FADE( 1 );
    if (g_U43624 == 1)
    {
        if (iParam0 == 1)
        {
            DRAW_SPRITE( l_U280, l_U283[uParam1]._fU0, l_U283[uParam1]._fU4, l_U311._fU0, l_U311._fU4, l_U314, l_U315, l_U316, l_U317, l_U318 );
        }
        else
        {
            DRAW_SPRITE( l_U279, l_U283[uParam1]._fU0, l_U283[uParam1]._fU4, l_U311._fU0, l_U311._fU4, l_U314, l_U315, l_U316, l_U317, l_U318 );
        }
    }
    else if (iParam3 == 0)
    {
        if (iParam0 == 1)
        {
            DRAW_SPRITE( l_U280, l_U283[uParam1]._fU0, l_U283[uParam1]._fU4, l_U311._fU0, l_U311._fU4, l_U314, l_U315, l_U316, l_U317, l_U318 );
        }
        else
        {
            DRAW_SPRITE( l_U279, l_U283[uParam1]._fU0, l_U283[uParam1]._fU4, l_U311._fU0, l_U311._fU4, l_U314, l_U315, l_U316, l_U317, l_U318 );
        }
    }
    else if (iParam2 == 1)
    {
        GET_HUD_COLOUR( 16, ref uVar6, ref uVar7, ref uVar8, ref uVar9 );
        DRAW_SPRITE( l_U280, l_U283[uParam1]._fU0, l_U283[uParam1]._fU4, l_U311._fU0, l_U311._fU4, l_U314, uVar6, uVar7, uVar8, uVar9 );
    }
    else
    {
        GET_HUD_COLOUR( 10, ref uVar6, ref uVar7, ref uVar8, ref uVar9 );
        DRAW_SPRITE( l_U279, l_U283[uParam1]._fU0, l_U283[uParam1]._fU4, l_U311._fU0, l_U311._fU4, l_U314, uVar6, uVar7, uVar8, uVar9 );
    };;;
    SET_SPRITES_DRAW_BEFORE_FADE( 0 );
    return;
}

void sub_27325(int iParam0, unknown uParam1)
{
    SET_SPRITES_DRAW_BEFORE_FADE( 1 );
    if (iParam0 == 1)
    {
        SET_TEXT_JUSTIFY( 1 );
        SET_TEXT_COLOUR( 255, 255, 255, 255 );
        SET_TEXT_SCALE( l_U432._fU0, l_U432._fU4 );
        SET_TEXT_DROPSHADOW( l_U6, l_U3, l_U5, l_U4, 255 );
        SET_TEXT_WRAP( 0.20000000, 0.80000000 );
        SET_TEXT_DRAW_BEFORE_FADE( 0 );
        DISPLAY_TEXT( l_U319[uParam1]._fU0, l_U319[uParam1]._fU4, "NewRecord" );
    }
    SET_SPRITES_DRAW_BEFORE_FADE( 0 );
    return;
}

void sub_27513(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    SET_TEXT_JUSTIFY( 1 );
    SET_TEXT_COLOUR( 255, 255, 255, 255 );
    SET_TEXT_DROPSHADOW( l_U6, l_U3, l_U5, l_U4, 255 );
    SET_TEXT_WRAP( 0.20000000, 0.80000000 );
    SET_TEXT_DRAW_BEFORE_FADE( 0 );
    uVar3 = {sub_26255( "MisPlayDam", l_U405, l_U400 + (l_U397 * 3) )};
    SET_TEXT_SCALE( uVar3._fU0, uVar3._fU4 );
    DISPLAY_TEXT( l_U405, l_U400 + (l_U397 * 3), "MisPlayDam" );
    sub_26763( g_U43568, 1, sub_9614(), uParam0 );
    sub_27325( g_U43575, 1 );
    return;
}

void sub_27746(int iParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;

    SET_TEXT_JUSTIFY( 1 );
    SET_TEXT_COLOUR( 255, 255, 255, 255 );
    SET_TEXT_DROPSHADOW( l_U6, l_U3, l_U5, l_U4, 255 );
    SET_TEXT_WRAP( 0.20000000, 0.80000000 );
    SET_TEXT_DRAW_BEFORE_FADE( 0 );
    if (iParam0 == 0)
    {
        uVar5 = {sub_26255( uParam1, l_U405, l_U400 + (l_U397 * 3) )};
        SET_TEXT_SCALE( uVar5._fU0, uVar5._fU4 );
        DISPLAY_TEXT( l_U405, l_U400 + (l_U397 * 3), uParam1 );
        sub_26763( g_U43564, 1, sub_10373(), uParam2 );
        sub_27325( g_U43577, 1 );
    }
    else if (iParam0 == 1)
    {
        uVar5 = {sub_26255( uParam1, l_U405, l_U400 + (l_U397 * 4) )};
        SET_TEXT_SCALE( uVar5._fU0, uVar5._fU4 );
        DISPLAY_TEXT( l_U405, l_U400 + (l_U397 * 4), uParam1 );
        sub_26763( g_U43564, 2, sub_10373(), uParam2 );
        sub_27325( g_U43577, 2 );
    }
    else if (iParam0 == 2)
    {
        uVar5 = {sub_26255( uParam1, l_U405, l_U400 + (l_U397 * 5) )};
        SET_TEXT_SCALE( uVar5._fU0, uVar5._fU4 );
        DISPLAY_TEXT( l_U405, l_U400 + (l_U397 * 5), uParam1 );
        sub_26763( g_U43564, 3, sub_10373(), uParam2 );
        sub_27325( g_U43577, 3 );
    }
    else if (iParam0 == 3)
    {
        uVar5 = {sub_26255( uParam1, l_U405, l_U400 + (l_U397 * 6) )};
        SET_TEXT_SCALE( uVar5._fU0, uVar5._fU4 );
        DISPLAY_TEXT( l_U405, l_U400 + (l_U397 * 6), uParam1 );
        sub_26763( g_U43564, 4, sub_10373(), uParam2 );
        sub_27325( g_U43577, 4 );
    }
    else if (iParam0 == 4)
    {
        uVar5 = {sub_26255( uParam1, l_U405, l_U400 + (l_U397 * 7) )};
        SET_TEXT_SCALE( uVar5._fU0, uVar5._fU4 );
        DISPLAY_TEXT( l_U405, l_U400 + (l_U397 * 7), uParam1 );
        sub_26763( g_U43564, 5, sub_10373(), uParam2 );
        sub_27325( g_U43577, 5 );
    }
    else if (iParam0 == 5)
    {
        uVar5 = {sub_26255( uParam1, l_U405, l_U400 + (l_U397 * 8) )};
        SET_TEXT_SCALE( uVar5._fU0, uVar5._fU4 );
        DISPLAY_TEXT( l_U405, l_U400 + (l_U397 * 8), uParam1 );
        sub_26763( g_U43564, 6, sub_10373(), uParam2 );
        sub_27325( g_U43577, 6 );
    }
    else if (iParam0 == 6)
    {
        uVar5 = {sub_26255( uParam1, l_U405, l_U400 + (l_U397 * 9) )};
        SET_TEXT_SCALE( uVar5._fU0, uVar5._fU4 );
        DISPLAY_TEXT( l_U405, l_U400 + (l_U397 * 9), uParam1 );
        sub_26763( g_U43564, 7, sub_10373(), uParam2 );
        sub_27325( g_U43577, 7 );
    };;;;;;;
    return;
}

void sub_28666(int iParam0)
{
    SET_SPRITES_DRAW_BEFORE_FADE( 1 );
    DRAW_SPRITE( l_U496, l_U501, l_U403 + l_U502, l_U487._fU0, l_U487._fU4, l_U491, l_U492, l_U493, l_U494, l_U495 );
    DRAW_SPRITE( l_U485, l_U490, l_U403, l_U487._fU0, l_U487._fU4, l_U491, l_U492, l_U493, l_U494, l_U495 );
    if (iParam0 == 1)
    {
        DRAW_SPRITE( l_U496, l_U501, ((l_U403 + l_U404) + (l_U397 * 2)) + l_U502, l_U487._fU0, l_U487._fU4, l_U491, l_U492, l_U493, l_U494, l_U495 );
        DRAW_SPRITE( l_U485, l_U501, (l_U403 + l_U404) + (l_U397 * 2), l_U487._fU0, l_U487._fU4, l_U491, l_U492, l_U493, l_U494, l_U495 );
    }
    else if (iParam0 == 2)
    {
        DRAW_SPRITE( l_U496, l_U501, ((l_U403 + l_U404) + (l_U397 * 3)) + l_U502, l_U487._fU0, l_U487._fU4, l_U491, l_U492, l_U493, l_U494, l_U495 );
        DRAW_SPRITE( l_U485, l_U490, (l_U403 + l_U404) + (l_U397 * 3), l_U487._fU0, l_U487._fU4, l_U491, l_U492, l_U493, l_U494, l_U495 );
    }
    else if (iParam0 == 3)
    {
        DRAW_SPRITE( l_U496, l_U501, ((l_U403 + l_U404) + (l_U397 * 4)) + l_U502, l_U487._fU0, l_U487._fU4, l_U491, l_U492, l_U493, l_U494, l_U495 );
        DRAW_SPRITE( l_U485, l_U490, (l_U403 + l_U404) + (l_U397 * 4), l_U487._fU0, l_U487._fU4, l_U491, l_U492, l_U493, l_U494, l_U495 );
    }
    else if (iParam0 == 4)
    {
        DRAW_SPRITE( l_U496, l_U501, ((l_U403 + l_U404) + (l_U397 * 5)) + l_U502, l_U487._fU0, l_U487._fU4, l_U491, l_U492, l_U493, l_U494, l_U495 );
        DRAW_SPRITE( l_U485, l_U490, (l_U403 + l_U404) + (l_U397 * 5), l_U487._fU0, l_U487._fU4, l_U491, l_U492, l_U493, l_U494, l_U495 );
    }
    else if (iParam0 == 5)
    {
        DRAW_SPRITE( l_U496, l_U501, ((l_U403 + l_U404) + (l_U397 * 6)) + l_U502, l_U487._fU0, l_U487._fU4, l_U491, l_U492, l_U493, l_U494, l_U495 );
        DRAW_SPRITE( l_U485, l_U490, (l_U403 + l_U404) + (l_U397 * 6), l_U487._fU0, l_U487._fU4, l_U491, l_U492, l_U493, l_U494, l_U495 );
    }
    else if (iParam0 == 6)
    {
        DRAW_SPRITE( l_U496, l_U501, ((l_U403 + l_U404) + (l_U397 * 7)) + l_U502, l_U487._fU0, l_U487._fU4, l_U491, l_U492, l_U493, l_U494, l_U495 );
        DRAW_SPRITE( l_U485, l_U490, (l_U403 + l_U404) + (l_U397 * 7), l_U487._fU0, l_U487._fU4, l_U491, l_U492, l_U493, l_U494, l_U495 );
    }
    else if (iParam0 == 7)
    {
        DRAW_SPRITE( l_U496, l_U501, ((l_U403 + l_U404) + (l_U397 * 8)) + l_U502, l_U487._fU0, l_U487._fU4, l_U491, l_U492, l_U493, l_U494, l_U495 );
        DRAW_SPRITE( l_U485, l_U490, (l_U403 + l_U404) + (l_U397 * 8), l_U487._fU0, l_U487._fU4, l_U491, l_U492, l_U493, l_U494, l_U495 );
    }
    else if (iParam0 == 8)
    {
        DRAW_SPRITE( l_U496, l_U501, ((l_U403 + l_U404) + (l_U397 * 9)) + l_U502, l_U487._fU0, l_U487._fU4, l_U491, l_U492, l_U493, l_U494, l_U495 );
        DRAW_SPRITE( l_U485, l_U490, (l_U403 + l_U404) + (l_U397 * 9), l_U487._fU0, l_U487._fU4, l_U491, l_U492, l_U493, l_U494, l_U495 );
    };;;;;;;;
    SET_SPRITES_DRAW_BEFORE_FADE( 0 );
    return;
}

void sub_30377(int iParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    SET_TEXT_RIGHT_JUSTIFY( 1 );
    if (iParam0 == 0)
    {
        SET_TEXT_COLOUR( 255, 255, 255, 255 );
    }
    else
    {
        GET_HUD_COLOUR( 10, ref uVar3, ref uVar5, ref uVar4, ref uVar6 );
        SET_TEXT_COLOUR( uVar3, uVar5, uVar4, 255 );
    }
    SET_TEXT_DROPSHADOW( l_U6, l_U3, l_U5, l_U4, 255 );
    SET_TEXT_SCALE( l_U414._fU0, l_U414._fU4 );
    SET_TEXT_WRAP( 0, l_U407 );
    SET_TEXT_DRAW_BEFORE_FADE( 0 );
    if (iParam0 == 0)
    {
        if (g_U43551 > 9)
        {
            if (g_U43552 > 9)
            {
                DISPLAY_TEXT_WITH_3_NUMBERS( 0, l_U401 + (l_U397 * 2), "MisDbgTime1", g_U43550, g_U43551, g_U43552 );
            }
            else
            {
                DISPLAY_TEXT_WITH_3_NUMBERS( 0, l_U401 + (l_U397 * 2), "MisTimeMilli", g_U43550, g_U43551, g_U43552 );
            }
        }
        else if (g_U43552 > 9)
        {
            DISPLAY_TEXT_WITH_3_NUMBERS( 0, l_U401 + (l_U397 * 2), "MisTimeSecond", g_U43550, g_U43551, g_U43552 );
        }
        else
        {
            DISPLAY_TEXT_WITH_3_NUMBERS( 0, l_U401 + (l_U397 * 2), "MisTimeMilSec", g_U43550, g_U43551, g_U43552 );
        }
    }
    else if (g_U43551 > 9)
    {
        if (g_U43552 > 9)
        {
            DISPLAY_TEXT_WITH_3_NUMBERS( 0, l_U401 + (l_U397 * 2), "MisDbgTime1", g_U43550, g_U43551, g_U43552 );
        }
        else
        {
            DISPLAY_TEXT_WITH_3_NUMBERS( 0, l_U401 + (l_U397 * 2), "MisTimeMilli", g_U43550, g_U43551, g_U43552 );
        }
    }
    else if (g_U43552 > 9)
    {
        DISPLAY_TEXT_WITH_3_NUMBERS( 0, l_U401 + (l_U397 * 2), "MisTimeSecond", g_U43550, g_U43551, g_U43552 );
    }
    else
    {
        DISPLAY_TEXT_WITH_3_NUMBERS( 0, l_U401 + (l_U397 * 2), "MisTimeMilSec", g_U43550, g_U43551, g_U43552 );
    };;;
    return;
}

void sub_31130()
{
    SET_TEXT_RIGHT_JUSTIFY( 1 );
    SET_TEXT_COLOUR( 255, 255, 255, 255 );
    SET_TEXT_DROPSHADOW( l_U6, l_U3, l_U5, l_U4, 255 );
    SET_TEXT_SCALE( l_U411._fU0, l_U411._fU4 );
    SET_TEXT_WRAP( 0, l_U407 );
    SET_TEXT_DRAW_BEFORE_FADE( 0 );
    DISPLAY_TEXT_WITH_NUMBER( 0, l_U401 + (l_U397 * 3), "MisPercent", sub_31260() );
    return;
}

void sub_31260()
{
    float fVar2;
    unknown uVar3;
    unknown uVar4;

    if (g_U12379 == 1)
    {
        if (NOT (IS_CHAR_DEAD( sub_4743() )))
        {
            GET_CHAR_HEALTH( sub_4743(), ref g_U43521 );
        }
    }
    uVar3 = TO_FLOAT( g_U43521 );
    uVar4 = TO_FLOAT( g_U43520 );
    fVar2 = uVar3 / uVar4;
    fVar2 *= 100;
    fVar2 -= 100;
    if (fVar2 < 0)
    {
        fVar2 *= -1;
    }
    fVar2 *= 2;
    if (fVar2 < 0)
    {
        fVar2 = 0;
    }
    if (fVar2 > 100)
    {
        fVar2 = 100;
    }
    g_U43522 = FLOOR( fVar2 );
    if (g_U43522 < 0)
    {
        g_U43522 = 0;
    }
    return g_U43522;
}

void sub_31499(int iParam0)
{
    SET_TEXT_RIGHT_JUSTIFY( 1 );
    SET_TEXT_COLOUR( 255, 255, 255, 255 );
    SET_TEXT_DROPSHADOW( l_U6, l_U3, l_U5, l_U4, 255 );
    SET_TEXT_SCALE( l_U411._fU0, l_U411._fU4 );
    SET_TEXT_WRAP( 0, l_U407 );
    SET_TEXT_DRAW_BEFORE_FADE( 0 );
    if (g_U43559 < 0)
    {
        g_U43559 = 0;
    }
    if (iParam0 == 0)
    {
        DISPLAY_TEXT_WITH_NUMBER( 0.00000000, l_U401 + (l_U397 * 3), "MisPercent", FLOOR( g_U43559 ) );
    }
    else if (iParam0 == 1)
    {
        DISPLAY_TEXT_WITH_NUMBER( 0.00000000, l_U401 + (l_U397 * 4), "MisPercent", FLOOR( g_U43559 ) );
    }
    else if (iParam0 == 2)
    {
        DISPLAY_TEXT_WITH_NUMBER( 0.00000000, l_U401 + (l_U397 * 5), "MisPercent", FLOOR( g_U43559 ) );
    }
    else if (iParam0 == 3)
    {
        DISPLAY_TEXT_WITH_NUMBER( 0.00000000, l_U401 + (l_U397 * 6), "MisPercent", FLOOR( g_U43559 ) );
    }
    else if (iParam0 == 4)
    {
        DISPLAY_TEXT_WITH_NUMBER( 0.00000000, l_U401 + (l_U397 * 7), "MisPercent", FLOOR( g_U43559 ) );
    }
    else if (iParam0 == 5)
    {
        DISPLAY_TEXT_WITH_NUMBER( 0.00000000, l_U401 + (l_U397 * 8), "MisPercent", FLOOR( g_U43559 ) );
    }
    else if (iParam0 == 6)
    {
        DISPLAY_TEXT_WITH_NUMBER( 0.00000000, l_U401 + (l_U397 * 9), "MisPercent", FLOOR( g_U43559 ) );
    };;;;;;;
    if (l_U455 == 1)
    {
        ;
    }
    return;
}

void sub_32113()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    SET_TEXT_RIGHT_JUSTIFY( 1 );
    if (sub_8752())
    {
        GET_HUD_COLOUR( 16, ref uVar2, ref uVar4, ref uVar3, ref uVar5 );
        SET_TEXT_COLOUR( uVar2, uVar4, uVar3, 255 );
    }
    else
    {
        GET_HUD_COLOUR( 10, ref uVar2, ref uVar4, ref uVar3, ref uVar5 );
        SET_TEXT_COLOUR( uVar2, uVar4, uVar3, 255 );
    }
    SET_TEXT_DROPSHADOW( l_U6, l_U3, l_U5, l_U4, 255 );
    SET_TEXT_SCALE( l_U414._fU0, l_U414._fU4 );
    SET_TEXT_WRAP( 0, l_U407 );
    SET_TEXT_DRAW_BEFORE_FADE( 0 );
    if (sub_8752())
    {
        if ((sub_8473( sub_8775() )) > 9)
        {
            if ((sub_8530( sub_8775() )) > 9)
            {
                DISPLAY_TEXT_WITH_3_NUMBERS( 0, l_U401 + (l_U397 * 2), "MisDbgTime1", sub_8410( sub_8775() ), sub_8473( sub_8775() ), sub_8530( sub_8775() ) );
            }
            else
            {
                DISPLAY_TEXT_WITH_3_NUMBERS( 0, l_U401 + (l_U397 * 2), "MisTimeMilli", sub_8410( sub_8775() ), sub_8473( sub_8775() ), sub_8530( sub_8775() ) );
            }
        }
        else if ((sub_8530( sub_8775() )) > 9)
        {
            DISPLAY_TEXT_WITH_3_NUMBERS( 0, l_U401 + (l_U397 * 2), "MisTimeSecond", sub_8410( sub_8775() ), sub_8473( sub_8775() ), sub_8530( sub_8775() ) );
        }
        else
        {
            DISPLAY_TEXT_WITH_3_NUMBERS( 0, l_U401 + (l_U397 * 2), "MisTimeMilSec", sub_8410( sub_8775() ), sub_8473( sub_8775() ), sub_8530( sub_8775() ) );
        }
    }
    else if (g_U43138[g_U43137]._fU0 > 9)
    {
        if (g_U43138[g_U43137]._fU4 > 9)
        {
            DISPLAY_TEXT_WITH_3_NUMBERS( 0, l_U401 + (l_U397 * 2), "MisDbgTime1", 0, g_U43138[g_U43137]._fU0, g_U43138[g_U43137]._fU4 );
        }
        else
        {
            DISPLAY_TEXT_WITH_3_NUMBERS( 0, l_U401 + (l_U397 * 2), "MisTimeMilli", 0, g_U43138[g_U43137]._fU0, g_U43138[g_U43137]._fU4 );
        }
    }
    else if (g_U43138[g_U43137]._fU4 > 9)
    {
        DISPLAY_TEXT_WITH_3_NUMBERS( 0, l_U401 + (l_U397 * 2), "MisTimeSecond", 0, g_U43138[g_U43137]._fU0, g_U43138[g_U43137]._fU4 );
    }
    else
    {
        DISPLAY_TEXT_WITH_3_NUMBERS( 0, l_U401 + (l_U397 * 2), "MisTimeMilSec", 0, g_U43138[g_U43137]._fU0, g_U43138[g_U43137]._fU4 );
    };;;
    return;
}

void sub_33019()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    SET_TEXT_RIGHT_JUSTIFY( 1 );
    if (sub_9614())
    {
        GET_HUD_COLOUR( 16, ref uVar2, ref uVar4, ref uVar3, ref uVar5 );
        SET_TEXT_COLOUR( uVar2, uVar4, uVar3, 255 );
    }
    else
    {
        GET_HUD_COLOUR( 10, ref uVar2, ref uVar4, ref uVar3, ref uVar5 );
        SET_TEXT_COLOUR( uVar2, uVar4, uVar3, 255 );
    }
    SET_TEXT_DROPSHADOW( l_U6, l_U3, l_U5, l_U4, 255 );
    SET_TEXT_SCALE( l_U411._fU0, l_U411._fU4 );
    SET_TEXT_WRAP( 0, l_U407 );
    SET_TEXT_DRAW_BEFORE_FADE( 0 );
    if (sub_9614())
    {
        DISPLAY_TEXT_WITH_NUMBER( 0, l_U401 + (l_U397 * 3), "MisPercent", sub_9637() );
    }
    else
    {
        DISPLAY_TEXT_WITH_NUMBER( 0, l_U401 + (l_U397 * 3), "MisPercent", g_U43138[g_U43137]._fU8 );
    }
    return;
}

void sub_33291(int iParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    SET_TEXT_RIGHT_JUSTIFY( 1 );
    if (sub_10373())
    {
        GET_HUD_COLOUR( 16, ref uVar3, ref uVar5, ref uVar4, ref uVar6 );
        SET_TEXT_COLOUR( uVar3, uVar5, uVar4, 255 );
    }
    else
    {
        GET_HUD_COLOUR( 10, ref uVar3, ref uVar5, ref uVar4, ref uVar6 );
        SET_TEXT_COLOUR( uVar3, uVar5, uVar4, 255 );
    }
    SET_TEXT_DROPSHADOW( l_U6, l_U3, l_U5, l_U4, 255 );
    SET_TEXT_SCALE( l_U411._fU0, l_U411._fU4 );
    SET_TEXT_WRAP( 0, l_U407 );
    SET_TEXT_DRAW_BEFORE_FADE( 0 );
    if (iParam0 == 0)
    {
        if (sub_10373())
        {
            DISPLAY_TEXT_WITH_NUMBER( 0.00000000, l_U401 + (l_U397 * 3), "MisPercent", sub_10396() );
        }
        else
        {
            DISPLAY_TEXT_WITH_NUMBER( 0.00000000, l_U401 + (l_U397 * 3), "MisPercent", g_U43138[g_U43137]._fU12 );
        }
    }
    else if (iParam0 == 1)
    {
        if (sub_10373())
        {
            DISPLAY_TEXT_WITH_NUMBER( 0.00000000, l_U401 + (l_U397 * 4), "MisPercent", sub_10396() );
        }
        else
        {
            DISPLAY_TEXT_WITH_NUMBER( 0.00000000, l_U401 + (l_U397 * 4), "MisPercent", g_U43138[g_U43137]._fU12 );
        }
    }
    else if (iParam0 == 2)
    {
        if (sub_10373())
        {
            DISPLAY_TEXT_WITH_NUMBER( 0.00000000, l_U401 + (l_U397 * 5), "MisPercent", sub_10396() );
        }
        else
        {
            DISPLAY_TEXT_WITH_NUMBER( 0.00000000, l_U401 + (l_U397 * 5), "MisPercent", g_U43138[g_U43137]._fU12 );
        }
    }
    else if (iParam0 == 3)
    {
        if (sub_10373())
        {
            DISPLAY_TEXT_WITH_NUMBER( 0.00000000, l_U401 + (l_U397 * 6), "MisPercent", sub_10396() );
        }
        else
        {
            DISPLAY_TEXT_WITH_NUMBER( 0.00000000, l_U401 + (l_U397 * 6), "MisPercent", g_U43138[g_U43137]._fU12 );
        }
    }
    else if (iParam0 == 4)
    {
        if (sub_10373())
        {
            DISPLAY_TEXT_WITH_NUMBER( 0.00000000, l_U401 + (l_U397 * 7), "MisPercent", sub_10396() );
        }
        else
        {
            DISPLAY_TEXT_WITH_NUMBER( 0.00000000, l_U401 + (l_U397 * 7), "MisPercent", g_U43138[g_U43137]._fU12 );
        }
    }
    else if (iParam0 == 5)
    {
        if (sub_10373())
        {
            DISPLAY_TEXT_WITH_NUMBER( 0.00000000, l_U401 + (l_U397 * 8), "MisPercent", sub_10396() );
        }
        else
        {
            DISPLAY_TEXT_WITH_NUMBER( 0.00000000, l_U401 + (l_U397 * 8), "MisPercent", g_U43138[g_U43137]._fU12 );
        }
    }
    else if (iParam0 == 6)
    {
        if (sub_10373())
        {
            DISPLAY_TEXT_WITH_NUMBER( 0.00000000, l_U401 + (l_U397 * 9), "MisPercent", sub_10396() );
        }
        else
        {
            DISPLAY_TEXT_WITH_NUMBER( 0.00000000, l_U401 + (l_U397 * 9), "MisPercent", g_U43138[g_U43137]._fU12 );
        }
    };;;;;;;
    return;
}

void sub_34393(int iParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    SET_TEXT_JUSTIFY( 1 );
    SET_TEXT_COLOUR( 255, 255, 255, 255 );
    SET_TEXT_DROPSHADOW( l_U6, l_U3, l_U5, l_U4, 255 );
    SET_TEXT_WRAP( 0.20000000, 0.80000000 );
    SET_TEXT_DRAW_BEFORE_FADE( 0 );
    if (iParam0 == 0)
    {
        uVar4 = {sub_26255( "MisAccur", l_U405, l_U400 + (l_U397 * 3) )};
        SET_TEXT_SCALE( uVar4._fU0, uVar4._fU4 );
        DISPLAY_TEXT( l_U405, l_U400 + (l_U397 * 3), "MisAccur" );
        sub_26763( g_U43567, 1, sub_11090(), uParam1 );
        sub_27325( g_U43579, 1 );
    }
    else if (iParam0 == 1)
    {
        uVar4 = {sub_26255( "MisAccur", l_U405, l_U400 + (l_U397 * 4) )};
        SET_TEXT_SCALE( uVar4._fU0, uVar4._fU4 );
        DISPLAY_TEXT( l_U405, l_U400 + (l_U397 * 4), "MisAccur" );
        sub_26763( g_U43567, 2, sub_11090(), uParam1 );
        sub_27325( g_U43579, 2 );
    }
    else if (iParam0 == 2)
    {
        uVar4 = {sub_26255( "MisAccur", l_U405, l_U400 + (l_U397 * 5) )};
        SET_TEXT_SCALE( uVar4._fU0, uVar4._fU4 );
        DISPLAY_TEXT( l_U405, l_U400 + (l_U397 * 5), "MisAccur" );
        sub_26763( g_U43567, 3, sub_11090(), uParam1 );
        sub_27325( g_U43579, 3 );
    }
    else if (iParam0 == 3)
    {
        uVar4 = {sub_26255( "MisAccur", l_U405, l_U400 + (l_U397 * 6) )};
        SET_TEXT_SCALE( uVar4._fU0, uVar4._fU4 );
        DISPLAY_TEXT( l_U405, l_U400 + (l_U397 * 6), "MisAccur" );
        sub_26763( g_U43567, 4, sub_11090(), uParam1 );
        sub_27325( g_U43579, 4 );
    }
    else if (iParam0 == 4)
    {
        uVar4 = {sub_26255( "MisAccur", l_U405, l_U400 + (l_U397 * 7) )};
        SET_TEXT_SCALE( uVar4._fU0, uVar4._fU4 );
        DISPLAY_TEXT( l_U405, l_U400 + (l_U397 * 7), "MisAccur" );
        sub_26763( g_U43567, 5, sub_11090(), uParam1 );
        sub_27325( g_U43579, 5 );
    }
    else if (iParam0 == 5)
    {
        uVar4 = {sub_26255( "MisAccur", l_U405, l_U400 + (l_U397 * 8) )};
        SET_TEXT_SCALE( uVar4._fU0, uVar4._fU4 );
        DISPLAY_TEXT( l_U405, l_U400 + (l_U397 * 8), "MisAccur" );
        sub_26763( g_U43567, 6, sub_11090(), uParam1 );
        sub_27325( g_U43579, 6 );
    }
    else if (iParam0 == 6)
    {
        uVar4 = {sub_26255( "MisAccur", l_U405, l_U400 + (l_U397 * 9) )};
        SET_TEXT_SCALE( uVar4._fU0, uVar4._fU4 );
        DISPLAY_TEXT( l_U405, l_U400 + (l_U397 * 9), "MisAccur" );
        sub_26763( g_U43567, 7, sub_11090(), uParam1 );
        sub_27325( g_U43579, 7 );
    };;;;;;;
    return;
}

void sub_35457(int iParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;

    SET_TEXT_JUSTIFY( 1 );
    SET_TEXT_COLOUR( 255, 255, 255, 255 );
    SET_TEXT_DROPSHADOW( l_U6, l_U3, l_U5, l_U4, 255 );
    SET_TEXT_WRAP( 0.20000000, 0.80000000 );
    SET_TEXT_DRAW_BEFORE_FADE( 0 );
    if (iParam0 == 0)
    {
        uVar5 = {sub_26255( uParam1, l_U405, l_U400 + (l_U397 * 3) )};
        SET_TEXT_SCALE( uVar5._fU0, uVar5._fU4 );
        DISPLAY_TEXT( l_U405, l_U400 + (l_U397 * 3), uParam1 );
        sub_26763( g_U43571, 1, sub_11706(), uParam2 );
        sub_27325( g_U43582, 1 );
    }
    else if (iParam0 == 1)
    {
        uVar5 = {sub_26255( uParam1, l_U405, l_U400 + (l_U397 * 4) )};
        SET_TEXT_SCALE( uVar5._fU0, uVar5._fU4 );
        DISPLAY_TEXT( l_U405, l_U400 + (l_U397 * 4), uParam1 );
        sub_26763( g_U43571, 2, sub_11706(), uParam2 );
        sub_27325( g_U43582, 2 );
    }
    else if (iParam0 == 2)
    {
        uVar5 = {sub_26255( uParam1, l_U405, l_U400 + (l_U397 * 5) )};
        SET_TEXT_SCALE( uVar5._fU0, uVar5._fU4 );
        DISPLAY_TEXT( l_U405, l_U400 + (l_U397 * 5), uParam1 );
        sub_26763( g_U43571, 3, sub_11706(), uParam2 );
        sub_27325( g_U43582, 3 );
    }
    else if (iParam0 == 3)
    {
        uVar5 = {sub_26255( uParam1, l_U405, l_U400 + (l_U397 * 6) )};
        SET_TEXT_SCALE( uVar5._fU0, uVar5._fU4 );
        DISPLAY_TEXT( l_U405, l_U400 + (l_U397 * 6), uParam1 );
        sub_26763( g_U43571, 4, sub_11706(), uParam2 );
        sub_27325( g_U43582, 4 );
    }
    else if (iParam0 == 4)
    {
        uVar5 = {sub_26255( uParam1, l_U405, l_U400 + (l_U397 * 7) )};
        SET_TEXT_SCALE( uVar5._fU0, uVar5._fU4 );
        DISPLAY_TEXT( l_U405, l_U400 + (l_U397 * 7), uParam1 );
        sub_26763( g_U43571, 5, sub_11706(), uParam2 );
        sub_27325( g_U43582, 5 );
    }
    else if (iParam0 == 5)
    {
        uVar5 = {sub_26255( uParam1, l_U405, l_U400 + (l_U397 * 8) )};
        SET_TEXT_SCALE( uVar5._fU0, uVar5._fU4 );
        DISPLAY_TEXT( l_U405, l_U400 + (l_U397 * 8), uParam1 );
        sub_26763( g_U43571, 6, sub_11706(), uParam2 );
        sub_27325( g_U43582, 6 );
    }
    else if (iParam0 == 6)
    {
        uVar5 = {sub_26255( uParam1, l_U405, l_U400 + (l_U397 * 9) )};
        SET_TEXT_SCALE( uVar5._fU0, uVar5._fU4 );
        DISPLAY_TEXT( l_U405, l_U400 + (l_U397 * 9), uParam1 );
        sub_26763( g_U43571, 7, sub_11706(), uParam2 );
        sub_27325( g_U43582, 7 );
    };;;;;;;
    return;
}

void sub_36424(int iParam0)
{
    SET_TEXT_RIGHT_JUSTIFY( 1 );
    SET_TEXT_COLOUR( 255, 255, 255, 255 );
    SET_TEXT_DROPSHADOW( l_U6, l_U3, l_U5, l_U4, 255 );
    SET_TEXT_SCALE( l_U411._fU0, l_U411._fU4 );
    SET_TEXT_WRAP( 0, l_U407 );
    SET_TEXT_DRAW_BEFORE_FADE( 0 );
    if (g_U43516 < 0)
    {
        g_U43516 = 0;
    }
    if (iParam0 == 0)
    {
        DISPLAY_TEXT_WITH_NUMBER( 0.00000000, l_U401 + (l_U397 * 3), "MisPercent", g_U43516 );
    }
    else if (iParam0 == 1)
    {
        DISPLAY_TEXT_WITH_NUMBER( 0.00000000, l_U401 + (l_U397 * 4), "MisPercent", g_U43516 );
    }
    else if (iParam0 == 2)
    {
        DISPLAY_TEXT_WITH_NUMBER( 0.00000000, l_U401 + (l_U397 * 5), "MisPercent", g_U43516 );
    }
    else if (iParam0 == 3)
    {
        DISPLAY_TEXT_WITH_NUMBER( 0.00000000, l_U401 + (l_U397 * 6), "MisPercent", g_U43516 );
    }
    else if (iParam0 == 4)
    {
        DISPLAY_TEXT_WITH_NUMBER( 0.00000000, l_U401 + (l_U397 * 7), "MisPercent", g_U43516 );
    }
    else if (iParam0 == 5)
    {
        DISPLAY_TEXT_WITH_NUMBER( 0.00000000, l_U401 + (l_U397 * 8), "MisPercent", g_U43516 );
    }
    else if (iParam0 == 6)
    {
        DISPLAY_TEXT_WITH_NUMBER( 0.00000000, l_U401 + (l_U397 * 9), "MisPercent", g_U43516 );
    };;;;;;;
    if (l_U455 == 1)
    {
        ;
    }
    return;
}

void sub_36998(int iParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    SET_TEXT_RIGHT_JUSTIFY( 1 );
    if (sub_11090())
    {
        GET_HUD_COLOUR( 16, ref uVar3, ref uVar5, ref uVar4, ref uVar6 );
        SET_TEXT_COLOUR( uVar3, uVar5, uVar4, 255 );
    }
    else
    {
        GET_HUD_COLOUR( 10, ref uVar3, ref uVar5, ref uVar4, ref uVar6 );
        SET_TEXT_COLOUR( uVar3, uVar5, uVar4, 255 );
    }
    SET_TEXT_DROPSHADOW( l_U6, l_U3, l_U5, l_U4, 255 );
    SET_TEXT_SCALE( l_U411._fU0, l_U411._fU4 );
    SET_TEXT_WRAP( 0, l_U407 );
    SET_TEXT_DRAW_BEFORE_FADE( 0 );
    if (iParam0 == 0)
    {
        if (sub_11090())
        {
            DISPLAY_TEXT_WITH_NUMBER( 0.00000000, l_U401 + (l_U397 * 3), "MisPercent", sub_11113() );
        }
        else
        {
            DISPLAY_TEXT_WITH_NUMBER( 0.00000000, l_U401 + (l_U397 * 3), "MisPercent", g_U43138[g_U43137]._fU20 );
        }
    }
    else if (iParam0 == 1)
    {
        if (sub_11090())
        {
            DISPLAY_TEXT_WITH_NUMBER( 0.00000000, l_U401 + (l_U397 * 4), "MisPercent", sub_11113() );
        }
        else
        {
            DISPLAY_TEXT_WITH_NUMBER( 0.00000000, l_U401 + (l_U397 * 4), "MisPercent", g_U43138[g_U43137]._fU20 );
        }
    }
    else if (iParam0 == 2)
    {
        if (sub_11090())
        {
            DISPLAY_TEXT_WITH_NUMBER( 0.00000000, l_U401 + (l_U397 * 5), "MisPercent", sub_11113() );
        }
        else
        {
            DISPLAY_TEXT_WITH_NUMBER( 0.00000000, l_U401 + (l_U397 * 5), "MisPercent", g_U43138[g_U43137]._fU20 );
        }
    }
    else if (iParam0 == 3)
    {
        if (sub_11090())
        {
            DISPLAY_TEXT_WITH_NUMBER( 0.00000000, l_U401 + (l_U397 * 6), "MisPercent", sub_11113() );
        }
        else
        {
            DISPLAY_TEXT_WITH_NUMBER( 0.00000000, l_U401 + (l_U397 * 6), "MisPercent", g_U43138[g_U43137]._fU20 );
        }
    }
    else if (iParam0 == 4)
    {
        if (sub_11090())
        {
            DISPLAY_TEXT_WITH_NUMBER( 0.00000000, l_U401 + (l_U397 * 7), "MisPercent", sub_11113() );
        }
        else
        {
            DISPLAY_TEXT_WITH_NUMBER( 0.00000000, l_U401 + (l_U397 * 7), "MisPercent", g_U43138[g_U43137]._fU20 );
        }
    }
    else if (iParam0 == 5)
    {
        if (sub_11090())
        {
            DISPLAY_TEXT_WITH_NUMBER( 0.00000000, l_U401 + (l_U397 * 8), "MisPercent", sub_11113() );
        }
        else
        {
            DISPLAY_TEXT_WITH_NUMBER( 0.00000000, l_U401 + (l_U397 * 8), "MisPercent", g_U43138[g_U43137]._fU20 );
        }
    }
    else if (iParam0 == 6)
    {
        if (sub_11090())
        {
            DISPLAY_TEXT_WITH_NUMBER( 0.00000000, l_U401 + (l_U397 * 9), "MisPercent", sub_11113() );
        }
        else
        {
            DISPLAY_TEXT_WITH_NUMBER( 0.00000000, l_U401 + (l_U397 * 9), "MisPercent", g_U43138[g_U43137]._fU20 );
        }
    };;;;;;;
    return;
}

void sub_38100(int iParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    SET_TEXT_JUSTIFY( 1 );
    SET_TEXT_COLOUR( 255, 255, 255, 255 );
    SET_TEXT_DROPSHADOW( l_U6, l_U3, l_U5, l_U4, 255 );
    SET_TEXT_WRAP( 0.20000000, 0.80000000 );
    SET_TEXT_DRAW_BEFORE_FADE( 0 );
    uVar4 = {sub_26255( "MisHeadshot", l_U405, l_U400 + (l_U397 * 3) )};
    SET_TEXT_SCALE( uVar4._fU0, uVar4._fU4 );
    if (iParam0 == 0)
    {
        uVar4 = {sub_26255( "MisHeadshot", l_U405, l_U400 + (l_U397 * 3) )};
        SET_TEXT_SCALE( uVar4._fU0, uVar4._fU4 );
        DISPLAY_TEXT( l_U405, l_U400 + (l_U397 * 3), "MisHeadshot" );
        sub_26763( g_U43566, 1, sub_12526(), uParam1 );
        sub_27325( g_U43578, 1 );
    }
    else if (iParam0 == 1)
    {
        uVar4 = {sub_26255( "MisHeadshot", l_U405, l_U400 + (l_U397 * 4) )};
        SET_TEXT_SCALE( uVar4._fU0, uVar4._fU4 );
        DISPLAY_TEXT( l_U405, l_U400 + (l_U397 * 4), "MisHeadshot" );
        sub_26763( g_U43566, 2, sub_12526(), uParam1 );
        sub_27325( g_U43578, 2 );
    }
    else if (iParam0 == 2)
    {
        uVar4 = {sub_26255( "MisHeadshot", l_U405, l_U400 + (l_U397 * 5) )};
        SET_TEXT_SCALE( uVar4._fU0, uVar4._fU4 );
        DISPLAY_TEXT( l_U405, l_U400 + (l_U397 * 5), "MisHeadshot" );
        sub_26763( g_U43566, 3, sub_12526(), uParam1 );
        sub_27325( g_U43578, 3 );
    }
    else if (iParam0 == 3)
    {
        uVar4 = {sub_26255( "MisHeadshot", l_U405, l_U400 + (l_U397 * 6) )};
        SET_TEXT_SCALE( uVar4._fU0, uVar4._fU4 );
        DISPLAY_TEXT( l_U405, l_U400 + (l_U397 * 6), "MisHeadshot" );
        sub_26763( g_U43566, 4, sub_12526(), uParam1 );
        sub_27325( g_U43578, 4 );
    }
    else if (iParam0 == 4)
    {
        uVar4 = {sub_26255( "MisHeadshot", l_U405, l_U400 + (l_U397 * 7) )};
        SET_TEXT_SCALE( uVar4._fU0, uVar4._fU4 );
        DISPLAY_TEXT( l_U405, l_U400 + (l_U397 * 7), "MisHeadshot" );
        sub_26763( g_U43566, 5, sub_12526(), uParam1 );
        sub_27325( g_U43578, 5 );
    }
    else if (iParam0 == 5)
    {
        uVar4 = {sub_26255( "MisHeadshot", l_U405, l_U400 + (l_U397 * 8) )};
        SET_TEXT_SCALE( uVar4._fU0, uVar4._fU4 );
        DISPLAY_TEXT( l_U405, l_U400 + (l_U397 * 8), "MisHeadshot" );
        sub_26763( g_U43566, 6, sub_12526(), uParam1 );
        sub_27325( g_U43578, 6 );
    }
    else if (iParam0 == 6)
    {
        uVar4 = {sub_26255( "MisHeadshot", l_U405, l_U400 + (l_U397 * 9) )};
        SET_TEXT_SCALE( uVar4._fU0, uVar4._fU4 );
        DISPLAY_TEXT( l_U405, l_U400 + (l_U397 * 9), "MisHeadshot" );
        sub_26763( g_U43566, 7, sub_12526(), uParam1 );
        sub_27325( g_U43578, 7 );
    };;;;;;;
    return;
}

void sub_39319(int iParam0)
{
    SET_TEXT_RIGHT_JUSTIFY( 1 );
    SET_TEXT_COLOUR( 255, 255, 255, 255 );
    SET_TEXT_DROPSHADOW( l_U6, l_U3, l_U5, l_U4, 255 );
    SET_TEXT_SCALE( l_U411._fU0, l_U411._fU4 );
    SET_TEXT_WRAP( 0, l_U407 );
    SET_TEXT_DRAW_BEFORE_FADE( 0 );
    if (g_U43515 < 0)
    {
        g_U43515 = 0;
    }
    if (iParam0 == 0)
    {
        DISPLAY_TEXT_WITH_NUMBER( 0, l_U401 + (l_U397 * 3), "MisDbgScore", g_U43515 );
    }
    else if (iParam0 == 1)
    {
        DISPLAY_TEXT_WITH_NUMBER( 0, l_U401 + (l_U397 * 4), "MisDbgScore", g_U43515 );
    }
    else if (iParam0 == 2)
    {
        DISPLAY_TEXT_WITH_NUMBER( 0, l_U401 + (l_U397 * 5), "MisDbgScore", g_U43515 );
    }
    else if (iParam0 == 3)
    {
        DISPLAY_TEXT_WITH_NUMBER( 0, l_U401 + (l_U397 * 6), "MisDbgScore", g_U43515 );
    }
    else if (iParam0 == 4)
    {
        DISPLAY_TEXT_WITH_NUMBER( 0, l_U401 + (l_U397 * 7), "MisDbgScore", g_U43515 );
    }
    else if (iParam0 == 5)
    {
        DISPLAY_TEXT_WITH_NUMBER( 0, l_U401 + (l_U397 * 8), "MisDbgScore", g_U43515 );
    }
    else if (iParam0 == 6)
    {
        DISPLAY_TEXT_WITH_NUMBER( 0, l_U401 + (l_U397 * 9), "MisDbgScore", g_U43515 );
    };;;;;;;
    return;
}

void sub_39873(int iParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    SET_TEXT_RIGHT_JUSTIFY( 1 );
    if (sub_12526())
    {
        GET_HUD_COLOUR( 16, ref uVar3, ref uVar5, ref uVar4, ref uVar6 );
        SET_TEXT_COLOUR( uVar3, uVar5, uVar4, 255 );
    }
    else
    {
        GET_HUD_COLOUR( 10, ref uVar3, ref uVar5, ref uVar4, ref uVar6 );
        SET_TEXT_COLOUR( uVar3, uVar5, uVar4, 255 );
    }
    SET_TEXT_DROPSHADOW( l_U6, l_U3, l_U5, l_U4, 255 );
    SET_TEXT_SCALE( l_U411._fU0, l_U411._fU4 );
    SET_TEXT_WRAP( 0, l_U407 );
    SET_TEXT_DRAW_BEFORE_FADE( 0 );
    if (iParam0 == 0)
    {
        if (sub_12526())
        {
            DISPLAY_TEXT_WITH_NUMBER( 0, l_U401 + (l_U397 * 3), "MisDbgScore", sub_12549() );
        }
        else
        {
            DISPLAY_TEXT_WITH_NUMBER( 0, l_U401 + (l_U397 * 3), "MisDbgScore", g_U43138[g_U43137]._fU16 );
        }
    }
    else if (iParam0 == 1)
    {
        if (sub_12526())
        {
            DISPLAY_TEXT_WITH_NUMBER( 0, l_U401 + (l_U397 * 4), "MisDbgScore", sub_12549() );
        }
        else
        {
            DISPLAY_TEXT_WITH_NUMBER( 0, l_U401 + (l_U397 * 4), "MisDbgScore", g_U43138[g_U43137]._fU16 );
        }
    }
    else if (iParam0 == 2)
    {
        if (sub_12526())
        {
            DISPLAY_TEXT_WITH_NUMBER( 0, l_U401 + (l_U397 * 5), "MisDbgScore", sub_12549() );
        }
        else
        {
            DISPLAY_TEXT_WITH_NUMBER( 0, l_U401 + (l_U397 * 5), "MisDbgScore", g_U43138[g_U43137]._fU16 );
        }
    }
    else if (iParam0 == 3)
    {
        if (sub_12526())
        {
            DISPLAY_TEXT_WITH_NUMBER( 0, l_U401 + (l_U397 * 6), "MisDbgScore", sub_12549() );
        }
        else
        {
            DISPLAY_TEXT_WITH_NUMBER( 0, l_U401 + (l_U397 * 6), "MisDbgScore", g_U43138[g_U43137]._fU16 );
        }
    }
    else if (iParam0 == 4)
    {
        if (sub_12526())
        {
            DISPLAY_TEXT_WITH_NUMBER( 0, l_U401 + (l_U397 * 7), "MisDbgScore", sub_12549() );
        }
        else
        {
            DISPLAY_TEXT_WITH_NUMBER( 0, l_U401 + (l_U397 * 7), "MisDbgScore", g_U43138[g_U43137]._fU16 );
        }
    }
    else if (iParam0 == 5)
    {
        if (sub_12526())
        {
            DISPLAY_TEXT_WITH_NUMBER( 0, l_U401 + (l_U397 * 8), "MisDbgScore", sub_12549() );
        }
        else
        {
            DISPLAY_TEXT_WITH_NUMBER( 0, l_U401 + (l_U397 * 8), "MisDbgScore", g_U43138[g_U43137]._fU16 );
        }
    }
    else if (iParam0 == 6)
    {
        if (sub_12526())
        {
            DISPLAY_TEXT_WITH_NUMBER( 0, l_U401 + (l_U397 * 9), "MisDbgScore", sub_12549() );
        }
        else
        {
            DISPLAY_TEXT_WITH_NUMBER( 0, l_U401 + (l_U397 * 9), "MisDbgScore", g_U43138[g_U43137]._fU16 );
        }
    };;;;;;;
    return;
}

void sub_41066(int iParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;

    SET_TEXT_JUSTIFY( 1 );
    SET_TEXT_COLOUR( 255, 255, 255, 255 );
    SET_TEXT_DROPSHADOW( l_U6, l_U3, l_U5, l_U4, 255 );
    SET_TEXT_WRAP( 0.20000000, 0.80000000 );
    SET_TEXT_DRAW_BEFORE_FADE( 0 );
    if (iParam0 == 0)
    {
        uVar5 = {sub_26255( uParam1, l_U405, l_U400 + (l_U397 * 3) )};
        SET_TEXT_SCALE( uVar5._fU0, uVar5._fU4 );
        DISPLAY_TEXT( l_U405, l_U400 + (l_U397 * 3), uParam1 );
        sub_26763( g_U43570, 1, sub_13370(), uParam2 );
        sub_27325( g_U43576, 1 );
    }
    else if (iParam0 == 1)
    {
        uVar5 = {sub_26255( uParam1, l_U405, l_U400 + (l_U397 * 4) )};
        SET_TEXT_SCALE( uVar5._fU0, uVar5._fU4 );
        DISPLAY_TEXT( l_U405, l_U400 + (l_U397 * 4), uParam1 );
        sub_26763( g_U43570, 2, sub_13370(), uParam2 );
        sub_27325( g_U43576, 2 );
    }
    else if (iParam0 == 2)
    {
        uVar5 = {sub_26255( uParam1, l_U405, l_U400 + (l_U397 * 5) )};
        SET_TEXT_SCALE( uVar5._fU0, uVar5._fU4 );
        DISPLAY_TEXT( l_U405, l_U400 + (l_U397 * 5), uParam1 );
        sub_26763( g_U43570, 3, sub_13370(), uParam2 );
        sub_27325( g_U43576, 3 );
    }
    else if (iParam0 == 3)
    {
        uVar5 = {sub_26255( uParam1, l_U405, l_U400 + (l_U397 * 6) )};
        SET_TEXT_SCALE( uVar5._fU0, uVar5._fU4 );
        DISPLAY_TEXT( l_U405, l_U400 + (l_U397 * 6), uParam1 );
        sub_26763( g_U43570, 4, sub_13370(), uParam2 );
        sub_27325( g_U43576, 4 );
    }
    else if (iParam0 == 4)
    {
        uVar5 = {sub_26255( uParam1, l_U405, l_U400 + (l_U397 * 7) )};
        SET_TEXT_SCALE( uVar5._fU0, uVar5._fU4 );
        DISPLAY_TEXT( 0.36000000, l_U400 + (l_U397 * 7), uParam1 );
        sub_26763( g_U43570, 5, sub_13370(), uParam2 );
        sub_27325( g_U43576, 5 );
    }
    else if (iParam0 == 5)
    {
        uVar5 = {sub_26255( uParam1, l_U405, l_U400 + (l_U397 * 8) )};
        SET_TEXT_SCALE( uVar5._fU0, uVar5._fU4 );
        DISPLAY_TEXT( 0.36000000, l_U400 + (l_U397 * 8), uParam1 );
        sub_26763( g_U43570, 6, sub_13370(), uParam2 );
        sub_27325( g_U43576, 6 );
    }
    else if (iParam0 == 6)
    {
        uVar5 = {sub_26255( uParam1, l_U405, l_U400 + (l_U397 * 9) )};
        SET_TEXT_SCALE( uVar5._fU0, uVar5._fU4 );
        DISPLAY_TEXT( 0.36000000, l_U400 + (l_U397 * 9), uParam1 );
        sub_26763( g_U43570, 7, sub_13370(), uParam2 );
        sub_27325( g_U43576, 7 );
    }
    else if (iParam0 == 7)
    {
        uVar5 = {sub_26255( uParam1, l_U405, l_U400 + (l_U397 * 10) )};
        SET_TEXT_SCALE( uVar5._fU0, uVar5._fU4 );
        DISPLAY_TEXT( 0.36000000, l_U400 + (l_U397 * 10), uParam1 );
        sub_26763( g_U43570, 8, sub_13370(), uParam2 );
        sub_27325( g_U43576, 8 );
    };;;;;;;;
    return;
}

void sub_42152(int iParam0)
{
    int iVar3;

    SET_TEXT_RIGHT_JUSTIFY( 1 );
    SET_TEXT_COLOUR( 255, 255, 255, 255 );
    SET_TEXT_DROPSHADOW( l_U6, l_U3, l_U5, l_U4, 255 );
    SET_TEXT_SCALE( l_U414._fU0, l_U414._fU4 );
    SET_TEXT_WRAP( 0, l_U407 );
    SET_TEXT_DRAW_BEFORE_FADE( 0 );
    if (iParam0 == 0)
    {
        iVar3 = 3;
    }
    else if (iParam0 == 1)
    {
        iVar3 = 4;
    }
    else if (iParam0 == 2)
    {
        iVar3 = 5;
    }
    else if (iParam0 == 3)
    {
        iVar3 = 6;
    }
    else if (iParam0 == 4)
    {
        iVar3 = 7;
    }
    else if (iParam0 == 5)
    {
        iVar3 = 8;
    }
    else if (iParam0 == 6)
    {
        iVar3 = 9;
    }
    else if (iParam0 == 7)
    {
        iVar3 = 10;
    };;;;;;;;
    if (g_U43555 > 9)
    {
        if (g_U43556 > 9)
        {
            DISPLAY_TEXT_WITH_3_NUMBERS( 0.00000000, l_U401 + (l_U397 * iVar3), "MisDbgTime1", g_U43554, g_U43555, g_U43556 );
        }
        else
        {
            DISPLAY_TEXT_WITH_3_NUMBERS( 0.00000000, l_U401 + (l_U397 * iVar3), "MisTimeMilli", g_U43554, g_U43555, g_U43556 );
        }
    }
    else if (g_U43556 > 9)
    {
        DISPLAY_TEXT_WITH_3_NUMBERS( 0.00000000, l_U401 + (l_U397 * iVar3), "MisTimeSecond", g_U43554, g_U43555, g_U43556 );
    }
    else
    {
        DISPLAY_TEXT_WITH_3_NUMBERS( 0.00000000, l_U401 + (l_U397 * iVar3), "MisTimeMilSec", g_U43554, g_U43555, g_U43556 );
    }
    return;
}

void sub_42718(int iParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    int iVar7;
    int iVar8;
    int iVar9;

    SET_TEXT_RIGHT_JUSTIFY( 1 );
    if (sub_13370())
    {
        GET_HUD_COLOUR( 16, ref uVar3, ref uVar5, ref uVar4, ref uVar6 );
        SET_TEXT_COLOUR( uVar3, uVar5, uVar4, 255 );
    }
    else
    {
        GET_HUD_COLOUR( 10, ref uVar3, ref uVar5, ref uVar4, ref uVar6 );
        SET_TEXT_COLOUR( uVar3, uVar5, uVar4, 255 );
    }
    SET_TEXT_DROPSHADOW( l_U6, l_U3, l_U5, l_U4, 255 );
    SET_TEXT_SCALE( l_U414._fU0, l_U414._fU4 );
    SET_TEXT_WRAP( 0, l_U407 );
    SET_TEXT_DRAW_BEFORE_FADE( 0 );
    if (iParam0 == 0)
    {
        iVar7 = 3;
    }
    else if (iParam0 == 1)
    {
        iVar7 = 4;
    }
    else if (iParam0 == 2)
    {
        iVar7 = 5;
    }
    else if (iParam0 == 3)
    {
        iVar7 = 6;
    }
    else if (iParam0 == 4)
    {
        iVar7 = 7;
    }
    else if (iParam0 == 5)
    {
        iVar7 = 8;
    }
    else if (iParam0 == 6)
    {
        iVar7 = 9;
    }
    else if (iParam0 == 7)
    {
        iVar7 = 10;
    };;;;;;;;
    iVar8 = sub_8473( g_U43138[g_U43137]._fU44 );
    iVar9 = sub_8530( g_U43138[g_U43137]._fU44 );
    if (sub_13370())
    {
        if ((sub_8473( sub_13393() )) > 9)
        {
            if ((sub_8530( sub_13393() )) > 9)
            {
                DISPLAY_TEXT_WITH_3_NUMBERS( 0, l_U401 + (l_U397 * iVar7), "MisDbgTime1", sub_8410( sub_13393() ), sub_8473( sub_13393() ), sub_8530( sub_13393() ) );
            }
            else
            {
                DISPLAY_TEXT_WITH_3_NUMBERS( 0, l_U401 + (l_U397 * iVar7), "MisTimeMilli", sub_8410( sub_13393() ), sub_8473( sub_13393() ), sub_8530( sub_13393() ) );
            }
        }
        else if ((sub_8530( sub_13393() )) > 9)
        {
            DISPLAY_TEXT_WITH_3_NUMBERS( 0, l_U401 + (l_U397 * iVar7), "MisTimeSecond", sub_8410( sub_13393() ), sub_8473( sub_13393() ), sub_8530( sub_13393() ) );
        }
        else
        {
            DISPLAY_TEXT_WITH_3_NUMBERS( 0, l_U401 + (l_U397 * iVar7), "MisTimeMilSec", sub_8410( sub_13393() ), sub_8473( sub_13393() ), sub_8530( sub_13393() ) );
        }
    }
    else if (iVar8 > 9)
    {
        if (iVar9 > 9)
        {
            DISPLAY_TEXT_WITH_3_NUMBERS( 0.00000000, l_U401 + (l_U397 * iVar7), "MisDbgTime1", 0, iVar8, iVar9 );
        }
        else
        {
            DISPLAY_TEXT_WITH_3_NUMBERS( 0.00000000, l_U401 + (l_U397 * iVar7), "MisTimeMilli", 0, iVar8, iVar9 );
        }
    }
    else if (iVar9 > 9)
    {
        DISPLAY_TEXT_WITH_3_NUMBERS( 0.00000000, l_U401 + (l_U397 * iVar7), "MisTimeSecond", 0, iVar8, iVar9 );
    }
    else
    {
        DISPLAY_TEXT_WITH_3_NUMBERS( 0.00000000, l_U401 + (l_U397 * iVar7), "MisTimeMilSec", 0, iVar8, iVar9 );
    };;;
    return;
}

void sub_43732(int iParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;

    SET_TEXT_JUSTIFY( 1 );
    SET_TEXT_COLOUR( 255, 255, 255, 255 );
    SET_TEXT_DROPSHADOW( l_U6, l_U3, l_U5, l_U4, 255 );
    SET_TEXT_WRAP( 0.20000000, 0.80000000 );
    SET_TEXT_DRAW_BEFORE_FADE( 0 );
    if (iParam0 == 0)
    {
        uVar5 = {sub_26255( uParam1, l_U405, l_U400 + (l_U397 * 3) )};
        SET_TEXT_SCALE( uVar5._fU0, uVar5._fU4 );
        DISPLAY_TEXT( l_U405, l_U400 + (l_U397 * 3), uParam1 );
        sub_26763( g_U43572, 1, sub_14073(), uParam2 );
        sub_27325( g_U43583, 1 );
    }
    else if (iParam0 == 1)
    {
        uVar5 = {sub_26255( uParam1, l_U405, l_U400 + (l_U397 * 4) )};
        SET_TEXT_SCALE( uVar5._fU0, uVar5._fU4 );
        DISPLAY_TEXT( l_U405, l_U400 + (l_U397 * 4), uParam1 );
        sub_26763( g_U43572, 2, sub_14073(), uParam2 );
        sub_27325( g_U43583, 2 );
    }
    else if (iParam0 == 2)
    {
        uVar5 = {sub_26255( uParam1, l_U405, l_U400 + (l_U397 * 5) )};
        SET_TEXT_SCALE( uVar5._fU0, uVar5._fU4 );
        DISPLAY_TEXT( l_U405, l_U400 + (l_U397 * 5), uParam1 );
        sub_26763( g_U43572, 3, sub_14073(), uParam2 );
        sub_27325( g_U43583, 3 );
    }
    else if (iParam0 == 3)
    {
        uVar5 = {sub_26255( uParam1, l_U405, l_U400 + (l_U397 * 6) )};
        SET_TEXT_SCALE( uVar5._fU0, uVar5._fU4 );
        DISPLAY_TEXT( l_U405, l_U400 + (l_U397 * 6), uParam1 );
        sub_26763( g_U43572, 4, sub_14073(), uParam2 );
        sub_27325( g_U43583, 4 );
    }
    else if (iParam0 == 4)
    {
        uVar5 = {sub_26255( uParam1, l_U405, l_U400 + (l_U397 * 7) )};
        SET_TEXT_SCALE( uVar5._fU0, uVar5._fU4 );
        DISPLAY_TEXT( l_U405, l_U400 + (l_U397 * 7), uParam1 );
        sub_26763( g_U43572, 5, sub_14073(), uParam2 );
        sub_27325( g_U43583, 5 );
    }
    else if (iParam0 == 5)
    {
        uVar5 = {sub_26255( uParam1, l_U405, l_U400 + (l_U397 * 8) )};
        SET_TEXT_SCALE( uVar5._fU0, uVar5._fU4 );
        DISPLAY_TEXT( l_U405, l_U400 + (l_U397 * 8), uParam1 );
        sub_26763( g_U43572, 6, sub_14073(), uParam2 );
        sub_27325( g_U43583, 6 );
    }
    else if (iParam0 == 6)
    {
        uVar5 = {sub_26255( uParam1, l_U405, l_U400 + (l_U397 * 9) )};
        SET_TEXT_SCALE( uVar5._fU0, uVar5._fU4 );
        DISPLAY_TEXT( l_U405, l_U400 + (l_U397 * 9), uParam1 );
        sub_26763( g_U43572, 7, sub_14073(), uParam2 );
        sub_27325( g_U43583, 7 );
    };;;;;;;
    return;
}

void sub_45588(int iParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;

    SET_TEXT_JUSTIFY( 1 );
    SET_TEXT_COLOUR( 255, 255, 255, 255 );
    SET_TEXT_DROPSHADOW( l_U6, l_U3, l_U5, l_U4, 255 );
    SET_TEXT_WRAP( 0.20000000, 0.80000000 );
    SET_TEXT_DRAW_BEFORE_FADE( 0 );
    if (iParam0 == 0)
    {
        uVar5 = {sub_26255( uParam1, l_U405, l_U400 + (l_U397 * 3) )};
        SET_TEXT_SCALE( uVar5._fU0, uVar5._fU4 );
        DISPLAY_TEXT( l_U405, l_U400 + (l_U397 * 3), uParam1 );
        sub_26763( g_U43565, 1, sub_16112(), uParam2 );
        sub_27325( g_U43581, 1 );
    }
    else if (iParam0 == 1)
    {
        uVar5 = {sub_26255( uParam1, l_U405, l_U400 + (l_U397 * 4) )};
        SET_TEXT_SCALE( uVar5._fU0, uVar5._fU4 );
        DISPLAY_TEXT( l_U405, l_U400 + (l_U397 * 4), uParam1 );
        sub_26763( g_U43565, 2, sub_16112(), uParam2 );
        sub_27325( g_U43581, 2 );
    }
    else if (iParam0 == 2)
    {
        uVar5 = {sub_26255( uParam1, l_U405, l_U400 + (l_U397 * 5) )};
        SET_TEXT_SCALE( uVar5._fU0, uVar5._fU4 );
        DISPLAY_TEXT( l_U405, l_U400 + (l_U397 * 5), uParam1 );
        sub_26763( g_U43565, 3, sub_16112(), uParam2 );
        sub_27325( g_U43581, 3 );
    }
    else if (iParam0 == 3)
    {
        uVar5 = {sub_26255( uParam1, l_U405, l_U400 + (l_U397 * 6) )};
        SET_TEXT_SCALE( uVar5._fU0, uVar5._fU4 );
        DISPLAY_TEXT( l_U405, l_U400 + (l_U397 * 6), uParam1 );
        sub_26763( g_U43565, 4, sub_16112(), uParam2 );
        sub_27325( g_U43581, 4 );
    }
    else if (iParam0 == 4)
    {
        uVar5 = {sub_26255( uParam1, l_U405, l_U400 + (l_U397 * 7) )};
        SET_TEXT_SCALE( uVar5._fU0, uVar5._fU4 );
        DISPLAY_TEXT( l_U405, l_U400 + (l_U397 * 7), uParam1 );
        sub_26763( g_U43565, 5, sub_16112(), uParam2 );
        sub_27325( g_U43581, 5 );
    }
    else if (iParam0 == 5)
    {
        uVar5 = {sub_26255( uParam1, l_U405, l_U400 + (l_U397 * 8) )};
        SET_TEXT_SCALE( uVar5._fU0, uVar5._fU4 );
        DISPLAY_TEXT( l_U405, l_U400 + (l_U397 * 8), uParam1 );
        sub_26763( g_U43565, 6, sub_16112(), uParam2 );
        sub_27325( g_U43581, 6 );
    }
    else if (iParam0 == 6)
    {
        uVar5 = {sub_26255( uParam1, l_U405, l_U400 + (l_U397 * 9) )};
        SET_TEXT_SCALE( uVar5._fU0, uVar5._fU4 );
        DISPLAY_TEXT( l_U405, l_U400 + (l_U397 * 9), uParam1 );
        sub_26763( g_U43565, 7, sub_16112(), uParam2 );
        sub_27325( g_U43581, 7 );
    };;;;;;;
    return;
}

void sub_46594(int iParam0)
{
    SET_TEXT_RIGHT_JUSTIFY( 1 );
    SET_TEXT_COLOUR( 255, 255, 255, 255 );
    SET_TEXT_DROPSHADOW( l_U6, l_U3, l_U5, l_U4, 255 );
    SET_TEXT_SCALE( l_U411._fU0, l_U411._fU4 );
    SET_TEXT_WRAP( 0, l_U407 );
    SET_TEXT_DRAW_BEFORE_FADE( 0 );
    if (g_U43558 < 0)
    {
        g_U43558 = 0;
    }
    if (iParam0 == 0)
    {
        DISPLAY_TEXT_WITH_NUMBER( 0.00000000, l_U401 + (l_U397 * 3), "MisDbgSpeed", FLOOR( g_U43558 ) );
    }
    else if (iParam0 == 1)
    {
        DISPLAY_TEXT_WITH_NUMBER( 0.00000000, l_U401 + (l_U397 * 4), "MisDbgSpeed", FLOOR( g_U43558 ) );
    }
    else if (iParam0 == 2)
    {
        DISPLAY_TEXT_WITH_NUMBER( 0.00000000, l_U401 + (l_U397 * 5), "MisDbgSpeed", FLOOR( g_U43558 ) );
    }
    else if (iParam0 == 3)
    {
        DISPLAY_TEXT_WITH_NUMBER( 0.00000000, l_U401 + (l_U397 * 6), "MisDbgSpeed", FLOOR( g_U43558 ) );
    }
    else if (iParam0 == 4)
    {
        DISPLAY_TEXT_WITH_NUMBER( 0.00000000, l_U401 + (l_U397 * 7), "MisDbgSpeed", FLOOR( g_U43558 ) );
    }
    else if (iParam0 == 5)
    {
        DISPLAY_TEXT_WITH_NUMBER( 0.00000000, l_U401 + (l_U397 * 8), "MisDbgSpeed", FLOOR( g_U43558 ) );
    }
    else if (iParam0 == 6)
    {
        DISPLAY_TEXT_WITH_NUMBER( 0.00000000, l_U401 + (l_U397 * 9), "MisDbgSpeed", FLOOR( g_U43558 ) );
    };;;;;;;
    if (l_U455 == 1)
    {
        ;
    }
    return;
}

void sub_47244(int iParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    SET_TEXT_RIGHT_JUSTIFY( 1 );
    if (sub_16112())
    {
        GET_HUD_COLOUR( 16, ref uVar3, ref uVar5, ref uVar4, ref uVar6 );
        SET_TEXT_COLOUR( uVar3, uVar5, uVar4, 255 );
    }
    else
    {
        GET_HUD_COLOUR( 10, ref uVar3, ref uVar5, ref uVar4, ref uVar6 );
        SET_TEXT_COLOUR( uVar3, uVar5, uVar4, 255 );
    }
    SET_TEXT_DROPSHADOW( l_U6, l_U3, l_U5, l_U4, 255 );
    SET_TEXT_SCALE( l_U411._fU0, l_U411._fU4 );
    SET_TEXT_WRAP( 0, l_U407 );
    SET_TEXT_DRAW_BEFORE_FADE( 0 );
    if (iParam0 == 0)
    {
        if (sub_16112())
        {
            DISPLAY_TEXT_WITH_NUMBER( 0.00000000, l_U401 + (l_U397 * 3), "MisDbgSpeed", sub_16135() );
        }
        else
        {
            DISPLAY_TEXT_WITH_NUMBER( 0.00000000, l_U401 + (l_U397 * 3), "MisDbgSpeed", g_U43138[g_U43137]._fU24 );
        }
    }
    else if (iParam0 == 1)
    {
        if (sub_16112())
        {
            DISPLAY_TEXT_WITH_NUMBER( 0.00000000, l_U401 + (l_U397 * 4), "MisDbgSpeed", sub_16135() );
        }
        else
        {
            DISPLAY_TEXT_WITH_NUMBER( 0.00000000, l_U401 + (l_U397 * 4), "MisDbgSpeed", g_U43138[g_U43137]._fU24 );
        }
    }
    else if (iParam0 == 2)
    {
        if (sub_16112())
        {
            DISPLAY_TEXT_WITH_NUMBER( 0.00000000, l_U401 + (l_U397 * 5), "MisDbgSpeed", sub_16135() );
        }
        else
        {
            DISPLAY_TEXT_WITH_NUMBER( 0.00000000, l_U401 + (l_U397 * 5), "MisDbgSpeed", g_U43138[g_U43137]._fU24 );
        }
    }
    else if (iParam0 == 3)
    {
        if (sub_16112())
        {
            DISPLAY_TEXT_WITH_NUMBER( 0.00000000, l_U401 + (l_U397 * 6), "MisDbgSpeed", sub_16135() );
        }
        else
        {
            DISPLAY_TEXT_WITH_NUMBER( 0.00000000, l_U401 + (l_U397 * 6), "MisDbgSpeed", g_U43138[g_U43137]._fU24 );
        }
    }
    else if (iParam0 == 4)
    {
        if (sub_16112())
        {
            DISPLAY_TEXT_WITH_NUMBER( 0.00000000, l_U401 + (l_U397 * 7), "MisDbgSpeed", sub_16135() );
        }
        else
        {
            DISPLAY_TEXT_WITH_NUMBER( 0.00000000, l_U401 + (l_U397 * 7), "MisDbgSpeed", g_U43138[g_U43137]._fU24 );
        }
    }
    else if (iParam0 == 5)
    {
        if (sub_16112())
        {
            DISPLAY_TEXT_WITH_NUMBER( 0.00000000, l_U401 + (l_U397 * 8), "MisDbgSpeed", sub_16135() );
        }
        else
        {
            DISPLAY_TEXT_WITH_NUMBER( 0.00000000, l_U401 + (l_U397 * 8), "MisDbgSpeed", g_U43138[g_U43137]._fU24 );
        }
    }
    else if (iParam0 == 6)
    {
        if (sub_16112())
        {
            DISPLAY_TEXT_WITH_NUMBER( 0.00000000, l_U401 + (l_U397 * 9), "MisDbgSpeed", sub_16135() );
        }
        else
        {
            DISPLAY_TEXT_WITH_NUMBER( 0.00000000, l_U401 + (l_U397 * 9), "MisDbgSpeed", g_U43138[g_U43137]._fU24 );
        }
    };;;;;;;
    return;
}

void sub_48665(int iParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;

    SET_TEXT_JUSTIFY( 1 );
    SET_TEXT_COLOUR( 255, 255, 255, 255 );
    SET_TEXT_DROPSHADOW( l_U6, l_U3, l_U5, l_U4, 255 );
    SET_TEXT_WRAP( 0.20000000, 0.80000000 );
    SET_TEXT_DRAW_BEFORE_FADE( 0 );
    if (iParam0 == 0)
    {
        uVar5 = {sub_26255( uParam1, l_U405, l_U400 + (l_U397 * 3) )};
        SET_TEXT_SCALE( uVar5._fU0, uVar5._fU4 );
        DISPLAY_TEXT( l_U405, l_U400 + (l_U397 * 3), uParam1 );
        sub_26763( g_U43569, 1, sub_17338(), uParam2 );
        sub_27325( g_U43580, 1 );
    }
    else if (iParam0 == 1)
    {
        uVar5 = {sub_26255( uParam1, l_U405, l_U400 + (l_U397 * 4) )};
        SET_TEXT_SCALE( uVar5._fU0, uVar5._fU4 );
        DISPLAY_TEXT( l_U405, l_U400 + (l_U397 * 4), uParam1 );
        sub_26763( g_U43569, 2, sub_17338(), uParam2 );
        sub_27325( g_U43580, 2 );
    }
    else if (iParam0 == 2)
    {
        uVar5 = {sub_26255( uParam1, l_U405, l_U400 + (l_U397 * 5) )};
        SET_TEXT_SCALE( uVar5._fU0, uVar5._fU4 );
        DISPLAY_TEXT( l_U405, l_U400 + (l_U397 * 5), uParam1 );
        sub_26763( g_U43569, 3, sub_17338(), uParam2 );
        sub_27325( g_U43580, 3 );
    }
    else if (iParam0 == 3)
    {
        uVar5 = {sub_26255( uParam1, l_U405, l_U400 + (l_U397 * 6) )};
        SET_TEXT_SCALE( uVar5._fU0, uVar5._fU4 );
        DISPLAY_TEXT( l_U405, l_U400 + (l_U397 * 6), uParam1 );
        sub_26763( g_U43569, 4, sub_17338(), uParam2 );
        sub_27325( g_U43580, 4 );
    }
    else if (iParam0 == 4)
    {
        uVar5 = {sub_26255( uParam1, l_U405, l_U400 + (l_U397 * 7) )};
        SET_TEXT_SCALE( uVar5._fU0, uVar5._fU4 );
        DISPLAY_TEXT( l_U405, l_U400 + (l_U397 * 7), uParam1 );
        sub_26763( g_U43569, 5, sub_17338(), uParam2 );
        sub_27325( g_U43580, 5 );
    }
    else if (iParam0 == 5)
    {
        uVar5 = {sub_26255( uParam1, l_U405, l_U400 + (l_U397 * 8) )};
        SET_TEXT_SCALE( uVar5._fU0, uVar5._fU4 );
        DISPLAY_TEXT( l_U405, l_U400 + (l_U397 * 8), uParam1 );
        sub_26763( g_U43569, 6, sub_17338(), uParam2 );
        sub_27325( g_U43580, 6 );
    }
    else if (iParam0 == 6)
    {
        uVar5 = {sub_26255( uParam1, l_U405, l_U400 + (l_U397 * 9) )};
        SET_TEXT_SCALE( uVar5._fU0, uVar5._fU4 );
        DISPLAY_TEXT( l_U405, l_U400 + (l_U397 * 9), uParam1 );
        sub_26763( g_U43569, 7, sub_17338(), uParam2 );
        sub_27325( g_U43580, 7 );
    };;;;;;;
    return;
}

void sub_49632(int iParam0)
{
    SET_TEXT_RIGHT_JUSTIFY( 1 );
    SET_TEXT_COLOUR( 255, 255, 255, 255 );
    SET_TEXT_DROPSHADOW( l_U6, l_U3, l_U5, l_U4, 255 );
    SET_TEXT_SCALE( l_U411._fU0, l_U411._fU4 );
    SET_TEXT_WRAP( 0, l_U407 );
    SET_TEXT_DRAW_BEFORE_FADE( 0 );
    if (g_U43519 < 0)
    {
        g_U43519 = 0;
    }
    if (iParam0 == 0)
    {
        DISPLAY_TEXT_WITH_NUMBER( 0.00000000, l_U401 + (l_U397 * 3), "MisDbgScore", g_U43519 );
    }
    else if (iParam0 == 1)
    {
        DISPLAY_TEXT_WITH_NUMBER( 0.00000000, l_U401 + (l_U397 * 4), "MisDbgScore", g_U43519 );
    }
    else if (iParam0 == 2)
    {
        DISPLAY_TEXT_WITH_NUMBER( 0.00000000, l_U401 + (l_U397 * 5), "MisDbgScore", g_U43519 );
    }
    else if (iParam0 == 3)
    {
        DISPLAY_TEXT_WITH_NUMBER( 0.00000000, l_U401 + (l_U397 * 6), "MisDbgScore", g_U43519 );
    }
    else if (iParam0 == 4)
    {
        DISPLAY_TEXT_WITH_NUMBER( 0.00000000, l_U401 + (l_U397 * 7), "MisDbgScore", g_U43519 );
    }
    else if (iParam0 == 5)
    {
        DISPLAY_TEXT_WITH_NUMBER( 0.00000000, l_U401 + (l_U397 * 8), "MisDbgScore", g_U43519 );
    }
    else if (iParam0 == 6)
    {
        DISPLAY_TEXT_WITH_NUMBER( 0.00000000, l_U401 + (l_U397 * 9), "MisDbgScore", g_U43519 );
    };;;;;;;
    if (l_U455 == 1)
    {
        ;
    }
    return;
}

void sub_50213(int iParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    SET_TEXT_RIGHT_JUSTIFY( 1 );
    if (sub_17338())
    {
        GET_HUD_COLOUR( 16, ref uVar3, ref uVar5, ref uVar4, ref uVar6 );
        SET_TEXT_COLOUR( uVar3, uVar5, uVar4, 255 );
    }
    else
    {
        GET_HUD_COLOUR( 10, ref uVar3, ref uVar5, ref uVar4, ref uVar6 );
        SET_TEXT_COLOUR( uVar3, uVar5, uVar4, 255 );
    }
    SET_TEXT_DROPSHADOW( l_U6, l_U3, l_U5, l_U4, 255 );
    SET_TEXT_SCALE( l_U411._fU0, l_U411._fU4 );
    SET_TEXT_WRAP( 0, l_U407 );
    SET_TEXT_DRAW_BEFORE_FADE( 0 );
    if (iParam0 == 0)
    {
        if (sub_17338())
        {
            DISPLAY_TEXT_WITH_NUMBER( 0.00000000, l_U401 + (l_U397 * 3), "MisDbgScore", sub_17361() );
        }
        else
        {
            DISPLAY_TEXT_WITH_NUMBER( 0.00000000, l_U401 + (l_U397 * 3), "MisDbgScore", g_U43138[g_U43137]._fU28 );
        }
    }
    else if (iParam0 == 1)
    {
        if (sub_17338())
        {
            DISPLAY_TEXT_WITH_NUMBER( 0.00000000, l_U401 + (l_U397 * 4), "MisDbgScore", sub_17361() );
        }
        else
        {
            DISPLAY_TEXT_WITH_NUMBER( 0.00000000, l_U401 + (l_U397 * 4), "MisDbgScore", g_U43138[g_U43137]._fU28 );
        }
    }
    else if (iParam0 == 2)
    {
        if (sub_17338())
        {
            DISPLAY_TEXT_WITH_NUMBER( 0.00000000, l_U401 + (l_U397 * 5), "MisDbgScore", sub_17361() );
        }
        else
        {
            DISPLAY_TEXT_WITH_NUMBER( 0.00000000, l_U401 + (l_U397 * 5), "MisDbgScore", g_U43138[g_U43137]._fU28 );
        }
    }
    else if (iParam0 == 3)
    {
        if (sub_17338())
        {
            DISPLAY_TEXT_WITH_NUMBER( 0.00000000, l_U401 + (l_U397 * 6), "MisDbgScore", sub_17361() );
        }
        else
        {
            DISPLAY_TEXT_WITH_NUMBER( 0.00000000, l_U401 + (l_U397 * 6), "MisDbgScore", g_U43138[g_U43137]._fU28 );
        }
    }
    else if (iParam0 == 4)
    {
        if (sub_17338())
        {
            DISPLAY_TEXT_WITH_NUMBER( 0.00000000, l_U401 + (l_U397 * 7), "MisDbgScore", sub_17361() );
        }
        else
        {
            DISPLAY_TEXT_WITH_NUMBER( 0.00000000, l_U401 + (l_U397 * 7), "MisDbgScore", g_U43138[g_U43137]._fU28 );
        }
    }
    else if (iParam0 == 5)
    {
        if (sub_17338())
        {
            DISPLAY_TEXT_WITH_NUMBER( 0.00000000, l_U401 + (l_U397 * 8), "MisDbgScore", sub_17361() );
        }
        else
        {
            DISPLAY_TEXT_WITH_NUMBER( 0.00000000, l_U401 + (l_U397 * 8), "MisDbgScore", g_U43138[g_U43137]._fU28 );
        }
    }
    else if (iParam0 == 6)
    {
        if (sub_17338())
        {
            DISPLAY_TEXT_WITH_NUMBER( 0.00000000, l_U401 + (l_U397 * 9), "MisDbgScore", sub_17361() );
        }
        else
        {
            DISPLAY_TEXT_WITH_NUMBER( 0.00000000, l_U401 + (l_U397 * 9), "MisDbgScore", g_U43138[g_U43137]._fU28 );
        }
    };;;;;;;
    return;
}

void sub_51379(int iParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;

    SET_TEXT_JUSTIFY( 1 );
    SET_TEXT_COLOUR( 255, 255, 255, 255 );
    SET_TEXT_DROPSHADOW( l_U6, l_U3, l_U5, l_U4, 255 );
    SET_TEXT_WRAP( 0.20000000, 0.80000000 );
    SET_TEXT_DRAW_BEFORE_FADE( 0 );
    if (iParam0 == 0)
    {
        uVar5 = {sub_26255( uParam1, l_U405, l_U400 + (l_U397 * 3) )};
        SET_TEXT_SCALE( uVar5._fU0, uVar5._fU4 );
        DISPLAY_TEXT( l_U405, l_U400 + (l_U397 * 3), uParam1 );
        sub_26763( g_U43573, 1, sub_18150(), uParam2 );
        sub_27325( g_U43584, 1 );
    }
    else if (iParam0 == 1)
    {
        uVar5 = {sub_26255( uParam1, l_U405, l_U400 + (l_U397 * 4) )};
        SET_TEXT_SCALE( uVar5._fU0, uVar5._fU4 );
        DISPLAY_TEXT( l_U405, l_U400 + (l_U397 * 4), uParam1 );
        sub_26763( g_U43573, 2, sub_18150(), uParam2 );
        sub_27325( g_U43584, 2 );
    }
    else if (iParam0 == 2)
    {
        uVar5 = {sub_26255( uParam1, l_U405, l_U400 + (l_U397 * 5) )};
        SET_TEXT_SCALE( uVar5._fU0, uVar5._fU4 );
        DISPLAY_TEXT( l_U405, l_U400 + (l_U397 * 5), uParam1 );
        sub_26763( g_U43573, 3, sub_18150(), uParam2 );
        sub_27325( g_U43584, 3 );
    }
    else if (iParam0 == 3)
    {
        uVar5 = {sub_26255( uParam1, l_U405, l_U400 + (l_U397 * 6) )};
        SET_TEXT_SCALE( uVar5._fU0, uVar5._fU4 );
        DISPLAY_TEXT( l_U405, l_U400 + (l_U397 * 6), uParam1 );
        sub_26763( g_U43573, 4, sub_18150(), uParam2 );
        sub_27325( g_U43584, 4 );
    }
    else if (iParam0 == 4)
    {
        uVar5 = {sub_26255( uParam1, l_U405, l_U400 + (l_U397 * 7) )};
        SET_TEXT_SCALE( uVar5._fU0, uVar5._fU4 );
        DISPLAY_TEXT( l_U405, l_U400 + (l_U397 * 7), uParam1 );
        sub_26763( g_U43573, 5, sub_18150(), uParam2 );
        sub_27325( g_U43584, 5 );
    }
    else if (iParam0 == 5)
    {
        uVar5 = {sub_26255( uParam1, l_U405, l_U400 + (l_U397 * 8) )};
        SET_TEXT_SCALE( uVar5._fU0, uVar5._fU4 );
        DISPLAY_TEXT( l_U405, l_U400 + (l_U397 * 8), uParam1 );
        sub_26763( g_U43573, 6, sub_18150(), uParam2 );
        sub_27325( g_U43584, 6 );
    }
    else if (iParam0 == 6)
    {
        uVar5 = {sub_26255( uParam1, l_U405, l_U400 + (l_U397 * 9) )};
        SET_TEXT_SCALE( uVar5._fU0, uVar5._fU4 );
        DISPLAY_TEXT( l_U405, l_U400 + (l_U397 * 9), uParam1 );
        sub_26763( g_U43573, 7, sub_18150(), uParam2 );
        sub_27325( g_U43584, 7 );
    };;;;;;;
    return;
}

void sub_54738()
{
    float fVar2;

    fVar2 = 0.50000000;
    SET_TEXT_CENTRE( 1 );
    SET_TEXT_COLOUR( 255, 255, 255, 255 );
    SET_TEXT_DROPSHADOW( l_U6, l_U3, l_U5, l_U4, 255 );
    SET_TEXT_SCALE( l_U420._fU0, l_U420._fU4 );
    SET_TEXT_WRAP( 0.20000000, 0.80000000 );
    SET_TEXT_DRAW_BEFORE_FADE( 0 );
    DISPLAY_TEXT( fVar2, l_U439, "Tripskipping" );
    SET_TEXT_CENTRE( 1 );
    SET_TEXT_COLOUR( 255, 255, 255, 255 );
    SET_TEXT_DROPSHADOW( l_U6, l_U3, l_U5, l_U4, 255 );
    SET_TEXT_SCALE( l_U423._fU0, l_U423._fU4 );
    SET_TEXT_WRAP( l_U447, l_U448 );
    SET_TEXT_DRAW_BEFORE_FADE( 0 );
    DISPLAY_TEXT( fVar2, l_U442, "TripSkipDescr" );
    sub_55003();
    return;
}

void sub_55003()
{
    SET_SPRITES_DRAW_BEFORE_FADE( 1 );
    DRAW_SPRITE( l_U496, l_U501, l_U440 + l_U502, l_U487._fU0, l_U487._fU4, l_U491, l_U492, l_U493, l_U494, l_U495 );
    DRAW_SPRITE( l_U485, l_U490, l_U440, l_U487._fU0, l_U487._fU4, l_U491, l_U492, l_U493, l_U494, l_U495 );
    DRAW_SPRITE( l_U496, l_U501, l_U441 + l_U502, l_U487._fU0, l_U487._fU4, l_U491, l_U492, l_U493, l_U494, l_U495 );
    DRAW_SPRITE( l_U485, l_U490, l_U441, l_U487._fU0, l_U487._fU4, l_U491, l_U492, l_U493, l_U494, l_U495 );
    SET_SPRITES_DRAW_BEFORE_FADE( 0 );
    return;
}

void sub_55319()
{
    float fVar2;

    fVar2 = 0.50000000;
    SET_TEXT_CENTRE( 1 );
    SET_TEXT_COLOUR( 255, 255, 255, 255 );
    SET_TEXT_DROPSHADOW( l_U6, l_U3, l_U5, l_U4, 255 );
    SET_TEXT_SCALE( l_U420._fU0, l_U420._fU4 );
    SET_TEXT_WRAP( 0.20000000, 0.80000000 );
    SET_TEXT_DRAW_BEFORE_FADE( 0 );
    DISPLAY_TEXT( fVar2, l_U443, "TaxiChecking" );
    SET_TEXT_CENTRE( 1 );
    SET_TEXT_COLOUR( 255, 255, 255, 255 );
    SET_TEXT_DROPSHADOW( l_U6, l_U3, l_U5, l_U4, 255 );
    SET_TEXT_SCALE( l_U423._fU0, l_U423._fU4 );
    SET_TEXT_WRAP( l_U447, l_U448 );
    SET_TEXT_DRAW_BEFORE_FADE( 0 );
    DISPLAY_TEXT( fVar2, l_U446, "TaxiCheckDescr" );
    sub_55585();
    return;
}

void sub_55585()
{
    SET_SPRITES_DRAW_BEFORE_FADE( 1 );
    DRAW_SPRITE( l_U496, l_U501, l_U444 + l_U502, l_U487._fU0, l_U487._fU4, l_U491, l_U492, l_U493, l_U494, l_U495 );
    DRAW_SPRITE( l_U485, l_U490, l_U444, l_U487._fU0, l_U487._fU4, l_U491, l_U492, l_U493, l_U494, l_U495 );
    DRAW_SPRITE( l_U496, l_U501, l_U445 + l_U502, l_U487._fU0, l_U487._fU4, l_U491, l_U492, l_U493, l_U494, l_U495 );
    DRAW_SPRITE( l_U485, l_U490, l_U445, l_U487._fU0, l_U487._fU4, l_U491, l_U492, l_U493, l_U494, l_U495 );
    SET_SPRITES_DRAW_BEFORE_FADE( 0 );
    return;
}

void sub_55887()
{
    float fVar2;

    fVar2 = 0.50000000;
    SET_TEXT_CENTRE( 1 );
    SET_TEXT_COLOUR( 255, 255, 255, 255 );
    SET_TEXT_DROPSHADOW( l_U6, l_U3, l_U5, l_U4, 255 );
    SET_TEXT_SCALE( l_U420._fU0, l_U420._fU4 );
    SET_TEXT_WRAP( 0.20000000, 0.80000000 );
    SET_TEXT_DRAW_BEFORE_FADE( 0 );
    DISPLAY_TEXT( fVar2, l_U435, "Cheating" );
    SET_TEXT_CENTRE( 1 );
    SET_TEXT_COLOUR( 255, 255, 255, 255 );
    SET_TEXT_DROPSHADOW( 1, 0, 0, 0, 255 );
    SET_TEXT_SCALE( l_U423._fU0, l_U423._fU4 );
    SET_TEXT_WRAP( l_U447, l_U448 );
    SET_TEXT_DRAW_BEFORE_FADE( 0 );
    DISPLAY_TEXT( fVar2, l_U438, "CheatDescrip" );
    sub_56139();
    return;
}

void sub_56139()
{
    SET_SPRITES_DRAW_BEFORE_FADE( 1 );
    DRAW_SPRITE( l_U496, l_U501, l_U436 + l_U502, l_U487._fU0, l_U487._fU4, l_U491, l_U492, l_U493, l_U494, l_U495 );
    DRAW_SPRITE( l_U485, l_U490, l_U436, l_U487._fU0, l_U487._fU4, l_U491, l_U492, l_U493, l_U494, l_U495 );
    DRAW_SPRITE( l_U496, l_U501, l_U437 + l_U502, l_U487._fU0, l_U487._fU4, l_U491, l_U492, l_U493, l_U494, l_U495 );
    DRAW_SPRITE( l_U485, l_U501, l_U437, l_U487._fU0, l_U487._fU4, l_U491, l_U492, l_U493, l_U494, l_U495 );
    SET_SPRITES_DRAW_BEFORE_FADE( 0 );
    return;
}

void sub_56490()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_56512();
    if (iVar3 > g_U42731._fU4)
    {
        g_U42731._fU4 = iVar3;
        g_U42731._fU8 = iVar2;
    }
    return;
}

int sub_56512()
{
    if (g_U15811[0])
    {
        return 27000;
    }
    return 15000;
}
