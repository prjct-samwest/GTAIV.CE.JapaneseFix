void main()
{
    float fVar2;

    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U7 = 0.45400000;
    l_U8 = 0.04400000;
    l_U9 = 0.24400000;
    l_U10 = 0.07400000;
    l_U11 = 0.06600000;
    l_U12 = 0.09400000;
    l_U13 = 0.06400000;
    l_U14 = 0.09300000;
    l_U15 = 0.29200000;
    l_U16 = 0.28900000;
    l_U17 = 1;
    l_U21 = 1;
    l_U22 = 0;
    PRINTSTRING( "ABILITY_STATS - script started...\n" );
    l_U23 = 0.00000000;
    l_U17 = 1;
    l_U25 = 0;
    if (l_U21)
    {
        l_U26 = GET_TXD( "hud" );
        l_U27 = GET_TEXTURE( l_U26, "grime" );
    }
    if (g_U39103)
    {
        sub_234();
    }
    if (g_U11109)
    {
        if (NOT g_U11103)
        {
            l_U25 = 1;
            g_U11103 = 1;
            l_U20 = 1;
        }
        l_U24 = 0;
    }
    else if (g_U11110)
    {
        if (NOT g_U11104)
        {
            g_U11104 = 1;
        }
        l_U24 = 0;
    }
    else if (g_U11111)
    {
        if (NOT g_U11105)
        {
            g_U11105 = 1;
        }
        l_U23 = 9999.90000000;
        l_U24 = 0;
    }
    else
    {
        l_U18 = 1;
        l_U20 = 1;
        l_U24 = 1;
    };;;
    while (true)
    {
        g_U11115 = 0;
        if (NOT g_U39103)
        {
            if (IS_PLAYER_PLAYING( sub_624() ))
            {
                if ((((NOT IS_MINIGAME_IN_PROGRESS()) AND (NOT sub_675())) AND (NOT g_U10974._fU0)) AND (NOT IS_AUTO_SAVE_IN_PROGRESS()))
                {
                    GET_FRAME_TIME( ref fVar2 );
                    fVar2 *= 1000.00000000;
                    l_U23 += fVar2;
                    switch (l_U24)
                    {
                        case 0:
                        if (NOT (IS_FONT_LOADED( 7 )))
                        {
                            LOAD_TEXT_FONT( 7 );
                        }
                        else if (NOT g_U38757)
                        {
                            if ((g_U11109) || (g_U11094))
                            {
                                if (l_U23 > 3000.00000000)
                                {
                                    if (NOT sub_976())
                                    {
                                        l_U23 = 0.00000000;
                                        l_U24 = 1;
                                    }
                                }
                            }
                            else if ((g_U11110) || (g_U11111))
                            {
                                if (l_U23 > 500.00000000)
                                {
                                    if (NOT sub_976())
                                    {
                                        l_U23 = 0.00000000;
                                        l_U24 = 1;
                                    }
                                }
                            }
                            else if (NOT sub_976())
                            {
                                l_U23 = 0.00000000;
                                l_U24 = 1;
                            };;;
                        }
                        break;
                        case 1:
                        if (NOT (IS_FONT_LOADED( 7 )))
                        {
                            LOAD_TEXT_FONT( 7 );
                        }
                        else if (NOT sub_976())
                        {
                            switch (l_U25)
                            {
                                case 0: break;
                                case 1:
                                PRINT_HELP( "BB_STAT_H1" );
                                l_U25 = 99;
                                break;
                                case 2:
                                l_U25 = 0;
                                break;
                                case 3:
                                l_U25 = 0;
                                break;
                                case 4:
                                l_U25 = 0;
                                break;
                                case 99:
                                l_U25 = 0;
                                break;
                            }
                        }
                        if (l_U17)
                        {
                            if (NOT (l_U25 == 0))
                            {
                                l_U23 = 0.00000000;
                            }
                            if ((l_U23 < 7000.00000000) || (l_U19))
                            {
                                if (l_U25 == 0)
                                {
                                    if ((NOT IS_SCREEN_FADING()) AND (NOT g_U38757))
                                    {
                                        if (l_U20)
                                        {
                                            sub_1466();
                                        }
                                        else if (g_U39102)
                                        {
                                            l_U17 = 0;
                                        }
                                        else
                                        {
                                            sub_7808();
                                        }
                                    }
                                }
                            }
                            else
                            {
                                l_U17 = 0;
                            }
                        }
                        if ((l_U17) AND (l_U25 == 0))
                        {
                            if (l_U18)
                            {
                                if (((IS_USING_CONTROLLER()) AND (NOT (IS_BUTTON_PRESSED( 0, 9 )))) || ((NOT IS_USING_CONTROLLER()) AND (NOT (IS_CONTROL_PRESSED( 2, 99 )))))
                                {
                                    l_U18 = 0;
                                }
                            }
                            else if (((IS_USING_CONTROLLER()) AND (IS_BUTTON_PRESSED( 0, 9 ))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_PRESSED( 2, 99 ))))
                            {
                                l_U18 = 1;
                                l_U17 = 0;
                            }
                        }
                        if (NOT l_U17)
                        {
                            sub_234();
                        }
                        break;
                    }
                }
            }
        }
        else
        {
            sub_234();
        }
        WAIT( 0 );
    }
    return;
}

void sub_234()
{
    int I;
    int iVar3;

    GET_GAME_TIMER( ref iVar3 );
    if ((iVar3 - g_U11140) > 20000)
    {
        for ( I = 0; I < 2; I++ )
        {
            g_U11165[I] = 0.00000000;
            g_U11168[I] = 0.00000000;
            g_U11171[I] = 0.00000000;
            g_U11174[I] = 0.00000000;
            g_U11177[I] = 0.00000000;
            if (NOT g_U39103)
            {
                g_U11180[I] = 0.00000000;
            }
        }
    }
    WAIT( 0 );
    PRINTSTRING( "ABILITY_STATS - script terminated. \n" );
    g_U11115 = 0;
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_624()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

int sub_675()
{
    if (NOT (IS_PLAYER_CONTROL_ON( sub_624() )))
    {
        if ((ARE_WIDESCREEN_BORDERS_ACTIVE()) AND (sub_709()))
        {
            return 1;
        }
        if (HAS_CUTSCENE_LOADED())
        {
            if (NOT HAS_CUTSCENE_FINISHED())
            {
                return 1;
            }
        }
        if (IS_SCREEN_FADED_OUT())
        {
            return 1;
        }
    }
    if (PLAYER_IS_INTERACTING_WITH_GARAGE())
    {
        return 1;
    }
    return 0;
}

int sub_709()
{
    if ((COUNT_SCRIPT_CAMS_BY_TYPE_AND_OR_STATE( 6, 1, 1 )) > 0)
    {
        return 1;
    }
    return 0;
}

int sub_976()
{
    if ((((IS_MESSAGE_BEING_DISPLAYED()) || (sub_992())) || (sub_1043())) || (IS_HELP_MESSAGE_BEING_DISPLAYED()))
    {
        return 1;
    }
    return 0;
}

int sub_992()
{
    if ((g_U94._fU0 == 1007) || (g_U94._fU0 == 1008))
    {
        return 1;
    }
    return 0;
}

int sub_1043()
{
    if (g_U558 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_1466()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    int iVar6;
    unknown uVar7;
    float fVar8;
    unknown uVar9;
    float fVar10;
    boolean bVar11;
    float fVar12;
    float fVar13;
    float fVar14;
    float fVar15;
    unknown uVar16;

    fVar8 = 0.00000000;
    uVar16 = GET_CURRENT_LANGUAGE();
    switch (uVar16)
    {
        case 0:
        case 6:
        fVar12 = sub_1559();
        fVar13 = 0.13700000;
        fVar14 = 0.21000000;
        fVar15 = 0.14500000;
        break;
        case 3:
        fVar12 = 0.35700000;
        fVar13 = 0.14500000;
        fVar14 = 0.24600000;
        fVar15 = 0.20300000;
        break;
        case 1:
        fVar12 = 0.32500000;
        fVar13 = 0.16800000;
        fVar14 = 0.24200000;
        fVar15 = 0.14500000;
        break;
        case 2:
        fVar12 = 0.30100000;
        fVar13 = 0.14500000;
        fVar14 = 0.21800000;
        fVar15 = 0.14500000;
        break;
        case 4:
        fVar12 = 0.35800000;
        fVar13 = 0.13700000;
        fVar14 = 0.24200000;
        fVar15 = 0.20700000;
        break;
        case 5:
        fVar12 = 0.37200000;
        fVar13 = 0.20800000;
        fVar14 = 0.28000000;
        fVar15 = 0.14500000;
        break;
    }
    fVar10 = sub_1822();
    fVar10 += sub_1923();
    SET_WIDESCREEN_FORMAT( 2 );
    if ((NOT g_U11129[0]) || (NOT g_U11129[1]))
    {
        l_U7 = 0.25600000;
        bVar11 = true;
    }
    SET_SPRITES_DRAW_BEFORE_FADE( 1 );
    GET_TIME_OF_DAY( ref iVar6, ref uVar7 );
    if ((iVar6 >= 6) AND (iVar6 <= 20))
    {
        if (NOT l_U21)
        {
            if (NOT l_U22)
            {
                DRAW_RECT( sub_2082() + (sub_1559() * 0.50000000), (fVar10 - 0.01300000) + (l_U7 * 0.50000000), fVar12, l_U7, 0, 0, 0, 115 );
            }
            else
            {
                DRAW_CURVED_WINDOW( sub_2082(), fVar10 - 0.01300000, fVar12, l_U7, 115 );
            }
        }
        else if (NOT bVar11)
        {
            DRAW_SPRITE( l_U27, sub_2082() + (fVar12 * 0.50000000), (fVar10 - 0.01300000) + ((l_U7 * 0.50000000) * 0.50000000), fVar12, l_U7 * 0.50000000, 0.00000000, 0, 0, 0, 128 );
            DRAW_SPRITE( l_U27, sub_2082() + (fVar12 * 0.50000000), (fVar10 - 0.01300000) + ((l_U7 * 0.50000000) * 1.50000000), fVar12, l_U7 * 0.50000000, 0.00000000, 0, 0, 0, 128 );
        }
        else
        {
            DRAW_SPRITE( l_U27, sub_2082() + (fVar12 * 0.50000000), (fVar10 - 0.01300000) + (l_U7 * 0.50000000), fVar12, l_U7, 0.00000000, 0, 0, 0, 128 );
        }
    }
    SET_SPRITES_DRAW_BEFORE_FADE( 0 );
    sub_2463();
    SET_TEXT_FONT( 7 );
    GET_HUD_COLOUR( 1, ref uVar2, ref uVar3, ref uVar4, ref uVar5 );
    SET_TEXT_COLOUR( uVar2, uVar3, uVar4, uVar5 );
    SET_TEXT_SCALE( 0.28400000, 0.45500000 );
    DISPLAY_TEXT( sub_2082() + 0.01000000, fVar10 + -0.00400000, "BB_TITLE_01" );
    SET_SPRITES_DRAW_BEFORE_FADE( 1 );
    GET_HUD_COLOUR( 1, ref uVar2, ref uVar3, ref uVar4, ref uVar5 );
    DRAW_RECT( sub_2082() + (fVar12 * 0.50000000), (fVar10 + -0.00400000) + 0.03700000, ((fVar12 - 0.01000000) - 0.01000000) + (2.00000000 * 0.00150000), 0.00200000 + (2.00000000 * 0.00150000), 0, 0, 0, 128 );
    DRAW_RECT( sub_2082() + (fVar12 * 0.50000000), (fVar10 + -0.00400000) + 0.03700000, (fVar12 - 0.01000000) - 0.01000000, 0.00200000, uVar2, uVar3, uVar4, uVar5 );
    SET_SPRITES_DRAW_BEFORE_FADE( 0 );
    if (g_U11129[0])
    {
        sub_2463();
        GET_HUD_COLOUR( 7, ref uVar2, ref uVar3, ref uVar4, ref uVar5 );
        SET_TEXT_COLOUR( uVar2, uVar3, uVar4, uVar5 );
        SET_TEXT_SCALE( 0.20700000, 0.32900000 );
        DISPLAY_TEXT( sub_2082() + 0.01000000, fVar10 + l_U8, "BB_TITLE_02" );
        sub_2463();
        GET_HUD_COLOUR( 1, ref uVar2, ref uVar3, ref uVar4, ref uVar5 );
        SET_TEXT_COLOUR( uVar2, uVar3, uVar4, uVar5 );
        SET_TEXT_SCALE( 0.20700000, 0.32900000 );
        DISPLAY_TEXT( sub_2082() + 0.01000000, (fVar10 + l_U8) + (0.02700000 * 1.00000000), "BB_MAX_HEALTH" );
        sub_3121( sub_2082() + fVar14, (fVar10 + l_U8) + (0.02700000 * 1.00000000), 0.01300000, fVar15, 200.00000000, 1000.00000000, g_U11144[0], g_U11165[0], 0, 0 );
        sub_2463();
        GET_HUD_COLOUR( 1, ref uVar2, ref uVar3, ref uVar4, ref uVar5 );
        SET_TEXT_COLOUR( uVar2, uVar3, uVar4, uVar5 );
        SET_TEXT_SCALE( 0.20700000, 0.32900000 );
        DISPLAY_TEXT( sub_2082() + 0.01000000, (fVar10 + l_U8) + (0.02700000 * 2.00000000), "BB_ACCURACY" );
        sub_3121( sub_2082() + fVar14, (fVar10 + l_U8) + (0.02700000 * 2.00000000), 0.01300000, fVar15, 0.00000000, 100.00000000, g_U11150[0], g_U11171[0], 1, 0 );
        sub_2463();
        GET_HUD_COLOUR( 1, ref uVar2, ref uVar3, ref uVar4, ref uVar5 );
        SET_TEXT_COLOUR( uVar2, uVar3, uVar4, uVar5 );
        SET_TEXT_SCALE( 0.20700000, 0.32900000 );
        DISPLAY_TEXT( sub_2082() + 0.01000000, (fVar10 + l_U8) + (0.02700000 * 3.00000000), "BB_SHOOTRATE" );
        sub_3121( sub_2082() + fVar14, (fVar10 + l_U8) + (0.02700000 * 3.00000000), 0.01300000, fVar15, 0.00000000, 100.00000000, g_U11153[0], g_U11174[0], 2, 0 );
        sub_2463();
        GET_HUD_COLOUR( 1, ref uVar2, ref uVar3, ref uVar4, ref uVar5 );
        SET_TEXT_COLOUR( uVar2, uVar3, uVar4, uVar5 );
        SET_TEXT_SCALE( 0.20700000, 0.32900000 );
        DISPLAY_TEXT( sub_2082() + 0.01000000, (fVar10 + l_U8) + (0.02700000 * 4.00000000), "BB_WEAPONLEVEL" );
        sub_3121( sub_2082() + fVar14, (fVar10 + l_U8) + (0.02700000 * 4.00000000), 0.01300000, fVar15, sub_5260( g_U11147[0] ), sub_5402( g_U11147[0] ), g_U11147[0], g_U11168[0], 3, 0 );
        sub_2463();
        GET_HUD_COLOUR( 1, ref uVar2, ref uVar3, ref uVar4, ref uVar5 );
        SET_TEXT_COLOUR( uVar2, uVar3, uVar4, uVar5 );
        SET_TEXT_SCALE( 0.20700000, 0.32900000 );
        DISPLAY_TEXT( sub_2082() + 0.01000000, (fVar10 + l_U8) + (0.02700000 * 5.00000000), "BB_CURRWEAP" );
        sub_2463();
        GET_HUD_COLOUR( 7, ref uVar2, ref uVar3, ref uVar4, ref uVar5 );
        SET_TEXT_COLOUR( uVar2, uVar3, uVar4, uVar5 );
        SET_TEXT_SCALE( 0.20700000, 0.32900000 );
        DISPLAY_TEXT( sub_2082() + fVar13, (fVar10 + l_U8) + (0.02700000 * 5.00000000), sub_5719( g_U11147[0], 0 ) );
        sub_2463();
        GET_HUD_COLOUR( 1, ref uVar2, ref uVar3, ref uVar4, ref uVar5 );
        SET_TEXT_COLOUR( uVar2, uVar3, uVar4, uVar5 );
        SET_TEXT_SCALE( 0.20700000, 0.32900000 );
        DISPLAY_TEXT( sub_2082() + 0.01000000, (fVar10 + l_U8) + (0.02700000 * 6.00000000), "BB_NEXTWEAP" );
        sub_2463();
        GET_HUD_COLOUR( 7, ref uVar2, ref uVar3, ref uVar4, ref uVar5 );
        SET_TEXT_COLOUR( uVar2, uVar3, uVar4, uVar5 );
        SET_TEXT_SCALE( 0.20700000, 0.32900000 );
        DISPLAY_TEXT( sub_2082() + fVar13, (fVar10 + l_U8) + (0.02700000 * 6.00000000), sub_6224( g_U11147[0], 0 ) );
        g_U11115 = 1;
    }
    if (g_U11129[1])
    {
        if (bVar11)
        {
            l_U9 = l_U8;
        }
        sub_2463();
        GET_HUD_COLOUR( 7, ref uVar2, ref uVar3, ref uVar4, ref uVar5 );
        SET_TEXT_COLOUR( uVar2, uVar3, uVar4, uVar5 );
        SET_TEXT_SCALE( 0.20700000, 0.32900000 );
        DISPLAY_TEXT( sub_2082() + 0.01000000, fVar10 + l_U9, "BB_TITLE_03" );
        sub_2463();
        GET_HUD_COLOUR( 1, ref uVar2, ref uVar3, ref uVar4, ref uVar5 );
        SET_TEXT_COLOUR( uVar2, uVar3, uVar4, uVar5 );
        SET_TEXT_SCALE( 0.20700000, 0.32900000 );
        DISPLAY_TEXT( sub_2082() + 0.01000000, (fVar10 + l_U9) + (0.02700000 * 1.00000000), "BB_MAX_HEALTH" );
        sub_3121( sub_2082() + fVar14, (fVar10 + l_U9) + (0.02700000 * 1.00000000), 0.01300000, fVar15, 200.00000000, 1000.00000000, g_U11144[1], g_U11165[1], 0, 0 );
        sub_2463();
        GET_HUD_COLOUR( 1, ref uVar2, ref uVar3, ref uVar4, ref uVar5 );
        SET_TEXT_COLOUR( uVar2, uVar3, uVar4, uVar5 );
        SET_TEXT_SCALE( 0.20700000, 0.32900000 );
        DISPLAY_TEXT( sub_2082() + 0.01000000, (fVar10 + l_U9) + (0.02700000 * 2.00000000), "BB_ACCURACY" );
        sub_3121( sub_2082() + fVar14, (fVar10 + l_U9) + (0.02700000 * 2.00000000), 0.01300000, fVar15, 0.00000000, 100.00000000, g_U11150[1], g_U11171[1], 1, 0 );
        sub_2463();
        GET_HUD_COLOUR( 1, ref uVar2, ref uVar3, ref uVar4, ref uVar5 );
        SET_TEXT_COLOUR( uVar2, uVar3, uVar4, uVar5 );
        SET_TEXT_SCALE( 0.20700000, 0.32900000 );
        DISPLAY_TEXT( sub_2082() + 0.01000000, (fVar10 + l_U9) + (0.02700000 * 3.00000000), "BB_SHOOTRATE" );
        sub_3121( sub_2082() + fVar14, (fVar10 + l_U9) + (0.02700000 * 3.00000000), 0.01300000, fVar15, 0.00000000, 100.00000000, g_U11153[1], g_U11174[1], 2, 0 );
        sub_2463();
        GET_HUD_COLOUR( 1, ref uVar2, ref uVar3, ref uVar4, ref uVar5 );
        SET_TEXT_COLOUR( uVar2, uVar3, uVar4, uVar5 );
        SET_TEXT_SCALE( 0.20700000, 0.32900000 );
        DISPLAY_TEXT( sub_2082() + 0.01000000, (fVar10 + l_U9) + (0.02700000 * 4.00000000), "BB_WEAPONLEVEL" );
        sub_3121( sub_2082() + fVar14, (fVar10 + l_U9) + (0.02700000 * 4.00000000), 0.01300000, fVar15, sub_5260( g_U11147[1] ), sub_5402( g_U11147[1] ), g_U11147[1], g_U11168[1], 3, 0 );
        sub_2463();
        GET_HUD_COLOUR( 1, ref uVar2, ref uVar3, ref uVar4, ref uVar5 );
        SET_TEXT_COLOUR( uVar2, uVar3, uVar4, uVar5 );
        SET_TEXT_SCALE( 0.20700000, 0.32900000 );
        DISPLAY_TEXT( sub_2082() + 0.01000000, (fVar10 + l_U9) + (0.02700000 * 5.00000000), "BB_CURRWEAP" );
        sub_2463();
        GET_HUD_COLOUR( 7, ref uVar2, ref uVar3, ref uVar4, ref uVar5 );
        SET_TEXT_COLOUR( uVar2, uVar3, uVar4, uVar5 );
        SET_TEXT_SCALE( 0.20700000, 0.32900000 );
        DISPLAY_TEXT( sub_2082() + fVar13, (fVar10 + l_U9) + (0.02700000 * 5.00000000), sub_5719( g_U11147[1], 3 ) );
        sub_2463();
        GET_HUD_COLOUR( 1, ref uVar2, ref uVar3, ref uVar4, ref uVar5 );
        SET_TEXT_COLOUR( uVar2, uVar3, uVar4, uVar5 );
        SET_TEXT_SCALE( 0.20700000, 0.32900000 );
        DISPLAY_TEXT( sub_2082() + 0.01000000, (fVar10 + l_U9) + (0.02700000 * 6.00000000), "BB_NEXTWEAP" );
        sub_2463();
        GET_HUD_COLOUR( 7, ref uVar2, ref uVar3, ref uVar4, ref uVar5 );
        SET_TEXT_COLOUR( uVar2, uVar3, uVar4, uVar5 );
        SET_TEXT_SCALE( 0.20700000, 0.32900000 );
        DISPLAY_TEXT( sub_2082() + fVar13, (fVar10 + l_U9) + (0.02700000 * 6.00000000), sub_6224( g_U11147[1], 1 ) );
        g_U11115 = 1;
    }
    return;
}

void sub_1559()
{
    if ((GET_IS_HIDEF()) || (GET_IS_WIDESCREEN()))
    {
        return l_U15;
    }
    return l_U16;
}

void sub_1822()
{
    if ((GET_IS_HIDEF()) || (sub_1838()))
    {
        return l_U13;
    }
    return l_U14;
}

int sub_1838()
{
    unknown uVar2;
    float fVar3;

    if (IS_HELP_MESSAGE_BEING_DISPLAYED())
    {
        GET_HELP_MESSAGE_BOX_SIZE( ref uVar2, ref fVar3 );
        if (fVar3 > 0.00000000)
        {
            return 1;
        }
    }
    return 0;
}

float sub_1923()
{
    unknown uVar2;
    float Result;

    if (sub_1838())
    {
        GET_HELP_MESSAGE_BOX_SIZE( ref uVar2, ref Result );
        Result -= 0.01300000 * 3.00000000;
        return Result;
    }
    return 0.00000000;
}

void sub_2082()
{
    if (GET_IS_HIDEF())
    {
        return l_U11;
    }
    if (GET_IS_WIDESCREEN())
    {
        return l_U12 - 0.00200000;
    }
    return l_U12;
}

void sub_2463()
{
    SET_TEXT_DRAW_BEFORE_FADE( 1 );
    SET_TEXT_PROPORTIONAL( 1 );
    SET_TEXT_WRAP( 0.00000000, 1.00000000 );
    SET_TEXT_JUSTIFY( 1 );
    SET_TEXT_CENTRE( 0 );
    SET_TEXT_RIGHT_JUSTIFY( 0 );
    SET_TEXT_BACKGROUND( 0 );
    SET_TEXT_DROPSHADOW( 0, 0, 0, 0, 128 );
    SET_TEXT_EDGE( 1, 0, 0, 0, 128 );
    SET_TEXT_FONT( 0 );
    return;
}

void sub_3121(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, float fParam4, float fParam5, float fParam6, float fParam7, unknown uParam8, boolean bParam9)
{
    float fVar12;
    float fVar13;
    float fVar14;
    float fVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;

    if ((fParam4 > 0.00000000) AND (fParam5 > 0.00000000))
    {
        if (fParam4 == fParam5)
        {
            fParam4 = 0.00000000;
            fParam5 = 1.00000000;
            fParam6 = 1.00000000;
            fParam7 = 0.00000000;
        }
    }
    SET_SPRITES_DRAW_BEFORE_FADE( 1 );
    GET_HUD_COLOUR( 2, ref uVar16, ref uVar17, ref uVar18, ref uVar19 );
    DRAW_RECT( uParam0, (uParam1 + (uParam2 * 0.50000000)) + 0.00300000, uParam3 + (2.00000000 * 0.00150000), uParam2 + (2.00000000 * 0.00150000), uVar16, uVar17, uVar18, 255 );
    GET_HUD_COLOUR( 66, ref uVar16, ref uVar17, ref uVar18, ref uVar19 );
    DRAW_RECT( uParam0, (uParam1 + (uParam2 * 0.50000000)) + 0.00300000, uParam3, uParam2, uVar16, uVar17, uVar18, uVar19 );
    GET_HUD_COLOUR( 1, ref uVar16, ref uVar17, ref uVar18, ref uVar19 );
    fVar12 = fParam6 - fParam4;
    fVar12 /= fParam5 - fParam4;
    DRAW_RECT( (uParam0 - (uParam3 * 0.50000000)) + ((fVar12 * uParam3) * 0.50000000), (uParam1 + (uParam2 * 0.50000000)) + 0.00300000, fVar12 * uParam3, uParam2, uVar16, uVar17, uVar18, uVar19 );
    GET_HUD_COLOUR( 7, ref uVar16, ref uVar17, ref uVar18, ref uVar19 );
    if (fParam7 > (fParam6 - fParam4))
    {
        fParam7 = fParam6 - fParam4;
    }
    fVar13 = fParam7;
    fVar13 /= fParam5 - fParam4;
    fVar14 = fVar13 * uParam3;
    if (fVar14 > 0.00000000)
    {
        if (fVar14 < (7.50000000 * 0.00010000))
        {
            fVar14 = 7.50000000 * 0.00010000;
        }
    }
    DRAW_RECT( ((uParam0 - (uParam3 * 0.50000000)) + (fVar12 * uParam3)) - ((fVar13 * uParam3) * 0.50000000), (uParam1 + (uParam2 * 0.50000000)) + 0.00300000, fVar14, uParam2, uVar16, uVar17, uVar18, uVar19 );
    uVar20 = GET_TXD( "hud" );
    uVar21 = GET_TEXTURE( uVar20, "bardirts" );
    if (NOT bParam9)
    {
        switch (uParam8)
        {
            case 0:
            DRAW_SPRITE( uVar21, uParam0, (uParam1 + (uParam2 * 0.50000000)) + 0.00300000, uParam3 + (2.00000000 * 0.00150000), uParam2 + (2.00000000 * 0.00150000), 0.00000000, 0, 0, 0, 160 );
            break;
            case 1:
            DRAW_SPRITE( uVar21, uParam0, (uParam1 + (uParam2 * 0.50000000)) + 0.00300000, (uParam3 + (2.00000000 * 0.00150000)) * -1.00000000, uParam2 + (2.00000000 * 0.00150000), 0.00000000, 0, 0, 0, 160 );
            break;
            case 2:
            DRAW_SPRITE( uVar21, uParam0, (uParam1 + (uParam2 * 0.50000000)) + 0.00300000, uParam3 + (2.00000000 * 0.00150000), (uParam2 + (2.00000000 * 0.00150000)) * -1.00000000, 0.00000000, 0, 0, 0, 160 );
            break;
            default:
            DRAW_SPRITE( uVar21, uParam0, (uParam1 + (uParam2 * 0.50000000)) + 0.00300000, (uParam3 + (2.00000000 * 0.00150000)) * -1.00000000, (uParam2 + (2.00000000 * 0.00150000)) * -1.00000000, 0.00000000, 0, 0, 0, 160 );
            break;
        }
    }
    else
    {
        switch (uParam8)
        {
            case 0:
            fVar15 = (uParam3 + (2.00000000 * 0.00150000)) * 0.50000000;
            DRAW_SPRITE( uVar21, uParam0 - (fVar15 * 0.50000000), (uParam1 + (uParam2 * 0.50000000)) + 0.00300000, fVar15, uParam2 + (2.00000000 * 0.00150000), 0.00000000, 0, 0, 0, 160 );
            DRAW_SPRITE( uVar21, uParam0 + (fVar15 * 0.50000000), (uParam1 + (uParam2 * 0.50000000)) + 0.00300000, fVar15, uParam2 + (2.00000000 * 0.00150000), 0.00000000, 0, 0, 0, 160 );
            break;
            case 1:
            fVar15 = ((uParam3 + (2.00000000 * 0.00150000)) * -1.00000000) * 0.50000000;
            DRAW_SPRITE( uVar21, uParam0 - (fVar15 * 0.50000000), (uParam1 + (uParam2 * 0.50000000)) + 0.00300000, fVar15, uParam2 + (2.00000000 * 0.00150000), 0.00000000, 0, 0, 0, 160 );
            DRAW_SPRITE( uVar21, uParam0 + (fVar15 * 0.50000000), (uParam1 + (uParam2 * 0.50000000)) + 0.00300000, fVar15, uParam2 + (2.00000000 * 0.00150000), 0.00000000, 0, 0, 0, 160 );
            break;
            case 2:
            fVar15 = (uParam3 + (2.00000000 * 0.00150000)) * 0.50000000;
            DRAW_SPRITE( uVar21, uParam0 - (fVar15 * 0.50000000), (uParam1 + (uParam2 * 0.50000000)) + 0.00300000, fVar15, (uParam2 + (2.00000000 * 0.00150000)) * -1.00000000, 0.00000000, 0, 0, 0, 160 );
            DRAW_SPRITE( uVar21, uParam0 + (fVar15 * 0.50000000), (uParam1 + (uParam2 * 0.50000000)) + 0.00300000, fVar15, (uParam2 + (2.00000000 * 0.00150000)) * -1.00000000, 0.00000000, 0, 0, 0, 160 );
            break;
            default:
            fVar15 = ((uParam3 + (2.00000000 * 0.00150000)) * -1.00000000) * 0.50000000;
            DRAW_SPRITE( uVar21, uParam0 - (fVar15 * 0.50000000), (uParam1 + (uParam2 * 0.50000000)) + 0.00300000, fVar15, (uParam2 + (2.00000000 * 0.00150000)) * -1.00000000, 0.00000000, 0, 0, 0, 160 );
            DRAW_SPRITE( uVar21, uParam0 + (fVar15 * 0.50000000), (uParam1 + (uParam2 * 0.50000000)) + 0.00300000, fVar15, (uParam2 + (2.00000000 * 0.00150000)) * -1.00000000, 0.00000000, 0, 0, 0, 160 );
            break;
        }
    }
    SET_SPRITES_DRAW_BEFORE_FADE( 0 );
    return;
}

float sub_5260(float fParam0)
{
    if (fParam0 < 1.00000000)
    {
        return 0.00000000;
    }
    else if (fParam0 < 3.00000000)
    {
        return 1.00000000;
    }
    else if (fParam0 < 8.00000000)
    {
        return 3.00000000;
    }
    else if (fParam0 < 13.00000000)
    {
        return 8.00000000;
    }
    else
    {
        return 13.00000000;
    };;;;
    return 0.00000000;
}

float sub_5402(float fParam0)
{
    if (fParam0 < 1.00000000)
    {
        return 1.00000000;
    }
    else if (fParam0 < 3.00000000)
    {
        return 3.00000000;
    }
    else if (fParam0 < 8.00000000)
    {
        return 8.00000000;
    }
    else
    {
        return 13.00000000;
    };;;
    return 0.00000000;
}

string sub_5719(float fParam0, int iParam1)
{
    if (iParam1 < 1)
    {
        if (fParam0 < 1.00000000)
        {
            return "BB_WEAP1";
        }
        else if (fParam0 < 3.00000000)
        {
            return "BB_WEAP2";
        }
        else if (fParam0 < 8.00000000)
        {
            return "BB_WEAP3";
        }
        else if (fParam0 < 13.00000000)
        {
            return "BB_WEAP4";
        }
        else
        {
            return "BB_WEAP5";
        };;;;
        break;
    }
    if (fParam0 < 1.00000000)
    {
        return "BB_WEAP1";
        break;
    }
    if (fParam0 < 3.00000000)
    {
        return "BB_WEAP6";
        break;
    }
    if (fParam0 < 8.00000000)
    {
        return "BB_WEAP7";
        break;
    }
    if (fParam0 < 13.00000000)
    {
        return "BB_WEAP8";
        break;
    }
    return "BB_WEAP9";
}

string sub_6224(float fParam0, int iParam1)
{
    if (iParam1 < 1)
    {
        if (fParam0 < 1.00000000)
        {
            return "BB_WEAP2";
        }
        else if (fParam0 < 3.00000000)
        {
            return "BB_WEAP3";
        }
        else if (fParam0 < 8.00000000)
        {
            return "BB_WEAP4";
        }
        else if (fParam0 < 13.00000000)
        {
            return "BB_WEAP5";
        }
        else
        {
            return "BB_GOTTOPWEAP";
        };;;;
        break;
    }
    if (fParam0 < 1.00000000)
    {
        return "BB_WEAP6";
        break;
    }
    if (fParam0 < 3.00000000)
    {
        return "BB_WEAP7";
        break;
    }
    if (fParam0 < 8.00000000)
    {
        return "BB_WEAP8";
        break;
    }
    if (fParam0 < 13.00000000)
    {
        return "BB_WEAP9";
        break;
    }
    return "BB_GOTTOPWEAP";
}

void sub_7808()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    int iVar6;
    unknown uVar7;
    boolean bVar8;
    float fVar9;
    unknown uVar10;
    float fVar11;

    fVar9 = 0.00000000;
    if ((NOT g_U11129[0]) || (NOT g_U11129[1]))
    {
        bVar8 = true;
    }
    if ((g_U11129[0]) || (g_U11129[1]))
    {
        fVar11 = sub_1822();
        fVar11 += sub_1923();
        SET_WIDESCREEN_FORMAT( 2 );
        if (bVar8)
        {
            l_U10 = 0.04600000;
        }
        SET_SPRITES_DRAW_BEFORE_FADE( 1 );
        GET_TIME_OF_DAY( ref iVar6, ref uVar7 );
        if ((iVar6 >= 6) AND (iVar6 <= 20))
        {
            DRAW_SPRITE( l_U27, sub_2082() + (sub_1559() * 0.50000000), (fVar11 - 0.01300000) + (l_U10 * 0.50000000), sub_1559(), l_U10, 0.00000000, 0, 0, 0, 128 );
        }
        SET_SPRITES_DRAW_BEFORE_FADE( 0 );
        if (g_U11129[0])
        {
            sub_2463();
            GET_HUD_COLOUR( 7, ref uVar2, ref uVar3, ref uVar4, ref uVar5 );
            SET_TEXT_COLOUR( uVar2, uVar3, uVar4, uVar5 );
            SET_TEXT_SCALE( 0.20700000, 0.32900000 );
            DISPLAY_TEXT( sub_2082() + 0.01000000, fVar11 + 0.00100000, "BB_TITLE_02" );
            sub_3121( sub_2082() + 0.17500000, fVar11 + 0.00100000, 0.01300000, 0.20300000, 0.00000000, 100.00000000, g_U11141[0], g_U11180[0], 0, 1 );
        }
        if (g_U11129[1])
        {
            sub_2463();
            GET_HUD_COLOUR( 7, ref uVar2, ref uVar3, ref uVar4, ref uVar5 );
            SET_TEXT_COLOUR( uVar2, uVar3, uVar4, uVar5 );
            SET_TEXT_SCALE( 0.20700000, 0.32900000 );
            if (g_U11129[0])
            {
                DISPLAY_TEXT( sub_2082() + 0.01000000, (fVar11 + 0.00100000) + 0.02700000, "BB_TITLE_03" );
            }
            else
            {
                DISPLAY_TEXT( sub_2082() + 0.01000000, fVar11 + 0.00100000, "BB_TITLE_03" );
            }
            if (g_U11129[0])
            {
                sub_3121( sub_2082() + 0.17500000, (fVar11 + 0.00100000) + 0.02700000, 0.01300000, 0.20300000, 0.00000000, 100.00000000, g_U11141[1], g_U11180[1], 1, 1 );
            }
            else
            {
                sub_3121( sub_2082() + 0.17500000, fVar11 + 0.00100000, 0.01300000, 0.20300000, 0.00000000, 100.00000000, g_U11141[1], g_U11180[1], 1, 1 );
            }
        }
        g_U11115 = 1;
    }
    return;
}
